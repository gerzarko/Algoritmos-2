#include <stdio.h>

/*

  Completar la función contar_pares de forma tal que devuelva la
  cantidad total de elementos pares del vector.

  NO está permitido utilizar for/while/do/strlen/memcpy/memmove/strdup/sarasa

  NO está permitido agregar mas funciones ni cambiar parámetros o tipos de retorno.

  Puntos extra si sale en 2 líneas o menos.
 */

int contar_pares(int* numeros, int total){
    if(*numeros %2 == 0){
        total--;
    }
    contar_pares(numeros, total);
    return total;
}

int main(){
  int numeros[] = {1, 7, 3, 2, 0, 12, 25, 15, 7, 10, 18, 9, 17, 28, 22, 98, 56, 53, 0};

  printf("El vector tiene %i elementos pares.\n", contar_pares(numeros, sizeof(numeros)/sizeof(int)));

  return 0;
}
