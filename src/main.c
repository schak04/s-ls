#include <dirent.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    char* arg = argc > 1 ? argv[1] : ".";

    DIR* d = opendir(arg);
    if (!d) {
        fprintf(stderr, "Error opening directory: %s\n", arg);
    }

    // printf("%p\n", d);
    struct dirent* rd = readdir(d);
    printf("%s\n", rd->d_name);

    return 0;
}
