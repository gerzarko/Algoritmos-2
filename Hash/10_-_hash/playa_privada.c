#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "playa_privada.h"

const int ERROR = -1;
const int EXITO = 0;

playa_t* playa_crear() {

	playa_t* playa = malloc(sizeof(playa_t));
	if (!playa) return NULL;

	playa->cant_carpas = 500;
	playa->cant_ocupadas = 0;

	return playa;
}

int nueva_posicion(carpa_t carpas[MAX_CARPAS], int tope, int posicion){
	posicion++;
	if (posicion >= tope) posicion = 0;

	while (carpas[posicion].ocupada){
		posicion++;
		if (posicion >= tope) posicion = 0;
	}

	return posicion;
}

int hash_dni(int dni, int tope){
	return dni%tope;
}

int playa_alquilar_carpa(playa_t* playa, vacacionista_t vacacionista) {

	if (!playa || playa->cant_carpas <= playa->cant_ocupadas){
		printf("A TU CAAAASAAA!!\n");
		return ERROR;	
	}

	int posicion = hash_dni(vacacionista.dni, playa->cant_carpas);
	printf("POSICION: %i\n", posicion);

	if (playa->carpas[posicion].ocupada){
		posicion = nueva_posicion(playa->carpas, playa->cant_carpas, posicion);
		printf("POSICION OCUPADA, NUEVA: %i\n", posicion);
	}
	playa->carpas[posicion].vacacionista = vacacionista;
	playa->carpas[posicion].ocupada = true;
	playa->cant_ocupadas++;

	return EXITO;
}

int playa_dejar_carpa(playa_t* playa, int dni){
	return 0;
}

void playa_destruir(playa_t* playa){
	free(playa);
}

void playa_mostrar(playa_t* playa){
	for (int i = 0; i < playa->cant_carpas; i++){
		playa->carpas[i].ocupada ? printf("|ô|") : printf("|^|");
		if ((i+1)%40 == 0) printf("\n");
	}
}

