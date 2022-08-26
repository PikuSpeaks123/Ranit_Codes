#include <stdio.h>
#include <conio.h>

int fact(int);

int main()
{
    int i,j,k,n,s;
    printf("Enter n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=i;j<=n-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<=n;k++)
        {
            if(i>=k)
            {
                s = fact(i)/(fact(i-k)*fact(k));
                printf("%d ", s);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(f);
}


