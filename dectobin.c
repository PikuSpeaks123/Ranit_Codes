#include <stdio.h>
#include <conio.h>
void main()
{
    int a[20], i, m, n, r;
    // clrscr();
    printf("\n Enter the decimal number:");
    scanf("%d", &n);
    m = n;
    for (i = 0; n > 0; i++)
    {
        r = n % 2; // for octal n % 8
        a[i] = r;
        n = n / 2; // for octal n / 8
    }
    printf("\n Binary equivalent of %d is \t", m);
    for (i--; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    getch();
}