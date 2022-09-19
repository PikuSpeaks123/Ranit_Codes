#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int bin,dec=0,k=0;
    printf("Enter a binary no : ");
    scanf("%d",&bin);
    while(bin>0)
    {
        dec= dec + (int)(bin%10)*pow(2,k);
        k++;
        bin=bin/10;
    }
    printf("The no in decimal is : %d",dec);
    getch();
}