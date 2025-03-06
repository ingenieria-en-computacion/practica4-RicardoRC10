#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arreglo = NULL, num, cont;
    printf("%p \n", arreglo);
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    arreglo = (int*)calloc(num , sizeof(int)); //calloc recibe dos argumentos, el primero es la cantidad de elementos a reservar
    if(arreglo != NULL){
        printf("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){
            printf("\t%d %p", *(arreglo + cont), (arreglo + cont));            
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo);        
    }
    return 0;
}