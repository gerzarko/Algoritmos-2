#include "playa_privada.h"
#include <stdio.h>

int main(){

	playa_t* playa = playa_crear();

	vacacionista_t vaca_1 = { .nombre = "Nicolas Wasouski", .dni = 123456};
	vacacionista_t vaca_2 = { .nombre = "Puchi", .dni = 123956};
	vacacionista_t vaca_3 = { .nombre = "Dios", .dni = 124456};
	vacacionista_t vaca_4 = { .nombre = "Julia", .dni = 124956};
	vacacionista_t vaca_5 = { .nombre = "Lucia", .dni = 125456};

	playa_alquilar_carpa(playa, vaca_1);
	playa_alquilar_carpa(playa, vaca_2);
	playa_alquilar_carpa(playa, vaca_3);
	playa_alquilar_carpa(playa, vaca_4);
	playa_alquilar_carpa(playa, vaca_5);
	playa_mostrar(playa);
	return 0;
}