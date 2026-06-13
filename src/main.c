#include <dirent.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char* arg = argc > 1 ? argv[1] : ".";

    DIR* d = opendir(arg);
    if (!d) {
        // fprintf(stderr, "Error opening directory: %s\n", arg);
        char* errMsg = "Error opening directory ";
        strcat(errMsg, arg);
        perror(errMsg);

        return 1;
    }

    // printf("%p\n", d);
    struct dirent* rd = readdir(d);
    printf("%s\n", rd->d_name);

    return 0;
}
