#include <stdio.h>

char to_upper_case(char c)
{
    if (c >= 97 && c <= 122)
    {
        return c - 32;
    }
    else
    {
        return c;
    }
}

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

void upper(char text[])
{
    for (int i = 0; i < length(text); i++)
    {
        text[i] = to_upper_case(text[i]);
    }
}

int main()
{
    char c = 'a';
    printf("Before c: %c\n", c);
    printf("After  c: %c\n", to_upper_case(c));

    char word[] = "hallo";
    printf("Before word: %s\n", word);
    upper(word);
    printf("After  word: %s\n", word);

    return 1;
}