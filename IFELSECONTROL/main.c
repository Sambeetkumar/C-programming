// a program to determine a number is odd or even

#include <math.h>

 int main()
{
  int number_to_test  , remainder;
  printf ("enter the number to be tested :");

  scanf ("%d",&number_to_test);
  remainder = number_to_test % 2;
  if ( remainder == 0)
    printf("the number is even\n");
 else
    printf("the number is odd\n");
 return 0;
}
