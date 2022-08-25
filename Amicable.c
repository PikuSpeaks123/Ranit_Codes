#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, i, s1 = 0, s2 = 0;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            s1 = s1 + i;
        }
    }
    for (i = 1; i < b; i++)
    {
        if (b % i == 0)
        {
            s2 = s2 + i;
        }
    }
    if (s1 == b && s2 == a)
    {
        printf("%d and %d are amicable pairs", a, b);
    }
    else
    {
        printf("%d and %d are not amicable pairs", a, b);
    }

    getch();
    return 0;
}