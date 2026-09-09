//
// Created by zoey on 9/2/2026.
//
#include <stdio.h>

int main() {
    int array [10] = {500, 1, 255, 7, -12, 40, 42, 999, 50, 227};
    int choice;

    printf("Choose m n or b:" ); // choices for user to pick
    scanf("%c", choice);

    int max = array[0]; // sets max to first array slot
    int min = array[0];// sets min to first array slot

    for(int i = i; i < 10; i++) { // loops through array to find max and min
        if (array[i] > max)
            max = array[i];
        if (array[i] < min)
            min = array[i];
    }
    // if statement tree to decide what happens based on user input
    if (choice == 'm') {
        printf(" %d\n", max);
    }
    else if (choice == 'n'){
        printf("%d\n", min);
    }
    else if (choice == 'b'){
        printf("%d,%d\n", max, min);
    }
    else {
        printf("Please enter a valid choice\n ");
    }

    return 0;
}