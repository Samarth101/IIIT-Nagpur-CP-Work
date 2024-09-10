#include<stdio.h>
int main()
{
    float l,b,r;
    printf("Enter Value for Lenght of Reactangle:-");
    scanf("%f",&l);
    printf("Enter Value for Breadth of Rectangle:-");
    scanf("%f",&b);
    printf("Perimeter of Reactangle = %0.2f\n",2*(l+b));
    printf("Area of Rectangle is:-%0.2f\n\n",l*b);

    printf("Enter Value for radius of Cirlce:-");
    scanf("%f",&r);
    printf("Circumference of Circle = %0.2f\n",3.142*2*r);
    printf("Area of circle = %0.2f",3.142*r*r);
    return 0;
}
