#include<stdio.h>
#include<conio.h>
void main()
{
    int rem,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    rem=n%2;
    if(rem==0)
        printf("\nThe given number is even");
    else
        printf("\nThe given number is odd");
}
