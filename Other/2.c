#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("Enter In Days= %d\n", a);

    printf("In Hours= %d\n", a*24);

    printf("In Minutes= %d\n", a*24*60);

    printf("In Seconds= %d\n", a*24*60*60);

    return 0;
}

