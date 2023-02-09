#include <stdio.h>

int main()
{
    int number=0 ;
    int *pnumber = NULL ;

    number = 10;
    printf ( "The value of number is %d \n",number ) ;
    printf ( " the address of number is %p \n\n",&number);

    pnumber = &number ;

    printf ( "the value of pnumber is %p\n",pnumber);
    printf ( "the address of pnumber is %p\n",(void*)&pnumber);
    printf ( "the value that pnumber is ponting to is %d\n",*pnumber);
    printf ( "the size of pnumber is %d bytes\n",sizeof(pnumber));

    return 0;
}
