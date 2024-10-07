#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
