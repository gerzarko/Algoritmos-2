#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Completar la función rotar_izquierda, de forma tal que todos los
  caracteres del string se desplacen hacia la izquierda y el primer
  caracter termine en la última posición. Por ejemplo, para el string
  "ABCDE" debería obtenerse "BCDEA".

  NO está permitido utilizar for/while/do/strlen/memcpy/memmove/strdup/sarasa

  Está permitido utilizar una función auxiliar o un parámetro extra.

  Puntos extra si no utiliza ninguna función o parámetro extra.

*/

char rotar_izquierda(char* s){
}

int main(){

  char* texto = "ABCDE";
  char* s = strdup(texto);

  rotar_izquierda(s);

  printf("%s -> %s\n", texto, s);

  free(s);

  return 0;
}
