#include <stdio.h>

int main()
{
    char op;
    double num1, num2, result;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);   // space before %c skips leftover whitespace/newline

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (op)
    {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}