#ifndef __PLAYA_PRIVADA_H__
#define __PLAYA_PRIVADA_H__

#include <stdbool.h>

#define MAX_NOMBRE 100
#define MAX_CARPAS 1000

typedef struct vacacionista {
	int dni;
	char nombre[MAX_NOMBRE];
} vacacionista_t;

typedef struct carpa {
	vacacionista_t vacacionista;
	bool ocupada;
} carpa_t;

typedef struct playa {
	carpa_t carpas[MAX_CARPAS];
	int cant_carpas;
	int cant_ocupadas;
} playa_t;

/*
 * Crea una playa privada reservando la memoria para ellla y lo devuelve.
 */
playa_t* playa_crear();

/*
 * Le alquila una carpa a un vacacionista.
 * Devuelve 0 si pudo o -1 si no pudo.
 */
int playa_alquilar_carpa(playa_t* playa, vacacionista_t vacacionista);

/*
 * Libera una carpa porque el vacacionista se va.
 * Devuelve 0 si pudo o -1 si no pudo.
 */
int playa_dejar_carpa(playa_t* playa, int dni);

/*
 * Destruye la playa privada.
 */
void playa_destruir(playa_t* playa);

/*
 * Muestra las carpas ocupadas de la playa privada.
 */
void playa_mostrar(playa_t* playa);

#endif /*__PLAYA_PRIVADA_H__*/
