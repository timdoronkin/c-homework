#include <stdio.h>

int main()
{
    int array[1000];
    int n;
    scanf("%i\n", &n);
    for (int i = 0; i != n; ++i)
        scanf("%i", &array[i]);
    int new, ind;
    scanf("\n%i %i", &new, &ind);
    if (ind < n)
    {
        for (int i = 1; i != n - ind + 1; ++i)
            array[n - i + 1] = array[n - i];
    }
    array[ind] = new;
    n += 1;
    for (int k = 0; k != n; ++k)
        printf("%i ", array[k]);
}