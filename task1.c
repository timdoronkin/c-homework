#include <stdio.h>

int main()
{
    int array[1000];
    int n;
    scanf("%i\n", &n);
    for (int i = 0; i != n; ++i)
        scanf("%i", &array[i]);
    for (int j = n; j != 2 * n; ++j)
        array[j] = array[j - n];
    n = 2 * n;
    for (int k = 0; k != n; ++k)
        printf("%i ", array[k]);
}