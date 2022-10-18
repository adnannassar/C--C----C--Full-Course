#include <stdio.h>

int main()
{
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
    printf("Bittee die zweite Zahl eingeben: ");
    scanf("%d", &number2);

        return 1;
}
