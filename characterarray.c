#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    printf("The English Alphabets :  ");
    for(i=0;i<=255;i++)
    {
        printf("  %c",(char)i);
    }
    getch();
    return 0;
}