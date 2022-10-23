#include <stdio.h>
double berechneKapital(double verzinsng, int bonus, double anlagebetrag, int laufzeit)
{
    double summe = 0;
    for (int i = 0; i < laufzeit; i++)
    {
        summe += anlagebetrag + (1 + verzinsng / 100) + bonus;
    }
    return summe;
}

void displayMenu()
{
    printf("Anlagebetrag: ");
    double anlagebetrag;
    scanf("%lf", &anlagebetrag);

    printf("Laufzeit: ");
    int laufzeit;
    scanf("%d", &laufzeit);

    int eingabe;
    do
    {
        printf("-----------------------------------------------\n");
        printf("1     1,5 %% Verzinsung ohne Bonuszahlung\n");
        printf("2     0,7 %% Verzinsung mit 15 Euro Bonuszahlung\n");
        printf("3     0,4 %% Verzinsung mit 20 Euro Bonuszahlung\n");
        printf("4     0,1 %% Verzinsung mit 50 Euro Bonuszahlung\n");
        printf("5     Fertig\n");

        printf("\nWählen Sie bitt aus: ");
        scanf("%d", &eingabe);

        switch (eingabe)
        {
        case 1:
            printf("Kapital = %.2f\n", berechneKapital(1.5, 0, anlagebetrag, laufzeit));
            break;
        case 2:
            printf("Kapital = %.2f\n", berechneKapital(0.7, 15, anlagebetrag, laufzeit));
            break;
        case 3:
            printf("Kapital = %.2f\n", berechneKapital(0.4, 20, anlagebetrag, laufzeit));
            break;
        case 4:
            printf("Kapital = %.2f\n", berechneKapital(0.1, 50, anlagebetrag, laufzeit));
            break;
        case 5:
            printf("Auf wiedershene :)\n");
            break;
        default:
            printf("Bitte wählen Sie eine der Möglichkeiten 1-5 aus\n");
            break;
        }
        printf("-----------------------------------------------\n\n");
    } while (eingabe != 5);
}

int main()
{
    // 1:
    displayMenu();
    return 1;
}