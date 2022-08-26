#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n,m,k=0,dec=0;
    printf("Enter a binary no. : \n");
    scanf("%d",&n);
    m=n;
    while (m>0)
    {
        dec=dec+ (m%10)* (int)pow(2,k);
        k++;
        m=m/10;
    }
    printf("The eqivalent decimal no corresonding to binary no %d is %d.",n,dec);

    getch();
    return 0;
}