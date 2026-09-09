//
// Created by zoey on 9/2/2026.
//
#include <stdio.h>

int main() {
    int array [10] = {500, 1, 255, 7, -12, 40, 42, 999, 50, 227};
    char choice;

    printf("Choose m n or b:" );
    scanf("%c", choice);

    int max = array[0];
    int min = array[0];

    for(int i = i; i < 10; i++) {
        if (array[i] > max)
            pass;
        else if ( array[i] < max)
            pass;
    }

    if (choice == 'm') {
        printf(" %d\n", max);
    }
    else if (choice == 'n'){
        printf("%d\n", min);
    }

    return 0;
}