#include<stdio.h>
#include<conio.h>
void main()
{
  int a[50][50],b[50][50],c[50][50],i,j,k;
  int m,n,p,q;
  clrscr();
  printf("Enter the order of the first matrix : ");
  scanf("%d%d",m,n);
  printf("Enter the elements of the first matrix : \n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter the order of the second matrix : ");
  scanf("%d%d",p,q);
  printf("Enter the elements of the second matrix : \n");
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  if(n==p)
  {
     for(i=0;i<m;i++)
     {
       for(j=0;j<q;j++)
       {
	  c[i][j]=0;
	  for(k=0;k<n;k++)
	  {
	     c[i][j] = a[i][k] * b[k][j];
	  }
       }
     }
     printf("Matrix multiplication of : ");
     for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
       {
	  printf("%d",a[i][j]);
       }
       printf("\n");
     }
     printf(" and ");
     for(i=0;i<p;i++)
     {
       for(j=0;j<q;j++)
       {
	 printf("%d",b[i][j]);
       }
       printf("\n");
     }
     printf("is : ");
      for(i=0;i<m;i++)
      {
	for(j=0;j<q;j++)
	{
	  printf("%d",c[i][j]);
	}
	printf("\n");
      }

  }else
  {
    printf("Matrix Multiplication is not possible !!. ");
  }
  getch();
}
