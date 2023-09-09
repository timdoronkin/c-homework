#include <stdio.h>

int main()
{
    int n;
    int cur;
    cur = 1;
    scanf("%i", &n);
    while (cur <= n)
    {
        printf("%4i -> %4i -> %4i\n", cur, cur*cur, cur*cur*cur);
        cur += 1;
    }
}