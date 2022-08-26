#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,j,max,min;
    printf("Enter the no. of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(j=0;j<n;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
        if(arr[j]<min)
        {
            min=arr[j];
        }
    }
    printf("The min no. is %d and the max no. is %d",min,max);
    getch();
    return 0;
}