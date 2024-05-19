#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // @POS1: thisfile
    // @POS2: input file
    // @POS3: output destination
    if(argc < 2) {
        printf("Invalid format.\nUse rffc file_name or\nrffc file_name output");
        return 1;
    }
    char file_name[100];
    char output_name[100];
    if(strlen(argv[1]) >= 100) {
        printf("Input length exceeding 100");
        return 1;
    }
    if(argc == 2) {
        char* default_name = "out.exe";
        strcpy(output_name, default_name);        
    }
    else {
        if(strlen(argv[2]) >= 100) {
            printf("output length exceeding 100");
            return 1;
        }
        strcpy_s(output_name, sizeof argv[2], argv[2]);
    }
    strcpy_s(file_name, sizeof argv[1], argv[1]);
    //printf("File name: %s\n", file_name);
    //printf("Output name: %s\n", output_name);
}
