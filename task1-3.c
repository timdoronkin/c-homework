#include <stdio.h>

int main()
{
    int array[1000];
    int n;
    scanf("%i\n", &n);
    for (int i = 0; i != n; ++i)
        scanf("%i", &array[i]);
    int delete;
    scanf("%i", &delete);
    for (int k = delete; k != n; ++k)
        array[k] = array[k + 1];
    n = n - 1;
    for (int j = 0; j != n; ++j)
        printf("%i ", array[j]);
}