
// #include <stdio.h>
// int main()
// {
//     float InitialHeight;
//     int Bounces, i;
//     printf("Enter The Initial Height Of Ball = ");
//     scanf("%f", &InitialHeight);
//     if (InitialHeight >= 0.4)
//     {
//         for ( i = 0; InitialHeight >= 0.4; i++)
//         {
//             InitialHeight*=0.9;
//             Bounces++;
//         }
//     }
//     printf("The Number Of Bounces Are %d", Bounces);
//     return 0;
// }

// Q.3 Using Non Recursive

// #include <stdio.h>
// int main()
// {
//     int n, i, first = 1, second = 2, sum = 0;
//     printf("Enter The Value Of n = %d");
//     scanf("%d", &n);
//     printf("Series : ");
//     for (i = 1; i <= n; i++)
//     {
//         if(i<=2)
//         {
//             sum=i;
//         }
//         else if (n>2)
//         {
//             sum = (first + second) * 2;
//             first = second;
//             second = sum;
//         }
//         printf("%d, ", sum);
//     }
//     return 0;
//}

// #include <stdio.h>
// int main()
// {
//     int i, n, marks[n], MyMarks, NumberOfStudents = 0;
//     printf("The Number Of Students In Section = ");
//     scanf("%d", &n);
//     printf("Your Marks = ");
//     scanf("%d", &MyMarks);
//     for (i = 1; i <= n; i++)
//     {
//         printf("Marks Of Student %d is  ", i);
//         scanf("%d", &marks[n]);
//         if (marks[n] > MyMarks)
//         {
//             NumberOfStudents++;
//         }
//     }
//     printf("Number Of Students Having Marks More Than You = %d", NumberOfStudents);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int first = 0, second = 1, i, n, sum = 0;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n); //accepting the terms
//     printf("Fibonacci Series:");
//     for (i = 0; i < n; i++)
//     {
//         if (i <= 1)
//         {
//             sum = i;
//         } //to print 0 and 1
//         else
//         {
//             sum = first + second;
//             first = second;
//             second = sum;
//             //to calculate the remaining terms.
//             //value of first and second changes as new term is printed.
//         }
//         printf(" %d", sum);
//     }
//     return 0;
// }
