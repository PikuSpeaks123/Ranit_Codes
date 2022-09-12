#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[50],n,temp,i,j,indexOfMin;
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
  //Selection sort
  for(i=0;i<n-1;i++)
  {
    indexOfMin=i;
    for(j=i+1;j<n-1;j++)
    {
      if(arr[j]<arr[indexOfMin])
      {
	indexOfMin=j;
      }
    }
    temp=arr[i];
    arr[i]=arr[indexOfMin];
    arr[indexOfMin]=temp;
  }
  printf("\nThe array elements after sorting in ascending order are : ");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  getch();
}