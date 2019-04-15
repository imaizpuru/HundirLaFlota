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
	Barco * barcos1;
	Barco * barcos2;

	int dificultad=0;
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

	do{
	printf("¿Como deseais que sea la partida?\n");
	printf("1. Corta(5 barcos).\n2. Mediana(7 barcos).\n3. Larga(9 barcos).\n");
	fflush(stdin);
	scanf("%i", &dificultad);

	if(dificultad!=1&&dificultad!=2&&dificultad!=3) printf("Introduce un numero entre 1 y 3.\n");
	}while(dificultad!=1&&dificultad!=2&&dificultad!=3);
	printf("Muchas gracias!\nAhora empecemos a jugar!");

	switch(dificultad)
	{
	case 1:


		barcos1 = malloc(5*sizeof(Barco));
		barcos2 = malloc(5*sizeof(Barco));
		pedirBarcos(nombre1, nombre2, barcos1, barcos2);

		escribirAFichero(nombre1, nombre2, nombrep, barcos1, barcos2, dificultad);
		printf("Se ha creado un fichero, con el nombre HLFtxt.", nombrep);

		break;
	case 2:

		barcos1 = malloc(7*sizeof(Barco));
		barcos2 = malloc(7*sizeof(Barco));
		pedirBarcos2(nombre1, nombre2, barcos1, barcos2);

		escribirAFichero(nombre1, nombre2, nombrep, barcos1, barcos2, dificultad);
		printf("Se ha creado un fichero, con el nombre HLFtxt.", nombrep);

		break;
	case 3:

		barcos1 = malloc(9*sizeof(Barco));
		barcos2 = malloc(9*sizeof(Barco));
		pedirBarcos3(nombre1, nombre2, barcos1, barcos2);

		escribirAFichero(nombre1, nombre2, nombrep, barcos1, barcos2, dificultad);
		printf("Se ha creado un fichero, con el nombre HLFtxt.", nombrep);
		break;
	}



	return 0;
}

