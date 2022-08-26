// Octal to Binary Conversion
/*
For Example:
In Octal: 167

In Decimal:(7 * 8^0) + (6 * 8^1) +(1 * 8^2)=119
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n,m,k=0,dec=0;
    printf("Enter a octal no. : \n");
    scanf("%d",&n);
    m=n;
    while (m>0)
    {
        dec=dec+ (m%10)* (int)pow(8,k);
        k++;
        m=m/10;
    }
    printf("The eqivalent decimal no corresonding to octal no %d is %d.",n,dec);

    getch();
    return 0;
}