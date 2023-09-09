#include <stdio.h>

int main()
{
    int array[1000];
    int n;
    scanf("%i\n", &n);
    for (int i = 0; i != n; ++i)
        scanf("%i", &array[i]);
    int trigger;
    int count_neg;
    for (int l = 0; l != n; ++l)
    {
        if (array[l] < 0)
            count_neg += 1;
    }
    for (int j = 0; j != n; ++j)
    {
        if (array[j] < 0)
        {
            trigger = 0;
            for (int p = j + 1; trigger == 0; ++p)
            {
                if (array[p] >= 0)
                {
                    trigger = 1;
                    array[j] = array[p];
                    array[p] = -1;
                }
            }
        }
    }
    n = n - count_neg;
    for (int k = 0; k != n; ++k)
        printf("%i ", array[k]);
}    