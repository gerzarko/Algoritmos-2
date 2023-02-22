#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Completar la función rotar_derecha, de forma tal que todos los
  caracteres del string se desplacen hacia la derecha y el ultimo
  caracter termine en la primer posición. Por ejemplo, para el string
  "ABCDE" debería obtenerse "EABCD".

  NO está permitido utilizar for/while/do/strlen/memcpy/memmove/strdup/sarasa

  Está permitido utilizar una función auxiliar o un parámetro extra.

  Puntos extra si no utiliza ninguna función o parámetro extra.

*/

char rotar_derecha(char* s){
}

int main(){

  char* texto = "ABCDE";
  char* s = strdup(texto);

  rotar_derecha(s);

  printf("%s -> %s\n", texto, s);

  free(s);

  return 0;
}
