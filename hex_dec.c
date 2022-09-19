#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
    char hex[20];
    int i,dec,decimal=0,len;
    printf("Enter a hexadecimal no : ");
    scanf("%s",hex);
    len=strlen(hex)-1;
    for(i=0;hex[i]!='\0';i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            dec=hex[i]-48;
        }else if(hex[i]>='A' && hex[i]<='F')
        {
            dec=hex[i]-65+10;
        }else if(hex[i]>='a' && hex[i]<='z')
        {
            dec=hex[i]-97+10;
        }
        decimal=decimal + dec*pow(16,len);
        len--;
    }
    printf("\nThe eqivalent decimal no of the hexadecimal no %s is %d",hex,decimal);
    getch();
}