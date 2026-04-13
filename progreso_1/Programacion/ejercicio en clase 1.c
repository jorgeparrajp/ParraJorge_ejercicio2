#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    int Var[3];
 
    printf("Ingrese un numero");
    scanf("%d",&Var[0]);
    printf("Ingrese un numero");
    scanf("%d",&Var[1]);
    printf("Ingrese un numero");
    scanf("%d",&Var[2]);
    printf("%d, %d, %d", Var[0], Var[1], Var[2]);
    
    return 0;
}
    