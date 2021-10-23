#include <stdio.h>
#include <math.h>
#include <string.h>
// 12.Write a C Program that read 5 numbers and Counts the number of positive and negative numbers.
// int main()
// {
//     float numbers[5];
//     int j, pctr=0, nctr=0;
//     printf("Enter The First Number = ");
//     scanf("%d", &numbers[0]);
//     printf("Enter The Second Number = ");
//     scanf("%d", &numbers[1]);
//     printf("Enter The Third Number = ");
//     scanf("%d", &numbers[2]);
//     printf("Enter The Fourth Number = ");
//     scanf("%d", &numbers[3]);
//     printf("Enter The Fifth Number = ");
//     scanf("%d", &numbers[4]);
//     for ( j = 0; j < 5; j++)
//     {
//         if (numbers[j] > 0)
//         {
//             pctr++;
//         }
//         else if (numbers[j] < 0)
//         {
//             nctr++;
//         }

//     }
//     printf("\nNumber of Positive Numbers = %d", pctr);
//     printf("\nNumber Of Negative Numbers = %d", nctr);
//     printf("\n");

//     return 0;
// }

// 13. Print The Even Numbers Between 1 to User Defined Uppee Limit.
// int main()
// {
//     int i, a;
//     printf("Enter The Upper Limit Of The Function = ");
//     scanf("%d", &a);
//     for ( i = 1; i <= a; i++)
//     {
//        if (i%2 == 0)
//        {
//            printf("%d\n", i);
//        }
//     }
//     return 0;
// }

// 14. Write a C Program that reads 5 positive numbers and counts the number of positive numbers and Print Average of all positive numbers.
// int main()
// {
//     float a, b, c, total;
//     printf("Enter 1st Number = ");
//     scanf("%f", &a);
//     printf("Enter 2nd Number = ");
//     scanf("%f", &b);
//     printf("Enter 3rd Number = ");
//     scanf("%f", &c);
//     if (a>=0 || b>=0 || c>=0)
//     {
//         total = (a + b + c);
//         printf("%0.2f", total/3);
//     }
//     else
//     {
//         printf("Enter Positive Only.");
//     }
//     return 0;
// }

// 15. Write a C Program That Reads 5 numbers and Prints Sum Of All Odd Values.
// int main()
// {
//     int a, b, c, sum;
//     printf("Enter 1st Number = ");
//     scanf("%d", &a);
//     printf("Enter 2nd Number = ");
//     scanf("%d", &b);
//     printf("Enter 3rd Number = ");
//     scanf("%d", &c);
//     if (a%2 != 0 || b%2 != 0 || c%2 != 0)
//     {
//         sum = a + b + c;
//         printf("The Sum OF Odd Values = %d", sum);
//     }
//     else
//     {
//         printf("Enter Valid Input");
//     }
//     return 0;
// }

// Another Method To Solve 15th Question.
// int main()
// {
//     int i, numbers[3], total=0;
//     printf("\nInput 1st Number = ");
//     scanf("%d", &numbers[0]);
//     printf("\nInput 2nd Number = ");
//     scanf("%d", &numbers[1]);
//     printf("\nInput 3rd Number = ");
//     scanf("%d", &numbers[2]);
//     for ( i = 0; i < 3; i++)
//     {
//         if ((numbers[i]%2) != 0)
//         {
//             total += numbers[i];
//         }
//     }
//     printf("\nSum Of all Odd Values = %d", total);
//     return 0;
// }

// 16. Write a C Program To Calculate The Square Of Each One Of the even values from 1 to Specified No. Put By User.
// #include <math.h>
// int main()
// {
//     int a, i;
//     printf("Enter The Upper Limit Of The Series = ");
//     scanf("%d", &a);
//     for (i = 1; i <= a; i++)
//     {
//         if ((i%2) == 0)
//         {
//             printf("%d^2 = %d\n", i, i*i);
//         }
//     }
//     return 0;
// }

// Another Method To Solve 16th Question.
// int main()
//  {
//      int a, i;
//      printf("Enter The Upper Limit Of The Series = ");
//      scanf("%d", &a);
//      for (i = 0; i <= a; i = i+2)
//      {
//          printf("%d^2 = %d\n", i, i*i);
//      }
//      return 0;
//  }

// 17.Write a C Program To Check Whether a Given Integer Is Positive Even, Positive Odd, Negative Even, Negative Odd. Print If Thr Number Is 0.
// int main()
// {
//     int a;
//     printf("Write Any Number = ");
//     scanf("%d", &a);
//     if (a > 0)
//     {
//         if (a%2 == 0)
//         {
//             printf("You Have Input The Positive Even Integer");
//         }
//         else if (a%2 != 0)
//         {
//             printf("You Have Input The Positive Odd Integer");
//         }
//     }
//     else if (a < 0)
//     {
//         if (a%2 == 0)
//         {
//             printf("You Have Input The Negative Even Integer");
//         }
//         else if (a%2 != 0)
//         {
//             printf("You Have Input The Negative Odd Integer");
//         }
//     }
//     else if (a == 0)
//     {
//         printf("You Have Input Zero");
//     }
//     return 0;
// }

// 18.Write a Program to Calculate Factorial.(Basic Program.)
//  int main()
//  {
//      int x, i, Factorial = 1;
//      printf("Factorial Of = ");
//      scanf("%d", &x);
//      for (i = 1; i <= x; i++)
//      {
//          Factorial = Factorial*i;
//          if (i == x)
//          {
//               printf("Factorial of %d is %d\n", x, Factorial);
//          }
//      }
//      return 0;
//  }

// 19.Write Function to calculate factorial using Recursive Function.
// int factorial(int number)
// {
//     if (number == 0 || number == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return (number * factorial(number - 1));
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter Number of which you want to calculate factorial of = ");
//     scanf("%d", &num);
//     printf("\nThe Factorial Of %d is %d", num, factorial(num));
//     return 0;
// }

// 20.Write a C Program to Calculate to print all numbers between 1 to 100 Which divided by specified number and the remainder is 3.
// int main()
// {
//     int a, i;
//     printf("Enter Any Integer Between 1 To 100 = ");
//     scanf("%d", &a);
//     for ( i = 1; i <= 100; i++)
//     {
//         if (i%a == 3)
//         {
//             printf("\nNumber = %d", i);
//         }
//     }
//     return 0;
// }

// 21.Write a C Prgram to print the numbers from the lowest to the highest and the sum of consecutive integer from given pair of the numbers.
// int main()
// {
//     int a, b, i, sum = 0;
//     printf("Enter The First No. Of The Pair = ");
//     scanf("%d", &a);
//     printf("Enter The Second No. Of The Pair = ");
//     scanf("%d", &b);
//     if (a < b)
//     {
//         for (i = a; i <= b; i++)
//         {
//             if (i % 2 == 1)
//             {
//                 printf("\n%d", i);
//                 sum += i;
//             }
//         }
//         printf("\nSum Of Odd Numbers Between The Interval Is = %d", sum);
//     }
//     else
//     {
//         printf("Check That You Have Entered 2nd Number Greater Than First");
//     }
//     return 0;
// }

// 22.Write a C Program to calculate the sum of all number not divisible by 17 between two given integer numbers.
// int main()
// {
//     int a, b, i, sum;
//     printf("Enter The First Number Of The Interval = ");
//     scanf("%d", &a);
//     printf("Enter The Second Number Of The Interval = ");
//     scanf("%d", &b);
//     if (a < b)
//     {
//         printf("\nThe Numbers Which Are Not Divisible By 17 Are As Follows:");
//         for ( i = a; i <= b; i++)
//         {
//             if (i%17 != 0)
//             {
//                 printf("%d\n", i);
//                 sum += i;
//             }
//         }
//        printf("\nThe Sum Of The Numbers Which Are Not Divisible By The 17 = %d", sum);
//     }
//     return 0;
// }

// 23.Write a C Program to print 3 numbers in a line, starting from 1 to print n lines.Accept number of lines from The User.
// int main()
// {
//     int n;
//     int k=1, i, j;
//     printf("Enter The Number Of Lines You Want To Print = ");
//     scanf("%d", &n);
//     for ( i = 0; i < n; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             printf("%d", k);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 24.Write a C Program to print a number, it's square and cube in a line, starting from 1 and print n lines. Accept The Number of lines from the user.
// int main()
// {
//     int i, j, x, y = 1;
//     printf("Enter The Number of Lines You Want To Print = ");
//     scanf("%d", &x);
//     for (i = 0; i < x; i++)
//     {
//         for (j = 0; j < 1; j++)
//         {
//             printf("%d %d %d\n", y, y * y, y * y * y);
//             y++;
//         }
//     }
//     return 0;
// }

// 25.Write a C Program that reads two integers p and q, print p number of lines in a sequence of 1 to q in a line.
// int main()
// {
//     int i, x = 0, j, a, b;
//     printf("Input Number Of Lines You Want = ");
//     scanf("%d", &a);
//     printf("Input Number Of Characters You Want In Line = ");
//     scanf("%d", &b);
//     for (i = 1; i <= a; i++)
//     {
//         for (j = 1; j <= b; j++)
//         {
//             printf("%d ", x);
//             x++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 26.Write a C Program To Calculate.
// int main()
// {
//     float S=0;
//     int i;
//     for ( i = 1; i <= 50; i++)
//     {
//         S += (float)1/i;
//     }
//     printf("Value of S: %0.2f\n", S);
//     return 0;
// }

// 27.Read An Integer From User And Find Its All Divisors.
// int main()
// {
//     int a, i;
//     printf("Enter Any Number = ");
//     scanf("%d", &a);
//     printf("The Divisors are As Below \n");
//     for (i = 1; i <= a; i++)
//     {
//         if (a % i == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// 28.Read 5 Integers from The User And Before Printing Them Replace Every Negative and 0 by 100;
// int main()
// {
//     int n[4];
//     int i;
//     printf("Enter The Numbers You Want To Print = ");
//     for (i = 0; i <= 4; i++)
//     {
//         printf("%d", n[i]);
//         scanf("%d", &n[i]);
//     }
//     for (i = 0; i <= 4; i++)
//     {
//         if (n[i] <= 0)
//         {
//             printf("%d", 100);
//         }
//         printf("%d\n", n[i]);
//     }
//     return 0;
// }

// 29.Printing Star Patterns.
// a).Right Triangle Star Pattern. & Mirrored Right Angle Star Pattern.
// int main()
// {
//     int i, j, a, b;
//     printf("Enter 0 For Triangular Star Pattern & 1 For Reverse Triangular Star Pattern = ");
//     scanf("%d", &a);
//     printf("Enter The Number Of Lines of Star Pattern You Want To Print = ");
//     scanf("%d", &b);
//     if (a == 0)
//     {
//         for (i = 1; i <= b; i++)
//         {
//             for (j = 1; j <= i; j++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//     }
//     else if (a == 1)
//     {
//         for (i = b; i >= 1; i--)
//         {
//             for (j = i; j >= 1; j--)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

// b).Square Star Pattern.
// int main()
// {
//     int i, j, b;
// printf("Enter The Number Of Lines of Star Pattern You Want To Print = ");
// scanf("%d", &b);
// for (i = 1; i <= b; i++)
// {
//     for (j = 1; j <= b; j++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
// }

// c).Hollow Square Star Pattern With Diagonally Stars.
// int main()
// {
//     int i, j, a;
//     printf("Enter The No Of Lines Of Square = ");
//     scanf("%d", &a);
//     for (i = 1; i <= a; i++)
//     {
//         for (j = 1; j <= a; j++)
//         {
//             if (i == 1 || i == a || j == 1 || j == a || i==j)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int i, j, a, b, integers[a][b];
//     printf("Number Of Rows = ");
//     scanf("%d", &a);
//     printf("Number Of Columns = ");
//     scanf("%d", &b);
//     for (i = 1; i <= a; i++)
//     {
//         for (j = 1; j <= b; j++)
//         {
//             printf("%d Row and %d Column = ", i, j);
//             scanf("%d", integers[a][b]);
//         }
//     }
//    return 0;
// }



