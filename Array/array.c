#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[] = {'a', 'b', 'c'};

    // manipulation:
    array[0] = '#';
    array[1] = '+';
    
    printf("array[0] = %c\n", array[0]);
    printf("array[1] = %c\n", array[1]);
    printf("array[2] = %c\n", array[2]);

    // print using for
    printf("Print using For:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("array[%d] = %c\n", i, array[i]);
    }

    char *array2 = malloc(3 * sizeof(char));
    *array2 = 'a';
    array2++;

    *array2 = 'b';
    array2++;

    *array2 = 'c';

    array2 -= 2;
   
    // print using for
    printf("Print using While:\n");
    int i = 0;
    while (i < 3)
    {
        printf("array2[%d] = %c\n", i, *array2);
        array2++;
        i++;
    }

    printf("Size of Array = %lu bytes\n", sizeof(array));
    return 1;
}
