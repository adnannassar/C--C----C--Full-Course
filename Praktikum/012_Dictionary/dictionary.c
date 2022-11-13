#include <stdio.h>

#define SIZE 4

typedef enum STATUS
{
    FULL,
    EMPTY,
    TO_BE_DELETED
} Status;

typedef struct ENTRY
{
    int value;
    Status status;
} Entry;

Entry DICTIONARY[SIZE];

int insert(int n)
{
    return 1;
}

int delete (int n)
{
    return 1;
}

int member(int n)
{
    return 0;
}

int main()
{

    return 1;
}