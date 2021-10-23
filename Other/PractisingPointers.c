#include <stdio.h>
int main()
{
    int a = 36;
    int *ptra = &a;
    printf("The Value Of The Input is %d\n", a);
    printf("The address of the Input is %d\n", ptra);
    printf("The address of the Input is %p\n", ptra);
    printf("The Address of the Input is %d\n", ptra + 1);
    return 0;
}