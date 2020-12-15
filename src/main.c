#include <stdio.h>
#include "file_endings.h"

void check_list();

int main() {
    printf("Hello World!\n");
    check_list();
}

void check_list() {
    printf("Size of array is: %d\n", file_ends_size);
    for(int i=0; i<file_ends_size; i++) {
        printf("File Ending: %s\n", file_ends[i]);
    }
}