#include <stdio.h>
int main()
{
    int num, d, sum = 0,counter=0,ON;
    
    
    
    while (counter !=3)
    {
        counter=0;
        printf("Enter a three digit number :\n");
        scanf("%d", &num);
        ON=num;
        while (num !=0)
            {
                counter++;
                num /=10;
            }
        num=ON;
        if (num < 999 && num >= 100)
        {
            while (num != 0)
            {
                d = num % 10;
                sum += d;
                num /= 10;
            }
            printf("Sum=%d",sum);
            break;
        }
        else
        {
            printf("Invalid");
        }
    }

    return 0;
}
