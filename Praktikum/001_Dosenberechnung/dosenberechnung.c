#include <stdio.h>

#define PI 3.14

double radius, höhe;

double umfang()
{
    return 2 * PI * radius;
}

double deckelfläche()
{
    return PI * radius * radius;
}

double mantelfläche()
{
    return umfang() * höhe;
}

double oberflöche()
{
    return 2 * deckelfläche() + mantelfläche();
}

double volumen()
{
    return deckelfläche() * höhe;
}

void readInput()
{
    printf("Bitte Radius eingeben: ");
    scanf("%lf", &radius);

    printf("Bitte Höhe eingeben: ");
    scanf("%lf", &höhe);
}

void printDoesenInfo()
{
    readInput();
    printf("Die Infors für Dose (Radius = %.2f, Höhe = %.2f)\n", radius, höhe);
    printf("Umfange       = %.2f\n", umfang());
    printf("Deckelfläche  = %.2f\n", deckelfläche());
    printf("Mantelfläche  = %.2f\n", mantelfläche());
    printf("Oberflöche    = %.2f\n", oberflöche());
    printf("Volumen       = %.2f\n", volumen());
}



int main()
{
    printDoesenInfo();
    return 1;
}