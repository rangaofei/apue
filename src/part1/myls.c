/**
 * 程序定义了一个读取文件夹下文件的功能
 * 要求输出一个参数，即文件夹的路径
 */
#include "apue.h"
#include <dirent.h>

int main(int argc, char *argv[]) {
    DIR *dp;
    struct dirent *dirp;

    if (argc != 2) {
        err_quit("usage:ls directory_name");
    }

    if ((dp = opendir(argv[1])) == NULL) {
        err_sys("can't open %s", argv[1]);
    }
    while ((dirp = readdir(dp)) != NULL) {
        printf("%s\n", dirp->d_name);
    }
    closedir(dp);
    exit(0);
}