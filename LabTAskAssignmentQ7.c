#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter Value for Three angle for triangle:-");
    scanf("%d %d %d",&a1,&a2,&a3);
    if(a1+a2+a3==180)
    {
        printf("Triangle is valid\n");
    }
    else
        printf("Traingle is not Valid for given values of angles!!\n");
    return 0;
}
