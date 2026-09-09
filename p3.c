//
// Created by zoey on 9/2/2026.
//
#include <stdio.h>

int middle_of_three(int num1, int num2, int num3) { // function to check for middle number
    if (num1 <= num2 && num1 <= num3) { // checks if num 1 is smallest
        printf("The middle number is: %d\n", num2 < num3 ? num2 : num3); //checks if num 2 is smaller than num 3
    }
    else if (num2 <= num1 && num2 <= num3) { // checks if num 2 is smallest
        printf("The middle number is: %d\n", num1 < num3 ? num1 : num3); //checks if num 1 is smaller than num 3
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