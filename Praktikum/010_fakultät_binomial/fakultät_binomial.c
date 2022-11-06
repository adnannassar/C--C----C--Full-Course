#include <stdio.h>
#include <stdlib.h>

int fakIterative(int n)
{
    int summ = 1;
    for (int i = 1; i <= n; i++)
    {
        summ *= i;
    }
    return summ;
}

int fakRecrusive(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fakRecrusive(n - 1);
}

int binomialKoeffizienten(int n, int k)
{
   return fakIterative(n) / fakIterative(k) * fakIterative(n - k);
}

int main()
{
    int nummer = 4;
    int n = 10;
    int k = 1;
    printf("Fakültät Iterative von %d: %d\n", nummer, fakIterative(nummer));
    printf("Fakültät Recursive von %d: %d\n", nummer, fakRecrusive(nummer));
    printf("binomialKoeffizienten von %d, %d : %d\n", n,k,  binomialKoeffizienten(n,k));
    return 1;
}