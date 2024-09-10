#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value for first number:- ");
    scanf("%d",&a);
    printf("\nEnter the value for second number:- ");
    scanf("%d",&b);
    printf("Before Swapping\n");
    printf("Value for a=%d\nValue for b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter Swapping\n");
    printf("Value for a=%d\nValue for b=%d\n",a,b);
    
    return 0;
}
