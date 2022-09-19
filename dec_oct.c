#include<stdio.h>
#include<conio.h>
void main()
{
    int n,oct[20],k=0,i,m;
    printf("Enter a decimal no : ");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        oct[k]=n%8;
        n=n/8;
        k++;
    }
    printf("\nThe equivalent octal no. of the decimal no . %d is ",m);
    for(i=k-1;i>=0;i--)
    {
        printf("%d",oct[i]);
    }
    getch();
}