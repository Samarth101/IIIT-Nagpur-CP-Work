// // Sqaure with *
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter Number of sides to print in sqauare star pattern =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             printf("*   ");
//         }
//         printf("\v\v");
//     }
//     return 0;
// }

//// Right triangle
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter Number of sides to print in sqauare star pattern =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int j= 1; j<=num-i ; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//// Right Down Triangle
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter Number of sides to print in sqauare star pattern =\n");
//     scanf("%d",&num);
//     for (int i = num; i >=1; i--)
//     {
//         for (int j = 1;  j<=num-i ; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k<=i; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

////Left triangle
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter number of rows for pattern = \n");
//     scanf("%d",&num);
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

////Left Down Triangle
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter number of rows = \n");
//     scanf("%d",&num);
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = num-i+1; j >=1; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //Pyramid star pattern
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Number of rows = \n");
//     scanf("%d",&num);
//     for (int i = 1; i <= num; i++)
//     {
//         for (int k = 1; k <=num-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j<=(2*i-1); j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //Reverse pyramid star pattern
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter number of rows = \n");
//     scanf("%d",&num);
//     for (int i =num ; i >=1 ; i--)
//     {
//         for (int k = 1; k <=num-i ; k++)
//         {
//             printf(" ");
//         }
//         for (int j =(2*i-1); j>=1 ; j--)
//         {
//            printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // Hourglass star pattern
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter number of rows = \n");
//     scanf("%d",&num);
//     for (int i =num ; i >=1 ; i--)
//     {
//         for (int k = 1; k <=num-i ; k++)
//         {
//             printf(" ");
//         }
//         for (int j =(2*i-1); j>=1 ; j--)
//         {
//            printf("*");
//         }
//         printf("\n");
//     }
//     for (int m = 2; m<=num; m++)
//     {
//         for (int n =1; n <=num-m ; n++)
//         {
//             printf(" ");
//         }
//         for (int o = 1; o <=(2*m-1) ; o++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //Diamond star pattern
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter NUmber of rows =\n");
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         for (int k = 1; k <= num - i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= (2 * i - 1); j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int m = num - 1; m >= 1; m--)
//     {
//         for (int n = 1; n <= num - m; n++)
//         {
//             printf(" ");
//         }
//         for (int o = (2 * m - 1); o >= 1; o--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //Right pascal star
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter Value for rows =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int m =1 ; m <= num-1; m++)
//     {
//         for (int k = num-m; k >=1; k--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //Left pascal star
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter value of row =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int k = 1; k <=num-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int m =num-1 ; m>=1; m--)
//     {
//         for (int n = 1; n <=num-m; n++)
//         {
//             printf(" ");
//         }
//         for (int o =m; o >=1; o--)
//         {
//             printf("*");
//         }
//         printf("\n") ;
//     }
//     return 0;
// }

// //Right triangle number
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter value for pattern =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <= num; i++)
//     {
//         for (int k = 1; k <= num-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <=i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //Left triangle number pattern
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter valur for pattern =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //Number pyramid pattern
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter number=\n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int k = 1; k <=num-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <=(2*i-1); j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //Number pyramid reverse pattern
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter value =\n");
//     scanf("%d",&num);
//     for (int i = num; i>=1; i--)
//     {
//         for (int k = 1; k <=num-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <=(2*i-1); j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //Number diamond pattern
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter value =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int k = 1; k <=num-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <=(2*i-1); j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     for (int m = num-1; m >=1; m--)
//     {
//         for (int n = 1; n <=num-m; n++)
//         {
//             printf(" ");
//         }
//         for (int  o=1 ;  o<=(2*m-1); o++)
//         {
//             printf("%d",o);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//// Alphabet diamond pattern
// #include<stdio.h>
// int main()
// {
//     int num;
//     int alphabets=65;
//     printf("Enter number of rows of alphabet you want to print =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int k = 1; k <=num-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <=(2*i-1); j++)
//         {
//             printf("%c",alphabets);
//             alphabets++;
//         }
//         printf("\n");
//         alphabets =65;
//     }
//     for (int m = num-1;m >=1 ; m--)
//     {
//         for (int n = 1; n <= num-m; n++)
//         {
//             printf(" ");
//         }
//         for (int o = 1; o<=(2*m-1) ; o++)
//         {
//             printf("%c",alphabets);
//             alphabets++;
//         }
//         printf("\n");
//         alphabets=65;
//     }
//     return 0;
// }

// //Alphabet pyramid pattern
// #include<stdio.h>
// int main()
// {
//     int num;
//     int alphabets=65;
//     printf("Enter Numer for rows of alphabets(Max value 14) =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int k = 1; k <=num-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <=(2*i-1); j++)
//         {
//             printf("%c",alphabets);
//             alphabets++;
//         }
//         printf("\n");
//         alphabets=65;
//     }
//     return 0;
// }

////Reverse alphabet pyramid pattern
// #include<stdio.h>
// int main()
// {
//     int num;
//     int alphabets=65;
//     printf("Enter value for number of eows of alphabet(Max value 14)=\n");
//     scanf("%d",&num);
//     for (int i =num ; i >=1; i--)
//     {
//         for (int  k= 1;  k<=num-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <=(2*i-1); j++)
//         {
//             printf("%c",alphabets);
//             alphabets++;
//         }
//         printf("\n");
//         alphabets=65;
//     }
//     return 0;
// }

// //Hollow Star Pyramid
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter NUmber of rows =\n");
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         for (int k = 1; k <= num - i; k++)
//         {
//             printf(" ");
//         }
//         if (i == 1 || i == num)
//         {
//             for (int j = 1; j <= (2 * i - 1); j++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//         else
//         {
//             for (int m = 1; m <= (2 * i - 1); m++)
//             {
//                 if (m == 1 || m == (2 * i - 1))
//                 {
//                     printf("*");
//                 }
//                 else
//                     printf(" ");
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

// //Hollow Square pattern
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter NUmber of sides for sqaure =\n");
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         if (i == 1 || i == num)
//         {
//             for (int j = 1; j <= num; j++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//         else
//         {
//             for (int k = 1; k <= num; k++)
//             {
//                 if (k == 1 || k == num)
//                 {
//                     printf("*");
//                 }
//                 else
//                     printf(" ");
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }


// //Hollow Diamond Star Pattern
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter value for rows of triangle =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int k = 1; k <=num-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <=(2*i-1); j++)
//         {
//             if (j==1 || j==(2*i-1))
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     for (int m = num-1; m >=1; m--)
//     {
//         for (int n = 1; n <=num-m; n++)
//         {
//             printf(" ");
//         }
//         for (int o = 1; o<=(2*m-1) ; o++)
//         {
//             if (o==1 || o==(2*m-1))
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");          
//         }
//         printf("\n");
//     }
//     return 0;
// }


// //Hollow number pyramid pattern
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter value for row =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int j = 1; j <=num-i; j++)
//         {
//             printf(" ");
//         }
//         for (int k =1; k <=(2*i-1); k++)
//         {
//             if (k==1 || k==(2*i-1))
//             {
//                 printf("%d",k);
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     for (int m = num-1; m >= 1; m--)
//     {
//         for (int n = 1; n <=num-m; n++)
//         {
//             printf(" ");
//         }
//         for (int o = 1; o <=(2*m-1); o++)
//         {
//             if (o==1 || o==(2*m-1))
//             {
//                 printf("%d",o);
//             }
//             else
//                 printf(" ");           
//         }
//         printf("\n");     
//     }
//     return 0;
// }


// //Cross Pttern Program
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter number of stars in one side of Cross =\n");
//     scanf("%d",&num);
//     for (int i = num; i >=1; i--)
//     {
//         for (int k = 1; k <=num-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <=(2*i-1); j++)
//         {
//             if (j==1 || j==(2*i-1))
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");          
//         }
//         printf("\n");
//     }
//     for (int m = 2; m <=num;m++)
//     {
//         for (int n = 1; n <=num-m; n++)
//         {
//             printf(" ");
//         }
//         for (int o = 1; o <=(2*m-1) ; o++)
//         {
//             if (o==1 || o==(2*m-1))
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");           
//         }
//         printf("\n");
//     }   
//     return 0;
// }


// //Rhombus Pattern Program
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter number of stars in one side for rhombus/Parallelogram =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int j = 1; j <=num-i;j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <=num; k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Pascal Traingle
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number of rows for pascal triangle =\n");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        for (int j = 1; j <=num-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=(2*i-1); k++)
        {
            if (k==1 || k==(2*i-1))
            {
                printf("%d",1);
            }
            else if (k%2==0)
            {
                printf(" ");
            }
            else
                printf("%d",i-1);
        }
        printf("\n");
    }
    return 0;
}



// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter Odd NUmber = \n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int j = 1; j <=num; j++)
//         {
//             if (i != (num/2 +1))
//             {
//                 printf("%d ",1);
//             }
//             else if (i==(num/2 +1))
//             {
//                 if (j==(num/2 +1))
//                 {
//                     printf("%d ",0);
//                 }
//                 else
//                     printf("%d ",1);
//             }
//         }
//         printf("\n");      
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter odd value for pattern =\n");
//     scanf("%d",&num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int j = 1; j <=num; j++)
//         {
//             if (i%2!=0)
//             {
//                 printf("%d ",1);
//             }
//             else 
//             {
//                 if (j%2 !=0)
//                 {
//                     printf("%d ",1);
//                 }
//                 else
//                     printf("%d ",0);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


