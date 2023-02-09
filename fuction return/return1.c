#include <stdio.h>
void printline (void);
int mul (int x, int y);

int main()
{
    int p = mul(10,5);
    printline();
    printf ("the multiplication of 10 and 5 is %d \n",p);
    printline();
    return 0;
}
    void printline (void)
{
    int i;
    for (i =0; i <= 40; ++i)
        printf ("-");
        printf ("\n");
}
    int mul (int x, int y)
{
    int result;
    result = x*y;
    return (result);
}
