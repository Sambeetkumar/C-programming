#include <stdio.h>

int ArraySum(int *array, const int n);

int main ()
{
    int values[] = {10,10,10,10,10};

    printf ("the sum is %d \n",ArraySum(values,5));
}
int ArraySum(int *array, int n)

{
    int sum = 0;
    int *const ArrayEnd = array+n;

    for ( ;array<ArrayEnd; ++array)
        sum += *array;

    return sum;
}
