//Binary Search
#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[50],n,i,high,low,mid,key,pos,flag=0;
 clrscr();
 printf("Enter n : ");
 scanf("%d",&n);
 low=0;
 high=n;
 printf("Enter array elements : ");
 for(i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }
 printf("Enter no to check : ");
 scanf("%d",&key);
 while(low<=high)
 {
   mid=(low+high)/2;
   if(arr[mid]==key)
   {
     flag=1;
     pos=mid;
     break;
   }
   if(key>arr[mid])
   {
     low=mid+1;
   }else{
     high=mid-1;
   }
 }
 if(flag==1)
 {
   printf("%d present in %dth index",key,pos);
 }else
 {
   printf("%d Not Present.",key);
 }
 getch();
}

