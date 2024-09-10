#include<stdio.h>
int main()
{
    float Tf;
    printf("Enter temperature in Fahrenheit:- ");
    scanf("%f",&Tf);
    float Tc=(Tf-32)*5/9;
    printf("Temperature in Celsius for this Value of Farhrenheit:- %0.2f\n",Tc);

    return 0;
}
