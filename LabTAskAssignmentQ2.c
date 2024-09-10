#include<stdio.h>
int main()
{
    int dist;
    printf("Enter value for Distance in Inches:-\n");
    scanf("%d",&dist);
    printf("Distance in Cms is %0.2f\n",dist*2.54);
    return 0;
}