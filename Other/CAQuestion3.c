#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Name = Nikhil Vijay Deore\n");
    printf("City = Nashik\n");
    printf("Enter Date Of Birth As\n");
    printf("Enter Day =");
    scanf("%d", &a);
    printf("Enter Month =");
    scanf("%d", &b);
    printf("Enter Year=");
    scanf("%d", &c);
    if (a<1 || a>31)
    {
        printf("Invalid Day");
    }
    
    else if (b>12)
    {
        printf("Invalid Month");
    }
    else if (c<1900 || c>2100)
    {
        printf("Invalid Birth Year");
    }
    
    else if (b==02)
    {
        if (a==31 || a==30)
        {
            printf("Invalid Day\n");
            
        }
        else if(a==29 && c%4 != 0 );
        {
            printf("Invalid Day In Leap Year\n");
        }
        
    }
    else if (a==31)
    {
        if (b==4, 6, 8, 10, 12)
        {
            printf("Invalid Day In Month");
        }
    }
    else
    {
        printf("Ensure That You That Entered Valid Data");
    }

    return 0;
}
