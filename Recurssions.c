// 1. Write a program in C to print the first n natural numbers using recursion.
// #include<stdio.h>
// void printnumbers(int n,int num)
// {
//     if(n<=num)
//     {
//         printf("%d ",n);
//         printnumbers(n+1,num);
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int n=1;
//     int num;
//     printf("Enter number :-");
//     scanf("%d",&num);
//     printnumbers(n,num);
//     return 0;
// }



// 2. Write a program in C to calculate the sum of numbers from 1 to n using recursion.
// #include<stdio.h>
// int sumcalculation(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     else
//         return n + sumcalculation(n-1);
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("Enter the last number upto which you want to calculate sum:-");
//     scanf("%d",&n);
//     printf("Sum of numbers from 1 to %d = %d",n,sumcalculation(n));
//     return 0;
// }



// // 3. Write a program in C to print the Fibonacci Series using recursion. >
// #include<stdio.h>
// int fiboprint(int num)
// {
//     if(num==0)
//     {
//         return 0;
//     }
//     else if(num==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fiboprint(num-1) + fiboprint(num-2);
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter the number of terms to be print:-");
//     scanf("%d",&num);
//     printf("Fibonacci series:\n");
//     for (int i = 0; i < num; i++)
//     {
//         printf("%d ",fiboprint(i));
//     }
//     return 0;
// }



// // 4. Write a program in C to print the array elements using recursion. >
// #include<stdio.h>
// void arraydisplay(int arr[],int start,int end)
// {
//     if(start>=end)
//     {
//         return;
//     }
//     printf("%d ",arr[start]);
//     arraydisplay(arr,start+1,end);
// }
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter the size of array:-");
//     scanf("%d",&num);
//     int a[num];
//     for (int i = 0; i < num; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Array:\n");
//     arraydisplay(a,0,num);
//     return 0;
// }



// 5. Write a program in C to count the digits of a given number using recursion. >
// #include<stdio.h>
// int numberofdigits(int number,int c)
// {
//     if(number!=0)
//     {
//         c++;
//         return numberofdigits(number/10,c);
//     }
//     return c;
// }
// int main(int argc, char const *argv[])
// {
//     int number,c;
//     printf("Enter number:-");
//     scanf("%d",&number);
//     c=numberofdigits(number,0);
//     printf("Number of digits in the %d = %d",number,c);
//     return 0;
// }




// 6. Write a program in C to find the sum of digits of a number using recursion. >
// #include<stdio.h>
// int sumofdigits(int num,int total)
// {
//     if(num!=0)
//     {
//         total+=num%10;
//         num=num/10;
//         return sumofdigits(num,total) ;
//     }
//     return total;
// }
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter number : ");
//     scanf("%d",&num);
//     int sum=sumofdigits(num,0);
//     printf("Sum of digits = %d",sum);
//     return 0;
// }




// 7. Write a program in C to find the GCD of two numbers using recursion. >
// #include<stdio.h>
// int GCD(int num1,int num2)
// {
//     if (num1!=num2)
//     {
//         if(num1>num2)
//         {
//             return GCD(num1-num2,num2);
//         }
//         else
//         {
//             return GCD(num1,num2-num1);
//         }
//     }
//     return num1;
// }
// int main(int argc, char const *argv[])
// {
//     int num1,num2;
//     printf("Enter value for num1 and num2 :");
//     scanf("%d %d",&num1,&num2);
//     int gcd=GCD(num1,num2);
//     printf("GCD of %d and %d = %d",num1,num2,gcd);
//     return 0;
// }




// 8. Write a program in C to get the largest element and second largest of an array using recursion. >
// #include<stdio.h>
// #include<limits.h>
// int maxx(int arr[],int max,int start,int end)
// {
//     if (start<end)
//     {
//         if(arr[start]>max)
//         {
//             max=arr[start];
//             return maxx(arr,max,start+1,end);
//         }
//     }
//     return max;
// }
// int maxx2(int arr[],int max2,int start,int end,int largest)
// {
//     if (start<end)
//     {
//         if (arr[start]>max2 && arr[start]!=largest)
//         {
//             max2=arr[start];
//             return maxx2(arr,max2,start+1,end,largest);
//         }
//     }
//     return max2;
// }
// int main()
// {
//     int num;
//     printf("Enter size of the array:");
//     scanf("%d",&num);
//     int arr[num];
//     for (int i = 0; i < num; i++)
//     {
//         printf("Enter %d element :",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int largest = maxx(arr,INT_MIN,0,num);
//     printf("Max value from given array : %d\n",largest);
//     int slargest = maxx2(arr,INT_MIN,0,num,largest);
//     printf("Second max value from given array : %d",slargest);
//     return 0;
// }




// 10. Write a program in C to find the Factorial of a number using recursion. >
// #include<stdio.h>
// int factcalculation(int num)
// {
//     if(num==0)
//     {
//         return 1;
//     }
//     else if(num==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return num*factcalculation(num-1);
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter the number to calculate factorial:-");
//     scanf("%d",&num);
//     int fact=factcalculation(num);
//     printf("Value of factorial for %d = %d",num,fact);
//     return 0;
// }




// 11. Write a program in C to convert a decimal number to binary using recursion. >
#include<stdio.h>
int sum,multiplier=1;
int dtob(int num)
{
    if (num!=0)
    {
        int r=num%2;
        sum+=multiplier*r;
        multiplier*=10;
        dtob(num/2);
    }     
    return sum;
}
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    int binary=dtob(num);
    printf("Binary = %d",binary);
    return 0;
}



