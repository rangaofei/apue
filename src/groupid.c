//
// Created by saka on 2018/1/28.
//

#include <ifaddrs.h>
#include "apue.h"

int main(void) {
    printf("uid=%d,gid=%d\n", getuid(), getpid());
    getifaddrs(NULL);
    freeifaddrs(NULL);
}