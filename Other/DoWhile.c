#include <stdio.h>
int main()
{
    int number, index;
    printf("Enter Any Number");
    scanf("%d", &number);
    do
    {
        printf("%d\n", index + 2);
        index = index + 2;
    } while (index < number);
    return 0;
}