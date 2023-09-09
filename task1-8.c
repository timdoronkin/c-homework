#include <stdio.h>

int main()
{
    int array[1000];
    int n;
    scanf("%i\n", &n);
    for (int i = 0; i != n; ++i)
        scanf("%i", &array[i]);
    int k;
    scanf("%i", &k);
    for (int j = n; j != 0; j -= 1)
        array[j + k - 1] = array[j - 1];
    for (int p = 0; p != k; ++p)
        array[p] = array[p + n];
    for (int l = 0; l != n; ++l)
        printf("%i ", array[l]);
}