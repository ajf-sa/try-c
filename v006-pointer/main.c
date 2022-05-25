#include <stdio.h>

int main()
{
    int var = 20;
    int *ptr = &var;
    printf("%d\n", *ptr);
    // printf("%d\n", ptr);
    return 0;
}