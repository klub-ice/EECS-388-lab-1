//
// Created by Zoey on 9/2/2026.
//
#include <stdio.h>

int calculate() {
    int num1, num2; 
    char op;

    printf("Enter operation\n");
    if (scanf(" %c", &op)) {
        printf("Error: Invalid input\n");
        return 1;
    }

    printf("Enter first number\n");
    if (scanf("%d", &num1)) {
        printf("Error: Invalid input\n");
        return 1;
    }

    if (op == '2') {
        printf("Result: %d\n", num1 * num1);
        return 0;
    }

    if (op == '3') {
        printf("Result: %d\n", num1 * num1 * num1);
        return 0;
    }

    printf("Enter second number\n");
    if (scanf("%d", &num2)) {
        printf("Error: Invalid input\n");
        return 1;
    }

    if (op == '+') {
        printf("Result: %d\n", num1 + num2);
    }
    else if (op == '-') {
        printf("Result: %d\n", num1 - num2);
    }
    else if (op == '*') {
        printf("Result: %d\n", num1 * num2);
    }
    else if (op == '/') {
        if (num2 == 0) {
            printf("Error: Division by zero\n");
            return 1;
        }
        printf("Result: %d\n", num1 / num2);
    }
    else {
        printf("Error: Invalid operator\n");
        return 1;
    }

    return 0;
}


int main() {
    calculate();

    return 0;
}
