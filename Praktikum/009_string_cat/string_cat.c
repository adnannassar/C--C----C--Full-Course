#include <stdio.h>
#include <stdlib.h>

int length(const char *text)
{
    int zähler = 0;
    while (*text != '\0')
    {
        zähler++;
        text++;
    }
    return zähler;
}

char *stringcat(const char *str1, const char *str2)
{
    int str1Len = length(str1);
    int str2Len = length(str2);
    int totalLen = str1Len + str2Len; 

    char *newArray = malloc(sizeof(totalLen) + 1); // +1 is for '/0'

    while (*str1 != '\0')
    {
        *newArray = *str1;
        str1++;
        newArray++;
    }

    while (*str2 != '\0')
    {
        *newArray = *str2;
        str2++;
        newArray++;
    }
    
    *newArray = '\0';

    newArray -= totalLen;

    return newArray;
}

int main()
{
    const char *word1 = "Hallo";
    const char *word2 = " Welt";

    char *newWord = stringcat(word1, word2);
    printf("%s\n", newWord);
    return 1;
}