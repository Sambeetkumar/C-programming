//program to find out area of a rectangle

#include <stdio.h>

int main()
{
    double width,length;
    width = 76.67;
    length = 54.88;

    double perimeter = 2.0*(width+length);
    double area = width*length;

    printf ("width is : %.2f, \n length is : %.2f, \n perimeter is : %.3f,\n area is : %.3f \n",width,length,perimeter,area);


    return 0;

}
