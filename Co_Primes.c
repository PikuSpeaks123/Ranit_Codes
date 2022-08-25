#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a, b, i, gcd;
    printf("Enter two no.s : \n");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    if (gcd == 1)
    {
        printf("%d and %d are co-primes nos", a, b);
    }
    else
    {
        printf("%d and %d are not co-primes nos", a, b);
    }

    getch();
    return 0;
}