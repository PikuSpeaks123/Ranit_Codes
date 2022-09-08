#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int n,c=0,m,i,k,rev=0;
  clrscr();
  printf("Enter a no. : \n");
  scanf("%d",&n);
  m=n;
  while(m>0)
  {
    c++;
    rev=rev*10+(m%10);
    m=m/10;
  }
  for(i=1;i<=c;i++)
  {
     k=rev;
     while(k>0)
     {
	printf("%d ",k%10);
	k=k/10;
     }
     rev=rev/10;
     printf("\n");
  }
  getch();
}
