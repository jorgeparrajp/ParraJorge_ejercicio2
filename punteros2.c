#include <stdio.h>

int main () {
int vec [5] = {2, 4, 6, 8, 10} ;
int *puntero;

puntero = &vec [0];




    for ( int i=0 ; i < 5 ; i ++) {

    printf (" %d ", vec[i]  );
    printf("%d\n", *(puntero + i ));
    

}

 return 0 ;


}
