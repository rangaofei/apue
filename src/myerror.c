//
// Created by saka on 2018/1/28.
//
#include "apue.h"
#include <errno.h>

int main(int argc, char *argv[]) {
    fprintf(stderr, "EACCES:%s\n", strerror(EACCES));
    errno = ENOENT;
    perror(argv[0]);
    exit(0);
};
