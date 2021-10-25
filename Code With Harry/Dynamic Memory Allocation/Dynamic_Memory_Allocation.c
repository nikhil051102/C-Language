#include <stdio.h>
#include <stdlib.h>

//If we run any function then a memory in Stack is allocated to it once it returns any value all the memory gets free.

//Dynamic Memory Allocation is used to allocate Memory at RunTime. Dynamic Memory Allocation is the way in which the size of data structure can be changed during run time.

int main()
{
    //malloc Function
    // int* ptr;
    // int n;
    
    // printf("Number of Elements in Array : ");
    // scanf("%d", &n);
    // ptr = (int*)malloc(n*sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter Element : ");
    //     scanf("%d", &ptr[i]);
    //     printf("\n");
    // }
    
    // for (int j = 0; j < n; j++)
    // {
    //     printf("Element : %d", ptr[j]);
    //     printf("\n");
    // }




    //calloc function
    //Program allocated storage to store 4 integers but we dont input their value and then directly input it then calloc will put all the value to 0. Thats why malloc allocates garbage value and calloc allocates 0.
    int* ptr;
    int n;
    
    printf("Number of Elements in Array : ");
    scanf("%d", &n);
    ptr = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element : ");
        scanf("%d", &ptr[i]);
        printf("\n");
    }
    
    for (int j = 0; j < n; j++)
    {
        printf("Element : %d", ptr[j]);
        printf("\n");
    }



    // realloc function
    printf("Number of Elements in Array : ");
    scanf("%d", &n);
    ptr = (int*)realloc(ptr, n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element : ");
        scanf("%d", &ptr[i]);
        printf("\n");
    }
    
    for (int j = 0; j < n; j++)
    {
        printf("Element : %d", ptr[j]);
        printf("\n");
    }
    return 0;
}