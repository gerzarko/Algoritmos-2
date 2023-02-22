#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Completar la función desplazar_izquierda de forma tal que todos los
  caracteres del string queden una posición a la izquierda. Por
  ejemplo para "ABCD" el resultado debería ser "BCD".

  NO está permitido utilizar for/while/do/strlen/memcpy/memmove/strdup/sarasa

  Está permitido utilizar una función auxiliar o un parámetro extra.

  Puntos extra si no utiliza ninguna función o parámetro extra.
*/

char desplazar_izquierda(char* s){
}

int main(){

  char* texto = "ABCD";
  char* s = strdup(texto);

  desplazar_izquierda(s);

  printf("%s -> %s\n", texto, s);

  free(s);

  return 0;
}
