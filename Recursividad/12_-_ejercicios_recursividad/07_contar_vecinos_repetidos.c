#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Completar la función contar_vecinos_repetidos de forma tal que
  cuente la cantidad de veces que un caracter del string es igual a su
  vecino inmediato. Por ejemplo:

                "A" -> 0 veces
               "AA" -> 1 vez
              "AAA" -> 2 veces
          "AAABCDE" -> 2 veces
           "AABBCC" -> 3 veces
            "ABCDE" -> 0 veces
  "ABBBBDDEEAAAADD" -> 9 veces

  NO está permitido utilizar for/while/do/strlen/memcpy/memmove/strdup/sarasa

  Puede usar una función auxiliar o un parámetro extra.

  Puntos extra si no se usan parámetros extra o funciones auxiliares y
  se hace en 2 líneas o menos.
*/


int contar_vecinos_repetidos(char* s){
}

int main(){

  char* texto = "ABBBBDDEEAAAADD";

  int n = contar_vecinos_repetidos(texto);

  printf("%s -> %i\n", texto, n);

  return 0;
}
