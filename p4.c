//
// Created by Zoey on 9/9/2026.
//
#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Enter integer: \n");
    scanf("%d", num);

    printf("Binary: \n");

    for (int i = 7; i >= 0; i--) { // loops from 7 to 0 with incrementor decreasing
        int bit = (num >> i) & 1; // sets bit to right shift of num
        printf("%d", bit);

        if (bit == 1) {
            count++;
        }
    }

    printf("Set bits: %d\n", count);

    return 0;
}