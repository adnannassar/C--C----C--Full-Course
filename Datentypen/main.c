#include <stdio.h>



int main()
{

    printf("............................................\n         Size of Data Types\n");
    printf("short int                   ->      %2lu bytes \n", sizeof(short int));
    printf("unsigned short int          ->      %2lu bytes \n", sizeof(unsigned short int));
    printf("unsigned int                ->      %2lu bytes \n", sizeof(unsigned int));
    printf("int                         ->      %2lu bytes \n", sizeof(int));
    printf("long int                    ->      %2lu bytes \n", sizeof(long int));
    printf("unsigned long int           ->      %2lu bytes \n", sizeof(unsigned long int));
    printf("long long int               ->      %2lu bytes \n", sizeof(long long int));
    printf("unsigned long long int      ->      %2lu bytes \n", sizeof(unsigned long long int));
    printf("float                       ->      %2lu bytes \n", sizeof(float));
    printf("double                      ->      %2lu bytes \n", sizeof(double));
    printf("long double                 ->      %2lu bytes \n", sizeof(long double));
    printf("unsigned char               ->      %2lu bytes \n", sizeof(unsigned char));
    printf("char                        ->      %2lu bytes \n............................................\n", sizeof(char));

    printf("\nBeispiele für Varianlen:\n");
    int x = 10;
    long long int y = 20000ll;

    x = (int)y; // explezite typekonvertierung
    y = x;      // implezite typekonvertierung

    // + - * / % ++ -- += -= /= */ %= = == ! != && || < > <= >= x++ ++x
    y = 10 % 2; // 0
    y *= 10;    // y = y * 10  --> y = 0 * 10  --> y = 0

    y = 30000;
    printf("X = %d\n", x);
    printf("Y = %lld\n", y);

    int result = (y > x) || (y == x); // y >= x
    printf("Result = %d\n", result);

    // x++ , ++x
    int nr1 = 1;

    printf("Nr1 = %d\n", nr1++); // nr1 = 2 // Post Increment

    printf("Nr1 = %d\n", nr1);

    // eingabe + variablen number1 , number2
    int number1;
    printf("Bitte die erste  Zahl eingeben: ");
    scanf("%d", &number1);

    int number2;
    printf("Bitee die zweite Zahl eingeben: ");
    scanf("%d", &number2);

    double erg1 = 13.0 / 4 + 5 / 3 + 11 % 7;
    printf("%f\n", erg1);

    return 1;
}
