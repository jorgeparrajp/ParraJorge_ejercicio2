#include <stdio.h>

int main (){
 int num, a ;
 int *x ; // puntero 
num =  150 ; 


 x = &num ; // almacena la direcion de memoria de num 

 printf ("%d %p", num, x );




return 0; 

}