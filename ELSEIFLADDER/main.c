//a program to find out the charges for electricity consumption
#include <stdio.h>
#include <math.h>

int main()
{
    int custnum,units;
    float charges;

    printf ("Enter the CUSTOMER NO. and UNITS consumed\n");
    scanf ("%d %d",&custnum,&units);

    if(units <= 200)
        charges = 0.5*units;
    else if(units <= 400)
        charges = 100 + 0.65*(units-200);
    else if(units <= 600)
        charges = 230 + 0.8*(units-400);
    else
        charges = 390*(units-600);

    printf ("\n\n CUSTOMER NO : %d \n CHARGES : %.2f\n",custnum,charges);

}

