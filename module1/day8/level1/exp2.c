#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copy_file(const char* source_filename, const char* destination_filename, char option) {
    FILE* source_file = fopen(source_filename, "r");
    FILE* destination_file = fopen(destination_filename, "w");

    if (source_file == NULL || destination_file == NULL) {
        printf("Error opening files.\n");
        return;
    }

    int ch;
    while ((ch = fgetc(source_file)) != EOF) {
        if (option == 'u') {
            ch = toupper(ch);
        } else if (option == 'l') {
            ch = tolower(ch);
        } else if (option == 's') {
            if (islower(ch)) {
                ch = toupper(ch);
            }
        }

        fputc(ch, destination_file);
    }

    printf("File copied successfully.\n");

    fclose(source_file);
    fclose(destination_file);
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <destination_file>\n");
        return 1;
    }

    char option = '\0';
    if (argc >= 4) {
        option = argv[1][1];
    }

    char* source_filename = argv[argc - 2];
    char* destination_filename = argv[argc - 1];

    copy_file(source_filename, destination_filename, option);

    return 0;
}
