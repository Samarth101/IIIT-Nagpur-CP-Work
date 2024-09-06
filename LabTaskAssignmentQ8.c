#include<stdio.h>
int main()
{
    int num,counter=0,ON,sum=0;
    
    while (counter!=3)
    {
        counter=0;
        printf("Enter a four digit number :\n");
        scanf("%d",&num);
        ON=num;
        while (num !=0)
        {
            counter++;
            num /=10;
        } 
        num=ON;
        if (num>999 && num<10000)
        {
            int lastd =num%10;
            num/=10;
            num/=10;
            num/=10;
            sum=num+lastd;
            printf("Sum of first and last digit is %d",sum);
            break;
        }
        else
            printf("Invalid number\n");
    }
    
    return 0;
}
