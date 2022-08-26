#include <stdio.h>
#include <conio.h>
int main()
{
    int n,m,k=1,bin=0;
    printf("Enter a decimal no. : \n");
    scanf("%d",&n);
    m=n;
    while (m>0)
    {
        bin=bin+(m%2)*k;
        k=k*10;
        m=m/2;
    }
    printf("The eqivalent binary no corresonding to decimal no %d is %d.",n,bin);
    getch();
    return 0;
}