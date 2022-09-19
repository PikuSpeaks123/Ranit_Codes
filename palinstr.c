#include <stdio.h>
#include <conio.h>
#include<string.h>
void main()
{
    int i, j, l;
    char s[50], t[50];
    printf("\nEnter the string : ");
    gets(s);
    l = strlen(s) - 1;
    for (i = 0, j = l; j >= 0; i++, j--)
        t[i] = s[j];
    t[i] = '\0';
    if (strcmp(s, t) == 0)
        printf("palindrome");
    else
        printf("Not palindrome");

    getch();
}