#include <dirent.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    char* arg = argc > 1 ? argv[1] : ".";

    printf("%s\n", arg);

    return 0;
}
