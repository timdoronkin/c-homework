#include <stdio.h>

int main()
{
    int array[1000];
    int n;
    scanf("%i\n", &n);
    for (int i = 0; i != n; ++i)
        scanf("%i", &array[i]);
    int temp;
    for (int j = 0; j != n; ++j)
    {
        if (array[j] % 2 == 0)
        {
            for (int p = j + 1; p != n; ++p)
            {
                if (array[p] % 2 == 1)
                {
                    temp = array[j];
                    array[j] = array[p];
                    array[p] = temp;
                }
                else
                    continue;
            }
        }
    }
    for (int k = 0; k != n; ++k)
        printf("%i ", array[k]);
}