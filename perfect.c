#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,s=0;
    printf("Enter a no to check whether it is perfect no or no \n");
    scanf("%d",&n);
    for ( i = 1; i < n; i++)
    {
        if(n%i==0)
        {
            printf("%d \t",i);
            s=s+i;
        }
    }
    printf("\n");
    if(s==n)
    {
        printf("%d is a perfect no. \n",n);
    }else
    {
        printf("%d is not a perfect no. \n",n);
    }
    getch();
    return 0;
    
}