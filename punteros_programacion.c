#include <stdio.h>

int main (){
 int num, a ;
 int *x ; //puntero 
num =  150 ; 


 x = &num ; //almacena la direcion de memoria de num 
 a = *x ; //esto muestra el contenido de la ireccion de memoria 

 printf ("%d %d %p\n", num, a, x ); 



 float pi = 3.1416, decimal;

 float *ptrF; //definicion de puntero

 ptrF = &pi ;

 decimal = *ptrF ;


 printf ("%.3f %.3f %p", pi , decimal , ptrF);





return 0; 

}