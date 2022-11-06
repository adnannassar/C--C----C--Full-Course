#include <stdio.h>

void einmalEins(int von, int bis)
{
    for (int i = 1; i <= von; i++)
    {
        for (int j = von; j <= bis; j++)
        {
            printf("%4d", i * j);
        }
         printf("\n");
    }
}

int main()
{
    einmalEins(10, 20);
    return 1;
}