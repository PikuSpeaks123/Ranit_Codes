#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k, n;
    printf("Enter n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        k = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                k++;
            }
        }
        if (k == 2)
        {
            printf("%d \t",i);
        }
    }
    getch();
    return 0;
}