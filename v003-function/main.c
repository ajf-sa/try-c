#include <stdio.h>

int func();
int sum(int a, int b);

int main()
{
    func();
    int c = sum(2, 2);
    printf("%d\n", c);
    return 0;
}
int func()
{
    printf("Hello World! With Function\n");
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}