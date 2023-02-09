# include <stdio.h>

void multiplyTwoNumbers (int x, int y)
{
    int result = x*y ;
    printf ("the product of %d multiplied by %d is %d \n",x, y, result);
}

int main()
{

    multiplyTwoNumbers(10,20);
    multiplyTwoNumbers(15,5);
    multiplyTwoNumbers(30,30);

    return 0;
}
