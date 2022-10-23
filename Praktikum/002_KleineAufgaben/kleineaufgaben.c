#include <stdio.h>

int getUserInput()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    return n;
}
void checkInNumberIsPosetive()
{
    int n = getUserInput();
    if (n > 0)
    {
        printf(" n > 0\n");
    }
    else if (n == 0)
    {
        printf(" n = 0\n");
    }
    else
    {
        printf(" n < 0\n");
    }
}
void schleifeAufsteigend()
{
    int n = getUserInput();
    // a
    printf("For:      ");
    for (int i = n; i >= 0; i -= 2)
    {
        printf("%d ", i);
    }
    printf("\n");

    // b
    printf("While:    ");
    int i = n;
    while (i >= 0)
    {
        printf("%d ", i);
        i -= 2;
    }
    printf("\nDo_while: ");
    // c
    int j = n;
    do
    {
        printf("%d ", j);
        j -= 2;
    } while (j >= 0);
    printf("\n");
}

int main()
{
    checkInNumberIsPosetive();
    schleifeAufsteigend();
    return 1;
}
