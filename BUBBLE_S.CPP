#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[50],n,temp,i,j;
  clrscr();
  printf("Enter no. of elements : ");
  scanf("%d",&n);
  printf("Enter the elements : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("\nThe array elements before sorting are : ");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  //Bubble sort
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(arr[j]>arr[j+1])
      {
	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
      }
    }
  }
  printf("\nThe array elements after sorting are : ");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  getch();
}
