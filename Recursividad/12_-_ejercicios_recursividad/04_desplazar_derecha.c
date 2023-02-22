#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Completar la función desplazar_derecha de forma tal que todos los
  caracteres del string queden una posición a la derecha, preservando
  el primer caracter. Por ejemplo para "ABCDE" el resultado debería
  ser "AABCD".

  NO está permitido utilizar for/while/do/strlen/memcpy/memmove/strdup/sarasa

  Está permitido utilizar una función auxiliar o un parámetro extra.

  Puntos extra si no utiliza ninguna función o parámetro extra.

*/

char desplazar_derecha(char* s){
}

int main(){

  char* texto = "ABCDE";
  char* s = strdup(texto);

  desplazar_derecha(s);

  printf("%s -> %s\n", texto, s);

  free(s);

  return 0;
}
