#include<stdio.h>
#include<conio.h>
void main()
{
    unsigned long dec;
    int i,hex[20],c=0;
    printf("Enter a decimal no : ");
    scanf("%lu",&dec);
    while(dec>0)
    {
        hex[c]=dec%16;
        dec=dec/16;
        c++;
    }
    for(i=c-1;i>=0;i--)
    {
        if(hex[i]>=10)
        {
            printf("%c",55+hex[i]);
        }else
        {
            printf("%d",hex[i]);
        }
    }
    getch();

}