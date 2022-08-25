#include <stdio.h>
#include <conio.h>

int unique(int); // Function Prototype

int main()
{
    int a, b, c;
    printf("Enter three numbers : \n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a > 99 && a < 1000) && (b > 99 && b < 1000) && (c > 99 && c < 1000))
    {
        if (unique(a) == 1 && unique(b) == 1 && unique(c) == 1) // Function call
        {
            if (b == 2 * a && c == 3 * a)
            {
                printf("%d, %d and %d are Triad Numbers .", a, b, c);
            }
            else
            {
                printf("%d, %d and %d are  not Triad Numbers .", a, b, c);
            }
        }
        else
        {
            printf("%d, %d and %d are  not Triad Numbers .", a, b, c);
        }
    }
    else
    {
        printf("%d, %d and %d are not Triad Numbers .", a, b, c);
    }

    getch();
    return 0;
}

// Function Definition
int unique(int n)
{
    int m1, m2, r1, r2, k = 0;
    m1 = n;
    m2 = n;
    while (m1 > 0)
    {
        r1 = m1 % 10;
        while (m2 > 0)
        {
            r2 = m2 % 10;
            if (r1 == r2)
            {
                k++;
            }
            m2 = m2 / 10;
        }
        m1 = m1 / 10;
    }
    if (k == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}