//
// Created by saka on 2018/1/28.
//

#include "apue.h"

int main(void) {
    printf("hello world from process ID %ld\n", (long) getpid());
    exit(0);
}