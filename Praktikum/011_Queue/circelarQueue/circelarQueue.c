#include <stdio.h>

#define SIZE 5

int first = -1;
int last = -1;

int QUEUE[SIZE];

int isFull()
{
    if ((first == -1 && last == SIZE - 1) || (first == last) && (first != -1))
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
        last = (last + 1) % SIZE;
        QUEUE[last] = number;
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
        first = (first + 1) % SIZE;
        int temp = QUEUE[first];
        if (first == last)
        {
            first = last = -1;
        }
        return temp;
    }
    else
    {
        return -1;
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    int j = 0;
    while (j < 3)
    {
        int erg = dequeue();
        if (erg != -1)
        {
            printf("%d\n", erg);
        }
        else
        {
            printf("QUEUE IST LEER!!!\n");
        }
        j++;
    }

    enqueue(10);
    enqueue(11);
    enqueue(12);
    enqueue(13);

    int i = 0;
    while (i < 6)
    {
        int erg = dequeue();
        if (erg != -1)
        {
            printf("%d\n", erg);
        }
        else
        {
            printf("QUEUE IST LEER!!!\n");
        }
        i++;
    }

    return 1;
}