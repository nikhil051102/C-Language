#include <stdio.h>

int main()
{
    int n;
    printf("Cover Price OF Book = Rs.%0.2f\n", 295.95);
    printf("40%% Discount By Shopkeepers = Rs.%0.2f\n", (295.95*40)/100);
    printf("Shipping Cost For First Copy = Rs.%0.2f\n", (295.95*40)/100 + 30);
    printf("Amount for Each Additional Copy = Rs.18 per copy\n");
    printf("How Many Copies Do You Want ?\n");
    scanf("%d", &n);
    if (n==1)
    {
        printf("Total Amount = Rs.%0.2f\n", (295.95*40)/100 + 30);
    }
    else if(n>1)
    {
        printf("Total Amount = Rs.%0.2f\n", (n-1)*(295.95*40)/100 + 18 + (295.95*40)/100 + 30);
    }
    else
    {
        printf("Visit Again !");
    }
    
    
    
    return 0;
}
