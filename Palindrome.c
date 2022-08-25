#include <stdio.h>
#include <conio.h>
int main()
{
    int n,m,s=0;
    printf("Enter a no. \n");
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        s=s*10+(m%10);
        m=m/10;
    }
    if(s==n)
    {
        printf("%d is palindrome no.",n);
    }else
    {
        printf("%d is not a palindrome no.",n);
    }
    getch();
    return 0;
}   