#include <stdio.h>

int calculator(int nr1, int nr2, char operation)
{
    int result;
    switch (operation)
    {
    case '+':
        result = nr1 + nr2;
        break;
    case '-':
        result = nr1 - nr2;
        break;
    case '*':
        result = nr1 * nr2;
        break;
    case '/':
        result = nr1 / nr2;
        break;
    default:
        result = -1;
    }

    return result;
}

void start()
{
    printf("Nr1: ");
    int nr1;
    scanf("%d", &nr1);

    printf("Operation (+ - * /): ");
    char operation;
    scanf(" %c", &operation);

    printf("Nr2: ");
    int nr2;
    scanf("%d", &nr2);

    int result = calculator(nr1, nr2, operation);

    printf("Result of %d %c %d = %d\n", nr1, operation, nr2, result);
}

void greeting()
{
    printf("Welcome to Calculator:\n");
}

int main()
{
    greeting();
    start();

    return 1;
}
