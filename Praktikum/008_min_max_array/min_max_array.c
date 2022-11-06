#include <stdio.h>

int min(int array[], int n)
{
    int minimum = array[0];   
   
    for (int i = 0; i < n; i++)
    {
        if(array[i] < minimum){
            minimum = array[i];
        }
    }

    return minimum;
}

int max(int array[], int n)
{
    int maximum = array[0];   
   
    for (int i = 0; i < n; i++)
    {
        if(array[i] > maximum){
            maximum = array[i];
        }
    }

    return maximum;
}

int main()
{

    int array[] = {3, 1, 5, -1, 2};
    printf("min: %d\n", min(array, 5));
    printf("max: %d\n", max(array, 5));

    return 1;
}