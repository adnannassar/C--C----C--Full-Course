#include <stdio.h>

void asciTable(int spalte)
{
    char zahl = 31;
    int zahl1 = 32;
    int reihe = 94 / spalte;

    char ascii[reihe][spalte];
    int i, j;
    for (i = 0; i <= reihe; i++)
    {
        for (j = 0; i < spalte; j++)
        {
            ++zahl;
            ascii[i][j] = zahl;
        }
    }
    for (i = 0; i <= reihe; i++)
    {
        for (j = 0; i < spalte; j++)
        {
            if (zahl1 < 127)
            {
                printf("%d %c", zahl1++, ascii[i][j]);
                if (j == spalte - 1)
                {
                    printf("\n");
                }
            }
        }
    }
}
void asciTableEasyVersion(int spalte)
{
    int counter = 0;
    for (int i = 32; i <= 126; i++)
    {
        counter++;
        printf("%4d%-4c", i, i);
        if (counter % spalte == 0)
        {
              printf("\n");
        }
    }
}



int main()
{
    asciTableEasyVersion(10);

    return 1;
}