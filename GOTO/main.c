#include<stdio.h>

void main()
{
    int x;
    top : scanf("%d",&x);

    if (x != 7)
        goto top;
        else
            printf ("you entered 7");
        return 0;
}
