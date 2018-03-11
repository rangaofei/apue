/**
 * 从标准输入读取内容复制到标准输出中
 * @param STDIN_FILENO 表示标准输入描述符，0
 * @param STDOUT_FILENO 表示标准输出描述符，1
 * 编译完成后，输入指令"./copytest > data.txt" 将会将键盘输入的内容复制到data.txt中
 * 输入指令"./copytest < inputfile > data.txt"将会inputfile的内容复制到data.txt中
 */
#include "apue.h"

#define BUFFSIZE 4096

int main(void) {
    ssize_t n;
    char buf[BUFFSIZE];

    while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0) {
        if (write(STDOUT_FILENO, buf, (size_t) n) != n) {
            err_sys("write error!");
        }
    }

    if (n < 0) {
        err_sys("read error");
    }
    exit(0);
}
