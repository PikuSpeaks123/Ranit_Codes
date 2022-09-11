#include <stdio.h>
#include <conio.h>
//int sum_of_num(int, int[]); // Function declaration
void main()
{
    int n, sum=0, arr[10], i;
    // clrscr();
    printf("What is the size of the array?");
    scanf("%d", &n);
    printf("Enter the numbers one by one");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    //sum = sum_of_num(n, arr); // Function Call
    printf("the sum is %d", sum);
    getch();
}
// int sum_of_num(int n, int arr[]) // Function definition
// {
//     int s = 0, i;
//     for (i = 0; i < n; i++)
//     {
//         s = s + arr[i];
//     }
//     return s;
// }