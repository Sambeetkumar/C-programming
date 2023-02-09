//use of scanf function

#include  <stdio.h>
int main()
{
    char str[100];
    int i;

    printf("enter a value");

    scanf("%d %s",&i,str);

    printf("you entered %d:::%s",i,str);
    return 0;
}
