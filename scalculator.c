#include <stdio.h>

int main() {
    double num1, num2, result;
    char operation;

    while (1) {
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter operation (+, -, *, /, q to quit): ");
        scanf(" %c", &operation);

        if (operation == 'q') {
            break;
        }

        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (operation) {
            case '+':
                result = num1 + num2;
                printf("Result: %f\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %f\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %f\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %f\n", result);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            default:
                printf("Invalid operation\n");
        }
    }

    printf("Calculator exited.\n");
    return 0;
}