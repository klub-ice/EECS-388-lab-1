//
// Created by zoey on 9/2/2026.
//
#include <stdio.h>

int main(void) {
    int array[10] = {500, 1, 255, 7, -12, 40, 42, 999, 50, 227};
    int choice;
    int max;
    int min;

    printf("Choose m n or b: ");
    if (scanf(" %c", &choice) != 1) {
        printf("Please enter a valid choice\n");
        return 1;
    }

    max = array[0];
    min = array[0];

    for (int i = 0; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    if (choice == 'm') {
        printf("%d\n", max);
    }
    else if (choice == 'n') {
        printf("%d\n", min);
    }
    else if (choice == 'b') {
        printf("%d,%d\n", max, min);
    }
    else {
        printf("Please enter a valid choice\n");
    }

    return 0;
}
