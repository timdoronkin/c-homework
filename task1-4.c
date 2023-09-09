#include <stdio.h>

int main()
{
    int array[1000];
    int n;
    scanf("%i\n", &n);
    for (int i = 0; i != n; ++i)
        scanf("%i", &array[i]);
    int start, end;
    scanf("%i %i", &start, &end);
    int length = end - start + 1;
    for (int j = start; j < n; ++j)
        {
            array[j] = array[j + length];
        }
    n = n - length;
    for (int k = 0; k != n; ++k)
        printf("%i ", array[k]);
}