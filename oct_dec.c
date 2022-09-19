#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int oct,dec=0,k=0,octal;
    printf("Enter a octal no : ");
    scanf("%d",&oct);
    octal=oct;
    while(oct>0)
    {
        dec=dec+(int)((oct%10)*pow(8,k));
        oct=oct/10;
        k++;
    }
    printf("\nThe equivalent decimal no for octal no %d is %d",octal,dec);
    getch();
}