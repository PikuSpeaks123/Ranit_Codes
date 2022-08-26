#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,i,min,gcd,lcm;
    printf("Enter two no :");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        min=b;
    }else
    {
        min=a;
    }
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    printf("The GCD and LCM of %d and %d are %d and %d",a,b,gcd,lcm);

    getch();
    return 0;
}