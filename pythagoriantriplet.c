#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter three no.s to check whether they are pythagorian triplets or not : \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
    {
        printf("%d, %d and %d are pythagorian triplets.", a, b, c);
    }
    else
    {
        printf("%d, %d and %d are not pythagorian triplets.", a, b, c);
    }

    getch();
    return 0;
}