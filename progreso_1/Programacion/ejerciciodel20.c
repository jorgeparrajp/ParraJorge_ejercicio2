#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () { 
    int JP[500];  


    srand(time(NULL));

    for ( int i = 0; i < 500; i++) {
        JP[i]=rand()%100;
        printf ("%d\n", JP[i]);
        /* code here */ 
    }









return 0;
}
