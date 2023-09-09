#include <stdio.h>

int main()
{
    int a, b;
    scanf("%i %i", &a, &b);
    int maxl = 0;
    int maxn = 0;
    int count, i;
    for (int k = a; k <= b; k++)
    {
        count = 1;
        i = k;
        while (i != 1)
        {
            if (i % 2 == 1)
                i = i * 3 + 1;
            else
                i = i / 2;
            count += 1;
        }
        if (count > maxl)
        {
            maxl = count;
            maxn = k; 
        }
    }
    printf("%i %i", maxl, maxn);
}