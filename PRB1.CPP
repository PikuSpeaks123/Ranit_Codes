#include<stdio.h>
#include<conio.h>
void main()
{
  double x,y,z,temp;
  clrscr();
  printf("Enter the values of x, y and z : ");
  scanf("%lf %lf %lf",&x,&y,&z);
  temp=x;
  x=y;
  y=z;
  z=temp;
  printf("The values of x = %.8lf , y = %.8lf and z = %.8lf ",x,y,z);
  getch();
}