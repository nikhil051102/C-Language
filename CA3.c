

// #include <stdio.h>
// #include <string.h>

// // int main()
// // {
// //     int matrix[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
// //     int rows, columns, value;
// //     for (rows = 0; rows < 4; rows++)
// //     {
// //         for (columns = 0; columns < 4; columns++)
// //         {
// //             printf("%d ", matrix[rows][columns]);
// //         }
// //         printf("\n");
// //     }

// //     printf("\nMatrix After Replacing Elements is \n");
// //     for (rows = 0; rows < 4; rows++)
// //     {
// //         for (columns = 0; columns < 4; columns++)
// //         {

// //             if (columns < 3)
// //             {
// //                 value = matrix[rows][columns + 1];
// //                 printf("%d ", value);
// //             }
// //             else if(columns == 3)
// //             {
// //                 printf("%d ", matrix[rows][0]);
// //             }
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }

// // int main()
// // {
// //     int numbers[10], i, value;
// //     printf("Enter Any 10 Elements \n");
// //     for ( i = 0; i < 10; i++)
// //     {
// //         scanf("%d\n", &numbers[i]);
      
// //     }
// //     for ( i = 0; i < 10; i++)
// //     {
// //         value= numbers[i]/2;
// //        for ( i = 0; i < value; i++)
// //        {
// //            if (numbers[i]%value != 0)
// //            {
// //                printf("P\n");
// //            }
// //            else if (numbers[i]%2==0)
// //            {
// //                printf("E\n");
// //            }
// //            else
// //            {
// //                printf("N\n");
// //            }   
       
// //     }
// //     return 0;
// // }

// int main()
// {
//     char value[100];
//     char output[100];
//     int comparison;
//     printf("Enter The String = ");
//     gets(value);
//     printf("Enter The Reverse of String = ");
//     gets(output);
//     strrev(value);

//     comparison = strcmp(output, strrev(value));
//     // printf("The Reverse Of Input String = %s\n", value);
//     if (comparison==0)
//     {
//         printf("String Reverse is Correct");
//     }
    
//     return 0;
// }
