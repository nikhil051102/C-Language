#include <stdio.h>
int main()
{
    int a, b, c, x, y;
    printf("1. PhotoCopy = Rs.2 + 12%% tax\n", a);
    printf("2. Spiral Binding = Rs.50 + 18%% tax\n", b);
    printf("3. PrintOut = Rs.3 + 6%% tax\n", c);
    printf("Which Service Do You Want(Enter Serial Number) ?\n");
    scanf("%d", &x);

    printf("Number Of Copies ?\n");
    scanf("%d", &y);

    if (x==1)
    {
        printf("Total Amount = Rs %0.2f\n", 2*0.12*y);
    }
    else if (x==2)
    {
        printf("Total Amount = Rs %0.2f\n", 50*0.18*y);
    }
    else if (x==3)
    {
        printf("Total Amount = Rs %0.2f\n", 3*0.06*y);
    }
    
    
    return 0;
}




