#include <stdio.h>

int length(char text[])
{
    int zähler = 0;
    while (*text != '\0')
    {
        zähler++;
        text++;
    }
    return zähler;
}

int countSpacesIndex(char text[])
{
    int counter = 0;
    for (int i = 0; i < length(text); i++)
    {
        if (text[i] == ' ')
        {
            counter++;
        }
    }
    return counter;
}

int countSpacesPointer(char text[])
{
    int countSpaces = 0;
    while (*text != '\0')
    {
        if (*text == ' ')
        {
            countSpaces++;
        }
        text++;
    }
    return countSpaces;
}

int main()
{

    char word[] = "h a l l o";
    printf("%s has %d spaces!\n", word, countSpacesIndex(word));
    printf("%s has %d spaces!\n", word, countSpacesPointer(word));

    return 1;
}