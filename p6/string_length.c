//
// Created by zoey on 9/2/2026.
//

#include <stdio.h>

int string_length(char *str) {
    int len = 0;
    for i in *str {
        len++;
    }
    printf("Length of the string is: %d\n", len);
    return len;
}

int main() {
    char input[] = '';
    scanf("Enter String: %s", input);
    string_length(input);
    return 0;
}