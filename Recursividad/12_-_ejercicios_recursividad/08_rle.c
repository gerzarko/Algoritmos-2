#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Completar la función rle para que devuelva un nuevo char* (reservado
  con malloc/calloc/realloc) que contenga una codificación RLE del
  string dado. La codificación RLE consiste en contar la cantidad de
  veces que se repite un mismo elemento y almacenarlo como
  <n>+<elemento>.

  Los siguientes son ejemplos de strings con su respectiva
  codififación RLE:

                "A" -> "1A"
               "AA" -> "2A"
              "AAA" -> "3A"
           "AABCCC" -> "2A1B3C"
  "ABBBBDDEEAAAADD" -> "1A4B2D2E4A2D"

  Por motivos de legibilidad, vamos a suponer que la cantidad de veces
  que se repite un elemento nunca va a ser mayor a 9 y que almacenamos
  los numeros con su codigo ASCII (en vez de almacenar 1, almacenamos
  '1', etc, de tal forma que pueda mostrarse por pantalla facilmente
  con un printf el string codificado completo)

  NO está permitido utilizar for/while/do/strlen/memcpy/memmove/strdup/sarasa

  Está permitido utilizar una función auxiliar o un parámetro extra.

  Puntos extra si no utiliza realloc.

*/

char* rle(const char* s){
}

int main(){

  char* texto = "ABBBBDDEEAAAADD";

  char* r = rle(texto);

  printf("%s -> %s\n", texto, r);

  free(r);

  return 0;
}
