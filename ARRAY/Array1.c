#include <stdio.h>

int main()
{
    int var[5];
    int count = 5;
    int sum = 0;
    float avg = 0.0;

    int i;

    for (i = 0; i < count; ++i)
    {
        printf("enter number %d > ", i + 1);
        scanf("%d", &var[i]);
        sum += var[i];
    }
    avg = (float)sum / count;

    printf("the sum of the numbers you enterd is %d and average is %.2f", sum, avg);
    return 0;
}