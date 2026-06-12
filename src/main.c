#include <dirent.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    char* arg = argc > 1 ? argv[1] : ".";

    DIR* d = opendir(arg);
    struct dirent* rd = readdir(d);

    printf("%p\n", d);
    printf("%p\n", rd);

    return 0;
}
