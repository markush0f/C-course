#include <stdio.h>
// CALCULADORA

int main()
{
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    char operator;
    scanf(" %c", &operator);

    int result;

    if (operator == '+')
    {
        result = num1 + num2;
    }
    else if (operator == '-')
    {
        result = num1 - num2;
    }
    else if (operator == '*')
    {
        result = num1 * num2;
    }
    else if (operator == '/')
    {
        result = num1 / num2;
    }

    printf("Result: %d", result);
    return 0;
}