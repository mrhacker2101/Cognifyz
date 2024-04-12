#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    // Input two numbers and an operator
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    // Perform the corresponding arithmetic operation
    switch(op) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Result: %.2f\n", (int)num1 % (int)num2);
            } else {
                printf("Error: Modulo by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}