#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int bin[20],dec,k=0,i;
    printf("Enter a decimal no : ");
    scanf("%d",&dec);
    while(dec>0)
    {
        bin[k]=dec%2;
        k++;
        dec=dec/2;
    }
    printf("The no in binary is :");
    for(i=k-1;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
    getch();
}