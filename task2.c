#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%i\n%i\n%i", &a, &b, &c);
    if (a == b && b == c)
        printf("Equal");
    else if (b - a == 1 && c - b == 1)
        printf("Consecutive");
    else if (a > b && b > c)
        printf("Decreasing");
    else if (a < b && b < c)
        printf("Increasing");
    else
        printf("None"); 
}