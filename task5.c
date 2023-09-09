#include <stdio.h>

int main()
{
    int n, max, a;
    scanf("%i", &n);
    printf("%i ", n);
    max = n;
    int counter = 1;
    while (n != 1)
    {
        a = n;
        if ((n % 2) != 1)
            n = a / 2;
        else
            n = 3*a + 1;
        counter += 1;
        printf("%i ", n);
        if (n > max)
            max = n;
    }
    printf("\n%i\n%i", max, counter);
}