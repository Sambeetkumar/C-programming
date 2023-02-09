//a program to find out the largest among three numbers

#include <stdio.h>

int main ()
{
    float A,B,C;

    printf ("enter three values :\n");
    scanf ("%f %f %f",&A,&B,&C);
    printf  ("the largest number is :");

    if (A>B)
    {
        if (A>C)
           printf ("%.2f\n",A);
           else
            printf ("%.2f\n",C);
    }
     else
     {
         if(B>C)
            printf ("%.2f\n",B);
         else
            printf ("%.2f\n",C);
     }
     return 0;
}
