#include <stdio.h>
int main () {
int JP;

printf ("Ingrese le tamaño del vector: \n");
scanf("%d", &JP);


int PJ[JP];

for (int i = 0 ; i < JP ; i++)  
{
printf("Ingrese el numero %d: ", i + 1);
scanf("%d", &PJ[i]);
}
printf ("Elementos del vector:\n");
for (int i = 0 ; i < JP ; i++){
    printf ("%d", PJ[i]);
    }
return 0;
}

