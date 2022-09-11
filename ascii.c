#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("\n Enter any character from the keyboard");
    scanf("%c", &ch);
    //clrscr();
    if (ch >= 65 && ch <= 90)
    {
        printf("\nThe character entered is an UPPERCASE letter");
    }
    if (ch >= 97 && ch <= 122)
    {
        printf("\nThe character entered is a lowercase letter");
    }
    if (ch >= 48 && ch <= 57)
    {
        printf("\nThe character entered is a digit");
    }
    if ((ch >= 0 && ch <= 48) || (ch > 57 && ch < 65) || (ch > 90 && ch < 97) || ch > 122)
    {
        printf("\nThe charcter entered is a special symbol");
    }
    printf("\n \n \n Press any key to Exit...");
    getch();
}
