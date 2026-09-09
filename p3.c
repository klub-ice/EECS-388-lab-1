//
// Created by zoey on 9/2/2026.
//
#include <stdio.h>

int middle_of_three(int num1, int num2, int num3) {
    if (num1 <= num2 && num1 <= num3) {
        printf("The middle number is: %d\n", num2 < num3 ? num2 : num3);
    }
    else if (num2 <= num1 && num2 <= num3) {
        printf("The middle number is: %d\n", num1 < num3 ? num1 : num3);
    }
    else {
        printf("The middle number is: %d\n", num1 < num2 ? num1 : num2);
    }
    return 0;
}

int main() {
    int num1, num2, num3;
    printf("Enter three integers\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    middle_of_three(num1, num2, num3);
    return 0;
}