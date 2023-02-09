// a program to find the largest among any three integers


#include <stdio.h>

int main ()
{
   int a,b,c;
   printf ("enter the values \n"); //value of three integers

   scanf ( "%d %d %d", &a , &b , &c );

   int large = a<c ? (b>c ? b:c) : (a<b ? b:a);

   printf (" the largest integer is %d",large);
}
