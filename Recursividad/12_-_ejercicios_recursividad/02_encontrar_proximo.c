#include <stdio.h>

/*
  Completar la función encontrar_proximo de forma tal que devuelva la
  primer posición dentro del string s que contenga el caracter c. Si
  dicho caracter no existe en el string se deberá devolver -1.

  NO está permitido utilizar for/while/do/strlen/memcpy/memmove/strdup/sarasa

  NO está permitido agregar mas funciones ni cambiar parámetros o tipos de retorno.

  Puntos extra si se reescribe imprimir_todas_las_posiciones de forma
  recursiva. Puede usar un parámetro extra de tipo int.
*/

int encontrar_proximo(const char* s, char c){
  if(!s){
    return -1;
  }
  
  if(*s== c){
    return s[0];
  }

  return encontrar_proximo(s+1, c);
}

void imprimir_todas_las_posiciones(const char* s, char c){
  int pos=0, i=0;
  while((pos=encontrar_proximo(s+i, c))>=0){
    i+=pos;
    printf("Encontrada una '%c' en la posición: %i\n", c, i);
    i++;
  }
}

int main(){

  char* texto = "paralelepipedo";

  printf("Palabra: %s\n", texto);
  printf("La posición de la primer 'p' es: %i.\n", encontrar_proximo(texto, 'p'));
  printf("La posición de la primer 'a' es: %i.\n", encontrar_proximo(texto, 'a'));
  printf("La posición de la primer 'w' es: %i.\n", encontrar_proximo(texto, 'w'));
  //imprimir_todas_las_posiciones_r(texto, 'e', 0);
  return 0;
}
