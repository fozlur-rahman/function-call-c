#include <stdio.h>
// no parameter return function
int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int total = a + b;
    return total;
}

int main()
{
    int s = sum();
    printf("%d", s);
    return 0;
}