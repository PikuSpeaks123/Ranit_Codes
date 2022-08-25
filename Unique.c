#include <stdio.h>
#include <conio.h>
int main()
{
    int n,m1,m2,r1,r2,k=0;
    printf("Enter a no. \n");
    scanf("%d",&n);
    m1=n;
    m2=n;
    while (m1>0)
    {
        r1=m1%10;
        while (m2>0)
        {
            r2=m2%10;
            if(r1==r2)
            {
                k++;
            }
            m2=m2/10;
        }
        m1=m1/10;
        
    }
    if(k==1)
    {
        printf("%d is an unique no.",n);
    }else
    {
        printf("%d is not an unique no.",n);
    }
    getch();
    return 0;
}