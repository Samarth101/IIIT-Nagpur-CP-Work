// #include <stdio.h>
// #include <limits.h>
// struct employee {
//     char name[20];
//     int age;
//     float salary;
//     float weight;
//     char gender;
// };
// void calculation(struct employee *e, int size) {
//     float avgsalary, min = INT_MAX, max = INT_MIN, sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += e[i].salary;
//         if (e[i].salary > max) {
//             max = e[i].salary;
//         }
//         if (e[i].salary < min) {
//             min = e[i].salary;
//         }
//     }
//     avgsalary = sum / size;
//     printf("Average salary of employees = %.2f\n", avgsalary);
//     printf("Minimum salary among employees = %.2f\n", min);
//     printf("Maximum salary among employees = %.2f\n", max);
// }
// void stats(struct employee *e, int a[], int size) {
//     float sum = 0;
//     int mode = a[0], maxCount = 0;
//     // Calculate mean
//     for (int i = 0; i < size; i++) {
//         sum += e[i].age;
//     }
//     printf("Mean of the age of employees = %.2f\n", sum / size);
//     // Sort ages to calculate median and mode
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = i + 1; j < size; j++) {
//             if (a[i] > a[j]) {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     // Calculate median
//     if (size % 2 == 0) {
//         printf("Median of ages of employees = %.2f\n", (a[size / 2 - 1] + a[size / 2]) / 2.0);
//     } else {
//         printf("Median of ages of employees = %d\n", a[size / 2]);
//     }
//     // Calculate mode
//     for (int i = 0; i < size; i++) {
//         int count = 1;
//         while (i < size - 1 && a[i] == a[i + 1]) {
//             count++;
//             i++;
//         }
//         if (count > maxCount) {
//             maxCount = count;
//             mode = a[i];
//         }
//     }
//     if (maxCount > 1) {
//         printf("Mode of ages of employees = %d\n", mode);
//     } else {
//         printf("No mode found among ages of employees\n");
//     }
// }
// int main() {
//     int num;
//     printf("Enter number of employees in your company: ");
//     scanf("%d", &num);
//     struct employee e[num];
//     int a[num];
//     for (int i = 0; i < num; i++) {
//         printf("Enter data for employee %d\n", i + 1);
//         printf("Enter name of employee: ");
//         scanf("%s", e[i].name);
//         printf("Enter age of employee: ");
//         scanf("%d", &e[i].age);
//         printf("Enter salary of employee: ");
//         scanf("%f", &e[i].salary);
//         printf("Enter weight of employee: ");
//         scanf("%f", &e[i].weight);
//         printf("Enter gender of employee: ");
//         scanf(" %c", &e[i].gender);
//         a[i] = e[i].age;
//     }
//     // Optional: Print the details to verify input
//     for (int i = 0; i < num; i++) {
//         printf("\nDetails of employee %d:\n", i + 1);
//         printf("Name: %s\n", e[i].name);
//         printf("Age: %d\n", e[i].age);
//         printf("Salary: %.2f\n", e[i].salary);
//         printf("Weight: %.2f\n", e[i].weight);
//         printf("Gender: %c\n", e[i].gender);
//     }
//     calculation(e, num);
//     stats(e, a, num);
//     return 0;
// }



// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter size of array: ");
//     scanf("%d", &num);
//     int a[num], b[num], c[2 * num];
//     printf("Enter values for elements of array1:\n");
//     for (int i = 0; i < num; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter values for elements of array2:\n");
//     for (int i = 0; i < num; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     int p = 0, flg = 0, j = 0;
//     while (p < 2 * num && j < num)
//     {
//         if (flg == 0)
//         {
//             c[p++] = a[j];
//             c[p++] = b[j];
//             j++;
//             c[p++] = b[j];
//             flg = 1;
//         }
//         else
//         {
//             c[p++] = a[j];
//             j++;
//             c[p++] = a[j];
//             c[p++] = b[j];
//             j++;
//             flg = 0;
//         }
//     }
//     printf("Array 3:\n");
//     for (int i = 0; i < 2 * num; i++)
//     {
//         printf("%d ", c[i]);
//     }
//     printf("\n");
//     return 0;
// }


// Tricky Questions
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str[]="Hello";
//     char* ptr=str;
//     while(*ptr!='\0')
//     {
//         printf("%c",++*ptr++);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a=100,b=74;
//     if (a++>100 && b++>200)
//     {
//         printf("High values with a = %d and b = %d",a,b);
//     }
//     if (a++<100 || b++<200)
//     {
//         printf("Low values with a = %d and b = %d",a,b);
//     }
//     return 0;
// }
// First part of the condition (a++ > 100):
// a++ uses the value of a (which is 100), then increments it. So, 100 > 100 is evaluated, which is false.
// After this check, a becomes 101 due to the post-increment.
// Second part of the condition (b++ > 200):
// Since the first part of the condition is false, the logical AND (&&) operator
//  uses short-circuiting. This means that the second
//  part (b++ > 200) is not evaluated at all because the entire 
//  condition is already false due to the first part being false.



// #include<stdio.h>
// struct student
// {
//     int roll_number;
//     char name[30];
//     int age;
//     float marks[5];
// };
// void calculation(struct student *s,int strength)
// {
//     int subjecttopper,maxmarks=0,subjecttoppermarks,maxmarksrollnumber;
//     for (int i = 0; i < 5; i++)
//     {
//         subjecttoppermarks=0;
//         for (int j = 0; j < strength; j++)
//         {
//             if (s[j].marks[i]>subjecttoppermarks)
//             {
//                 subjecttoppermarks=s[j].marks[i];
//                 subjecttopper=s[j].roll_number;
//             }
//             if (s[j].marks[i]>maxmarks)
//             {
//                 maxmarks=s[j].marks[i];
//                 maxmarksrollnumber=s[j].roll_number;
//             }
//         }
//         printf("Student with Roll.No  : %d have highest marks in Subject %d\n",subjecttopper,i+1);
//     }
//     printf("Student having highest marks in all subjects is Roll.No : %d\n",maxmarksrollnumber);
// }
// int main(int argc, char const *argv[])
// {
//     int strength;
//     printf("Enter class strength :");
//     scanf("%d",&strength);
//     struct student students[strength];
//     for (int i = 0; i < strength; i++)
//     {
//         printf("Enter name of student :");
//         getchar();
//         fgets(students[i].name,30,stdin);
//         printf("Enter roll number :");
//         scanf("%d",&students[i].roll_number);
//         printf("Enter age :");
//         scanf("%d",&students[i].age);
//         for (int j = 0; j < 5; j++)
//         {
//             printf("Enter marks for %d subject :",j+1);
//             scanf("%f",&students[i].marks[j]);
//         }
//     }
//     calculation(students,strength);
//     return 0;
// }



// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// int main(int argc, char const *argv[])
// {
//     char email[100];
//     printf("Enter your email id:");
//     scanf("%s",email);
//     int l = strlen(email);
//     char str[]="@domain";
//     if (strncmp(email+strlen(email)-7,str,7)!=0)
//     {
//         printf("The email is not valid!!\n");
//         return 0;
//     }
//     for (int i = 0; email[i]!='@'; i++)
//     {
//         if (!isalnum(email[i]))
//         {
//             printf("The email is not valid!!\n");
//             return 0;
//         }
//     }
//     printf("The email is valid you can proceed further\n"); 
//     return 0;
// }



// #include<stdio.h>
// char* lastoccur(char *s,char c)
// {
//     char* ptr=NULL;
//     int i=0;
//     while (s[i]!='\0')
//     {
//         if (s[i]==c)
//         {
//             ptr=s+i;
//         }
//         i++;
//     }
//     return ptr;
// }
// int main(int argc, char const *argv[])
// {
//     char s[100];
//     printf("Enter a string:");
//     scanf("%s",s);
//     char c;
//     printf("Enter character value:");
//     scanf(" %c",&c);
//     char* ch=lastoccur(s,c);
//     if (ch!=NULL)
//     {
//         printf("Substring after the character '%c' is %s\n",c,ch);
//     }
//     // In C, strings are represented as character arrays terminated by a 
//     // null character ('\0'). When you pass a pointer to a character within
//     // this array to printf with the %s format specifier, printf will print
//     // characters starting from that pointer position until it reaches the null terminator
//     else
//     {
//         printf("The character is not found in the string");
//     }
//     return 0;
// }



// Pattern Endsem
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int numrows,flg;
//     printf("Enter the number of rows to be generated for pattern :");
//     scanf("%d",&numrows);
//     for (int i = 1; i <= numrows; ++i)
//     {
//         int p=i-1,flg=0;
//         for (int j = 1; j <=(numrows-i)*2 ; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <=(2*i-1); k++)
//         {
//             printf("%d ",p);
//             if (p == 0)
//             {
//                 flg = 1;
//             }
//             else if (p>0 && flg==0)
//             {
//                 p--;
//             }
//             if (flg==1)
//             {
//                 p++;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



// //Pascal Triangle
// #include <stdio.h>
// int main()
// {
//     int num;
//     int ncr; 
//     printf("Enter Number of rows for pascal triangle =\n");
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         ncr=1;
//         for (int j = 1; j <= num - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <=i; k++)
//         {
//             if (k == 1 || k ==i)
//             {
//                 printf("%d ",1);
//             }
//             else
//             {
//                 ncr *= (float)(i - k + 1) / (k-1);
//                 printf("%d ",ncr);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



// // CharacterMania
// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char str[100];
//     printf("Enter string :");
//     fgets(str,sizeof(str),stdin);
//     int c,j,i;
//     for ( i = 0; str[i]!='\0'; i++)
//     {
//         c=0;
//         for (j = 0; str[j]!='\0'; j++)
//         {
//             if (str[i] == str[j])
//             {
//                 c++;
//             }
//         }
//         if(c==1 && str[i]!='\n')
//         {
//             printf("The first non-repeating character is %c\n",str[i]);
//             break;
//         }
//     }
//     if (str[i]=='\0')
//     {
//         printf("There is no non-repeating character in the string\n");
//     }
//     return 0;
// }



