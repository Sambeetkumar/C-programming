#include  <stdio.h>

int main ()
{
    float price;

    printf ( " enter the price of the item in rupees : " );

    scanf ("%f",&price);

    int PRICE = price*100.00 ;

    printf ( " the price of the item in paise is : %d ", PRICE);

    return 0;
}

