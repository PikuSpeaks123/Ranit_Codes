#include <stdio.h>
#include <conio.h>
#include <math.h>

int check_prime(int);
int main()
{
    int n, m, i, j, k, f;
    printf("Enter n : ");
    scanf("%d", &n);
    for (m = 1; m <= n; m++)
    {
        k = 0, f = 0;
        for (i = 1; i <= m; i++)
        {
            if (m % i == 0)
            {
                k++;
            }
        }
        for (j = 1; j <= m + 2; j++)
        {
            if ((m + 2) % j == 0)
            {
                f++;
            }
        }
        if (f == 2 && k == 2)
        {
            printf("%d and %d is a set of twin prime no.\n", m, m + 2);
        }
    }
    getch();
    return 0;
}
