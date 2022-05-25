#include <stdio.h>

int main()
{
    // there is not string in C
    char str[] = "Hello World";
    printf("%s its lentght is %lu\n", str, sizeof(str));
}