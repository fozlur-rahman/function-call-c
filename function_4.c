#include <stdio.h>
// no parameter no return functiopn;
void sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    printf("%d", s);
}
int main()
{
    sum();

    return 0;
}