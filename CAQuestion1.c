#include <stdio.h>
int main()
{
    int a, c;
    printf("Retail Price Of Item Per Unit ?\n");
    scanf("%d", &a);

    printf("Sales Tax Rate Per Unit is 7%%\n");

    printf("Number Of Units Being Purchased ?\n");
    scanf("%d", &c);

    printf("Total Sales Tax = Rs. %0.2f\n", c*0.07);
    
    printf("Total Sale (Including Sales Tax) = Rs. %0.2f\n", a*0.07 + c*0.07);

    return 0;
}
