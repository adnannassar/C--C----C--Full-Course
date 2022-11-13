#include <stdio.h>

#define SIZE 5

int first = -1;
int last = -1;

int QUEUE[SIZE];

int isFull()
{
    if (first == -1 && last == SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    return first == -1 && last == -1 ? 1 : 0;
}

void enqueue(int number)
{
    if (isFull() == 0)
    {
        QUEUE[++last] = number;
    }
    else
    {
        printf("QUEUE IST VOLL!!!\n");
    }
}

int dequeue()
{
    if (isEmpty() == 0)
    {
        return QUEUE[++first];
    }
    else
    {
        return -1;
    }
}

int main()
{
    enqueue(4);
    enqueue(3);
    enqueue(10);
    enqueue(2);
    enqueue(6);

    enqueue(11);

    int i = 0;
    while (i < 5)
    {
        printf("%d\n", dequeue());
        i++;
    }

    return 1;
}