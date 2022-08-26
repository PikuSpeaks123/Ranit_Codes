#include <stdio.h>
#include <conio.h>
int main()
{
    int n,m,k=1,oct=0;
    printf("Enter a decimal no. : \n");
    scanf("%d",&n);
    m=n;
    while (m>0)
    {
        oct=oct+(m%8)*k;
        k=k*10;
        m=m/8;
    }
    printf("The eqivalent octal no corresonding to deimal no %d is %d.",n,oct);
    getch();
    return 0;
}