// program to find out the average of grades
#include <stdio.h>
int main()
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float avg  = 0;
        printf("enter the values of the grades\n");


        //entering values into the array
        int i;
        for ( i=0; i<count; ++i)
        {
            printf("%2d > ",i+1);

            scanf("%d",&grades[i]);

            sum+= grades[i];

        }
      avg = (float)sum/count;
      printf ("\n the average of the grades you entered is %.2f",avg);
      return 0;
}

