#include <stdio.h>
int main()
{
    int  marks;
    printf("How Many Marks Have You Got?\n");

    scanf("%d", &marks);
    printf("You Have Entered %d As Your Marks\n", marks);
    if (marks==45) {
        printf("You Have Passed Maths &Science");
    }
    else if(marks==15)  {
        printf("You Have Passed Maths Only");
    }
    else if(marks==20) {
        printf("You Have Passed Science Only");
    }
    else {
        printf("You are not eligible for Prize");
    }
    return 0;
}
