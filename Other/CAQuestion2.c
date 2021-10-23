#include <stdio.h>
int main()
{
    int a;
    printf("I Leave My House at 6:52am\n");
    printf("Run 1 mile at an Easy Pace for 8 minutes 15 seconds = %d seconds\n", 8*60 + 15);
    printf("3 miles at Tempo for 7 minutes 12 seconds = %d seconds\n", 3*(7*60 + 12));
    printf("Again 1 mile at an Easy Pace for 8 minutes 15 seconds = %d seconds\n\n", 8*60 + 15);
    printf("Total Time After Leaving House(seconds) = %d seconds\n", 8*60+15+3*(7*60+12)+8*60+15);
    printf("(Minutes)After Which I Will Return Home = %0.1f minutes\n", 38.1);
    printf("Time When I will Return Home = 7:30 am");
    return 0;
}
