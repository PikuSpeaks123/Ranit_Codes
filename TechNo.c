#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, m, digits = 0, first, last,sumofsquares=0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    m = n;
    while (m > 0)
    {
        digits++;
        m = m / 10;
    }
    if (digits % 2 == 0)
    {
        first = n / (int)pow(10, digits / 2);
        last = n % (int)pow(10, digits / 2);
        printf("%d %d \n",first,last);
        sumofsquares = (first + last) * (first + last);
        printf("%d \n",sumofsquares);
        if (n == sumofsquares)
        {
            printf("%d is a Tech No.", n);
        }
        else
        {
            printf("%d is not a Tech No.", n);
        }
    }
    else
    {
        printf("%d is not a Tech No.", n);
    }

    getch();
    return 0;
}