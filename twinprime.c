// Twin Primes
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, m, i,j, k = 0, f = 0;
    printf("Enter two no.s : ");
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            k++;
        }
    }
    for (j = 1; j <= m; j++)
    {
        if (m % j == 0)
        {
            f++;
        }
    }
    if (f == 2 && k == 2 && ((m - n) == 2 || (n - m) == 2))
    {
        printf("%d and %d is a set of twin prime no.\n",n,m);
    }
    else
    {
        printf("%d and %d is not a set of twin prime no.\n",n,m);
    }
    getch();
    return 0;
}