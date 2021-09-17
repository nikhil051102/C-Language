#include <stdio.h>
// This Program is for Printing Table
//  int main()
//  {
//   int table, i;
//     printf("Enter Any Number = ");
//     scanf("%d", &table);
//     for (i = 1; i <= 10; i++)
//     {
//         printf("\n%d*%d=%d", table, i, table*i);
//     }

//     return 0;
// }

// 2.This Program is for Printing Factorial
// int main()
// {
//     int input, i, fact = 1;
//     printf("Enter Any Number = ");
//     scanf("%d", &input);
//     for ( i = 1; i <= input; i++)
//     {
//         printf("%d\n", fact = fact*i);
//     }

//     return 0;
// }

// 3.This Program Is To Reverse The Characters.
// int main()
// {
//     char char1 = 'N';
//     char char2 = 'I';
//     char char3 = 'K';
//     char char4 = 'H';
//     char char5 = 'I';
//     char char6 = 'L';
//     printf("The Reverse Of %c%c%c%c%c%c is %c%c%c%c%c%c", char1, char2, char3, char4, char5, char6, char6, char5, char4, char3, char2, char1);
//     return 0;
// }

// 4. Write a program to convert any interger to hours, minutes, seconds.
//  int main()
//  {
//      int input, h, m, s;
//      printf("Enter A Integer Which You Want To Convert(In Seconds) = ");
//      scanf("%d", &input);
//      h = (input/3600);

//      m = (input - (3600*h))/60;

//      s = (input - (3600*h) - (m*60));

//      printf("H:M:S - %d:%d:%d\n", h, m, s);
//      return 0;
//  }

// 5. Write a Program To Convert The Days Into Years, Months, Days.
// int main()
// {
//     int TotalDays, Years, Months, Days;
//     printf("Enter The Days = ");
//     scanf("%d", &TotalDays);
//     Years = TotalDays/365;

//     TotalDays = TotalDays - (365*Years);

//     Months = TotalDays/30;

//     Days = (TotalDays - (Months*30));

//     printf("Days - %d\n", Days);
//     printf("Months - %d\n", Months);
//     printf("Years - %d\n", Years);
//     return 0;
// }

// 6. Write A Program that accepts 4 integers p, q, r, s from the user where r and s are positive and p is even. If q is greater then r and s
// is greater than p and if sum of r and s is greater than then sum of p and q print "Correct Values" otherwise print "Wrong Values"
// int main()
// {
//     int p, q, r, s;
//     printf("\nEnter Value Of p(Always Even) = ");
//     scanf("%d", &p);
//     printf("\nEnter Value of q = ");
//     scanf("%d", &q);
//     printf("\nEnter Value of r(Always Positive) = ");
//     scanf("%d", &r);
//     printf("\nEnter Value of s(Always Positive) = ");
//     scanf("%d", &s);
//     if ((r>0) && (s>0) && (p%2 == 0) && (q>r) && (s>p) && ((r+s) > (p+q)))
//     {
//         printf("Correct Value\n");//     }
//     else
//     {
//         printf("Wrong Value\n");
//     }
//     return 0;
// }

// 7.Write The C Program To Print The Roots Of Bhaskara's Formula from the given three floating numbers. Display A Message if it is not
//     possible to find the roots
// #include <math.h>
// int main()
// {
//     double a, b, c, D;
//     printf("\nInput The First Number(a) = ");
//     scanf("%lf", &a);
//     printf("\nInput The Second Number(b) = ");
//     scanf("%lf", &b);
//     printf("\nInput The Third Number(c) = ");
//     scanf("%lf", &c);

//     D = ((b*b) - (4*a*c));

//     if (D > 0 && a != 0)
//     {
//         double x, y;
//         D = sqrt(D);
//         x = (-b + D)/(2*a);
//         y = (-b + D)/(2*a);
//         printf("FirstRoot = %0.3lf\n", x);
//         printf("SecondRoot = %0.3lf\n", y);
//     }
//     else
//     {
//         printf("\nImpossible To Find The Roots.");
//     }

//     return 0;
// }

// 8. Get 5 Integer Numbers from User and Add Odd Numbers of the input numbers.
// int main()
// {
//     int j, numbers[5], total=0;
//     printf("\nEnter First Number = ");
//     scanf("%d", &numbers[0]);
//     printf("\nEnter Second Number = ");
//     scanf("%d", &numbers[1]);
//     printf("\nEnter Third Number = ");
//     scanf("%d", &numbers[2]);
//     printf("\nEnter Fourth Number = ");
//     scanf("%d", &numbers[3]);
//     printf("\nEnter Fifth Number = ");
//     scanf("%d", &numbers[4]);
//     for ( j = 0; j < 5; j++)
//     {
//      if ((numbers[j]%2) !=0)
//      {
//          total += numbers[j];
//      }
//     }
//     printf("\nSum Of All Odd Number = %d", total);
//     printf("\n");

//     return 0;
// }

// 9. Get three sides of triangle from the user. Check if it is possible or not. if possible find perimeter.

// int main()
// {
//     int x, y, z, P;
//     printf("\nEnter First Side = ");
//     scanf("%d", &x);
//     printf("\nEnter Second Side = ");
//     scanf("%d", &y);
//     printf("\nEnter Third Side = ");
//     scanf("%d", &z);
//     if ((x+y) > z && (y+z) > x && (z+x) > y)
//     {
//         P = x + y + z;
//         printf("\nTriangle Is Possible & Its Perimeter Is = %d", P);
//     }
//     else
//     {
//         printf("\nTriangle Not Possible");
//     }
//     return 0;
// }

// 10.Write a C Program That Reads The VAlue Between 1 to 12 & Declared The Monyh in a Year.
// int main()
// {
//     int x;
//     printf("Enter The Month By Its Number = ");
//     scanf("%d", &x);
//     switch (x)
//     {
//     case 1:
//         printf("January");
//         break;
//     case 2:
//         printf("February");
//         break;
//     case 3:
//         printf("March");
//         break;
//     case 4:
//         printf("April");
//         break;
//     case 5:
//         printf("May");
//         break;
//     case 6:
//         printf("June");
//         break;
//     case 7:
//         printf("July");
//         break;
//     case 8:
//         printf("August");
//         break;
//     case 9:
//         printf("September");
//         break;
//     case 10:
//         printf("October");
//         break;
//     case 11:
//         printf("November");
//         break;
//     case 12:
//         printf("December");
//         break;

//     default:
//     printf("Input The Number Between 1 To 12.");
//         break;
//     }
//     return 0;
// }

// 11.Write a C Program that prints all even numbers between given interval.
// int main()
// {
//     int x, y;
//     printf("Enter The First Number Of The Interval = ");
//     scanf("%d", &x);
//     printf("Enter The Last Number Of The Interval = ");
//     scanf("%d", &y);
//     for (x; x <= y; x++)
//     {
//         if (x%2 == 0)
//         {
//             printf("%d", x);
//         }

//     }

//     return 0;
// }