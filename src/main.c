#include <dirent.h>
#include <stdio.h>
#include <string.h>

void swapStr(char* str1, char* str2) {
    char temp[40];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    return;
}

void sortStrArr(char** strArr, size_t arrSize) {  // bubble sort
    bool anySwaps;
    for (int i = 0; i < (int)arrSize - 1; i++) {
        anySwaps = false;
        for (int j = 0; j < (int)arrSize - i - 1; j++) {
            if (strcmp(strArr[j], strArr[j + 1]) > 1) {
                swapStr(strArr[j], strArr[j + 1]);
                anySwaps = true;
            }
        }
        if (!anySwaps) {
            break;
        }
    }
}

int main(int argc, char* argv[]) {
    char* arg = argc > 1 ? argv[1] : ".";

    DIR* d = opendir(arg);
    if (!d) {
        // fprintf(stderr, "Error opening directory: %s\n", arg);
        char errMsg[40] = "Error opening directory ";
        strcat(errMsg, arg);
        perror(errMsg);

        return 1;
    }

    struct dirent* rd = NULL;

    size_t dirCountExclDotfiles = 0;  // size_t, since this will be the size of an array
    while ((rd = readdir(d)) != NULL) {
        if (rd->d_name[0] != '.') {
            dirCountExclDotfiles++;
        }
    }

    char* dirListExclDotfiles[dirCountExclDotfiles];
    int idx = 0;

    while ((rd = readdir(d)) != NULL) {
        if (rd->d_name[0] != '.') {
            dirListExclDotfiles[idx++] = rd->d_name;
        }
    }

    sortStrArr(dirListExclDotfiles, dirCountExclDotfiles);

    for (int i = 0; i < (int)dirCountExclDotfiles; i++) {
        printf("%s\n", dirListExclDotfiles[i]);
    }

    closedir(d);

    return 0;
}
