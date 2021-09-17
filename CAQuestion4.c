#include <stdio.h>
int main()
{
    int e, f;
    printf("Following are the list of Services(Including Taxes)\n\n");
    printf("1. Simple Courier - Rs.20 + 12%% tax\n");
    printf("2. Parcel Below 1kg - Rs.100 + 18%% tax\n");
    printf("3. Parcel greater than or equal to 1kg - Rs.200 + 18%% tax\n");
    printf("4. Parcel Medicines - Rs.300 + 6%% tax\n");
    printf("Which Service Do You Want(Enter Serial Number) ?\n");
    scanf("%d", &e);

    printf("How Many Parcels Do You Want to Send ?\n");
    scanf("%d", &f);

    if (e==1)
    {
        printf("Total Amount = Rs %0.2f\n", 20*0.12*f);
    }
    else if (e==2)
    {
        printf("Total Amount = Rs %0.2f\n", 100*0.18*f);
    }
    else if (e==3)
    {
        printf("Total Amount = Rs %0.2f\n", 200*0.18*f);
    }
    else if (e==4)
    {
        printf("Total Amount = Rs%0.2f\n", 300*0.6*f);
    }
    else
    {
        printf("Invalid Input(Enter Serial Number)");
    }
    
    
    
    
    
    return 0;
}
