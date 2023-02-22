#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR 1

typedef struct{
  char nombre[20];
  char numero[20];
} contacto_t;

typedef struct {
  contacto_t* contactos;
  int cantidad;
}agenda_t;

void agregar_contacto(agenda_t *agenda, char* nombre, char* numero){
  void* auxiliar = realloc(agenda->contactos, (agenda->cantidad+1)*sizeof(contacto_t));

  if(auxiliar == NULL)
    return;

  agenda->contactos = auxiliar;
    
  strcpy(agenda->contactos[agenda->cantidad].nombre, nombre);
  strcpy(agenda->contactos[agenda->cantidad].numero, numero);
  agenda->cantidad++;
}

void liberar_agenda(agenda_t agenda){
  free(agenda.contactos);
}

void mostrar_contacto(contacto_t contacto){
  printf("Nombre: %s\n", contacto.nombre);
}

void mostrar_contactos(agenda_t agenda){
  for(int i=0;i<agenda.cantidad;i++)
    mostrar_contacto(agenda.contactos[i]);
}

void eliminar_contacto(agenda_t *agenda, int posicion){
  if(agenda->cantidad == 0)
    return;

  int ultimo = agenda->cantidad-1;
  
  agenda->contactos[posicion] = agenda->contactos[ultimo];
  
  void* auxiliar = realloc(agenda->contactos, (agenda->cantidad-1)*sizeof(contacto_t));

  if(auxiliar == NULL)
    return;

  agenda->contactos = auxiliar;
  agenda->cantidad--;
}

int main(){
  agenda_t mi_agenda;

  mi_agenda.contactos = NULL;
  mi_agenda.cantidad = 0;

  agregar_contacto(&mi_agenda, "Lucas P.", "1233-1234");
  agregar_contacto(&mi_agenda, "Manu C.", "345341253");
  agregar_contacto(&mi_agenda, "Mariano M.", "1253-6454");
  agregar_contacto(&mi_agenda, "M. Mendez", "6456-1234");

  mostrar_contactos(mi_agenda);

  eliminar_contacto(&mi_agenda, 0);
  printf("\n----------------------------\n\n");

  mostrar_contactos(mi_agenda);

  liberar_agenda(mi_agenda);
}
