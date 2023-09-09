#include <stdio.h>

int main()
{
    int n, max, var;
    scanf("%i\n%i\n", &n, &max);
    for (int k = 2; k <= n; k += 1)
    {
        scanf("%i\n", &var);
        if (var >= max)
            max = var;
    }
    printf("Max number is %i", max);
}