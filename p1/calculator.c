//
// Created by Zoey on 9/2/2026.
//
#include <stdio.h>

int calculate() {
    int num1, num2;
    char op;
    printf("Enter operation\n");
    scanf("%c", &op);
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);

    if (op == '+') {
        printf("Result: %d\n", num1 + num2);

    }

    return 0;
}


int main() {
    calculate();

    return 0;
}
