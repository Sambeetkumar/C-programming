// C program for decimal to binary
// conversion using recursion
#include <stdio.h>

// Decimal to binary conversion
// using recursion
int find(int num)
{
    if (num == 0)
        return 0;
    else
        return (num % 2 + 10 * find(num / 2));
}

// Driver code
int main()
{
    int num;
    printf("\nEnter decimal number : ");
    scanf("%d", &num);
    printf("%d", find(num));
    return 0;
}
