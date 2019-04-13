/*
 * main.c
 *
 *  Created on: 9/4/2019
 *      Author: ALUMNO
 */

#include <stdio.h>
#include "meterBarco.h"
#include "interaccion.h"
#include "escritorFic.h"
#include <string.h>

int main(void)
{
	char* nombre1="";
	nombre1=malloc(30);
	char* nombre2="";
	nombre2=malloc(30);
	char* nombrep="";
	nombrep=malloc(50);

	printf("Bienvenidos al juego de hundir la flota.\n");
	printf("Para jugar necesitareis ser dos personas.\n\n");

	printf("Introduzca el nombre del primer jugador:\n");
	fflush(stdin);
	scanf("%s", nombre1);

	printf("Introduzca el nombre del segundo jugador:\n");
	fflush(stdin);
	scanf("%s", nombre2);

	printf("Bien %s y %s!\n", nombre1,nombre2);

	printf("Ahora, debeis poner un nombre a vuestra partida:\n");
	fflush(stdin);
	scanf("%s", nombrep);

	printf("Muchas gracias!\nAhora empecemos a jugar!");

	Barco * barcos1;
	barcos1 = malloc(5*sizeof(Barco));
	Barco * barcos2;
	barcos2 = malloc(5*sizeof(Barco));
	pedirBarcos(nombre1, nombre2, barcos1, barcos2);

	escribirAFichero(nombre1, nombre2, nombrep, barcos1, barcos2);
	printf("Se ha creado un fichero, con el nombre HLFtxt.", nombrep);


	return 0;
}

