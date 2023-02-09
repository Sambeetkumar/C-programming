#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("\nEnter the values of a,b,c : ");
    scanf("%d %d %d", &a, &b, &c);

    if (pow(a, b) == c)
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }

    return 0;
}