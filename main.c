#include <stdio.h>

void check_list();

int main() {
    printf("Hello World!\n");
    check_list();
}

void check_list() {
    // First number is number of elements, second number is max size of string.
    char file_ends[6][5] = {".PNG", ".JPG", ".JPEG", ".GIF", ".PDF", ".JSON"};
    // Total size of array/ Total size of an element = Total Elements
    int file_ends_size = sizeof(file_ends)/sizeof(file_ends[0]);
    printf("Size of array is: %d\n", file_ends_size);
    for(int i=0; i<file_ends_size; i++) {
        printf("File Ending: %s\n", file_ends[i]);
    }
}