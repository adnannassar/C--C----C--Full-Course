#include <stdio.h>

int main()
{

    int number1 = 10;
    int number2 = 20;
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
    printf("\nMonat Switch:\nGeben Sie die Nummer für Monat ein: ");
    scanf("%d", &monthNumber);
    switch (monthNumber)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Monat %d hat 31 Tagen\n", monthNumber);
        break;
    case 2:
        printf("Monat %d hat 28 Tagen\n", monthNumber);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Monat %d hat 30 Tagen\n", monthNumber);
        break;
    default:
        printf("Bitte einen gültigen Monat eingeben\n");
    }

    // for, while, do_while
    printf("\nLoops:\nFor:      ");
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
        printf("\nGeben Sie ein Posetive Zahl ein: ");
        scanf("%d", &eingabeIstPosetiv);
        if (eingabeIstPosetiv > 0)
        {
            printf("Success!!!\n");
        }
        else
        {
            printf("Nigative Number is not allowed!\n");
        }
    }

    return 1;
}