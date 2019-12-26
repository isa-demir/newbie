#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dice[6];
    int i,a;
    a = 1;

    while (a>0){ //For forever loop.

    srand(time(NULL)); //For create new random numbers

    for (i=0;i<6;i++){
        dice[i] = 1 + rand()%6;

    }
    printf("\nPlease write a random number and press enter for dice roll :\n");
    printf("When you enter minus(-) number, you'll see one dice roll and program will stop.\n");
    scanf("%d",&a);

    for(i=0;i<2;i++){
        printf("%d. dice --> %d\n",i+1,dice[i]);
        }
    }


    return 0;
}
