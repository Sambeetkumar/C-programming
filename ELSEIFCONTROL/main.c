//a program to implement sign function
#include <stdio.h>

int main ()
{
    int number,sign;

    printf ("please type in a number :");
    scanf ("%d",&number);

    if (number > 0)
        sign = +1;
        else if (number == 0)
        sign = 0;
        else
            sign = -1;
        printf ("sign = %d\n",sign);
        return 0;
}
