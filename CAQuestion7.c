#include <stdio.h>
int main()
{
    int marks;
    // ("Total Marks Of Paper Are 70")
    // ("I Assumed Average Marks Of Students As 50")
    printf("What Are Your Marks ?\n");
    scanf("%d", &marks);
    if (marks > 60 && marks <=70) 
    {
        printf("You Are Awarded With 'Grade A'");
    }
    else if (marks >= 55 && marks <= 60)
    {
        printf("You Are Awarded With 'Grade B'");
    }
    else if (marks >= 45 && marks <= 55)
    {
        printf("You Are Awarded With 'Grade C'");
    }
    else if (marks <45)
    {
        printf("You Are Awarded With 'Grade D'");
    }
    
    
    
    return 0;
}
