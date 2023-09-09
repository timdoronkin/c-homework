#include <stdio.h>

int main()
{
    int array[1000];
    int n;
    scanf("%i\n", &n);
    for (int i = 0; i != n; ++i)
        scanf("%i", &array[i]);
    for (int j = n; j != 0; j -= 1)
        array[2 * j - 1] = array[j - 1];
    n = 2 * n;
    for (int p = 0; p < n; p += 2)
        array[p] = array[p + 1];
    for (int k = 0; k != n; ++k)
        printf("%i ", array[k]);
}