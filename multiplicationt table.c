#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j; //i = columns -- j = lines


    for (i=0;i<10;i++) {

        for (j=0;j<10;j++){
            printf("%d x %d = %d\t",j,i,i*j);

        }
        printf("\n");

    }


    return 0;
}
