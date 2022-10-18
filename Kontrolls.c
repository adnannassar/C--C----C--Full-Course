#include <stdio.h>

int main()
{

    /*
    int resultOfAdd = number1 + number2;
    if (resultOfAdd > 0)
    {
        printf("Result = %d, Result is posetive\n", resultOfAdd);
    }
    else if (resultOfAdd == 0)
    {
        printf("Result = 0, Result is neutral\n");
    }
    else
    {
        printf("Result = %d, Result is negative\n", resultOfAdd);
    }

    int monthNumber;
    printf("\n\n\n\nGeben Sie die Nummer für Monat ein:");
    scanf("%d", &monthNumber);
    switch (monthNumber)
    {
    case 1:
        printf("30\n");
        break;
    case 2:
        printf("28\n");
        break;
    case 3:
        printf("30\n");
        break;
    case 4:
        printf("31\n");
        break;
    default:
        printf("Bitte etwas gültiges eingeben\n");
    }



*/

    // for, while, do_while
    printf("For:      ");
    for (int x = 1; x <= 10; x++)
    {
        printf("%d ", x);
    }

    printf("\nWhile:    ");

    int x = 1;
    while (x <= 10)
    {
        printf("%d ", x);
        x++;
    }

    printf("\nDo While: ");
    int y = 1;
    do
    {
        printf("%d ", y);
        y++;
    } while (y <= 10);

    printf("\n");

    int eingabeIstPosetiv = 1;
    while (eingabeIstPosetiv > 0)
    {
        printf("\n\nGeben Sie etwas ein:");
        scanf("%d", &eingabeIstPosetiv);
        printf("Success!!!\n");
    }

    return 1;
}