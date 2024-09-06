// Question 1


#include<stdio.h>
#include<math.h> //Power Function use karne ke liye ise include kiya hai
int main()
{
    int amount=500000; //declaration kel amount navaychya variable cha ani value assign केली ५००००० 
    int time_period=10; //same इथे टाइम_period navach varible declare kel ani value dili tyla 10
    float interest_rate=3.5,n; //interest rate declar kela float type maddhe ani value assign keli tyla ani n navacha varible delare kela float type maddhe je formula maddhe use honar ahe
    
    printf("Simple interest on Rs. 500000.00 in 10 years =%f\n",(amount*time_period*interest_rate)/100); 
    printf("Interest on Rs. 500000.00 in 10 years compounded annually =%0.2f\n",(amount*pow((1+(interest_rate/1)/100),1*time_period))-amount);
    printf("Interest on Rs. 500000.00 in 10 years compounded semi-annually =%0.2f\n",(amount*pow((1+(interest_rate/2)/100),2*time_period))-amount);
    printf("Interest on Rs. 500000.00 in 10 years compounded quarterly =%0.2f\n",(amount*pow((1+(interest_rate/3)/100),3*time_period))-amount);
    printf("Interest on Rs. 500000.00 in 10 years compounded monthly =%0.2f\n",(amount*pow((1+(interest_rate/12)/100),12*time_period))-amount);
    printf("Interest on Rs. 500000.00 in 10 years compounded daily =%0.2f\n",(amount*pow((1+(interest_rate/365)/100),365*time_period))-amount);

    return 0;
}