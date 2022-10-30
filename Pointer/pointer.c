#include <stdio.h>

void swap(int *x, int *y)
{
    int origX = *x;
    *x = *y;
    *y = origX;
}

void increment(int *ptrX)
{
    (*ptrX)++;
}

void printValuesFromPointer(int *x, int *y)
{
    printf("Valeus: \n");
    printf("X = %d, Y = %d\n", *x, *y);
}

void printAdressesFromPointer(int *x, int *y)
{
    printf("Adresses: \n");
    printf("X = %p\nY = %p\n", x, y);
}

void swatpTest()
{
    int x = 10;
    int y = 20;
    printf("Swap:\n");
    printf("Before: X = %d, Y = %d\n", x, y);
    swap(&x, &y);
    printf("After : X = %d, Y = %d\n", x, y);
}

void incrementTest()
{
    int x = 10;
    int y = 20;
    printf("Increment:\n");
    printf("Before: X = %d\n", x);
    increment(&x);
    printf("After : X = %d\n", x);
    printf("\n");
}

int main()
{
    // incrementTest();
    //  swatpTest();
    int x = 10;
    int y = 20;
    int z = 30;


    printValuesFromPointer(&x, &y);
    printAdressesFromPointer(&x, &y);
    return 1;
}
