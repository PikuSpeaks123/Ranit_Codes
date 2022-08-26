#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n,m,sq,c=0,check;
    printf("Enter a no. :");
    scanf("%d",&n);
    sq=n*n;
    m=n;
    while (m>0)
    {
        c++;
        m=m/10;
    }
    check = sq % ((int)(pow(10,c)));
    if(check == n)
    {
        printf("%d is an automorphic no.",n);
    }else{
        printf("%d is not an automorphic no.",n);
    }
    getch();
    return 0;
}