/*
 * interaccion.c
 *
 *  Created on: 9/4/2019
 *      Author: ALUMNO
 */

#include <stdio.h>
#include "interaccion.h"

void pedirNombresYBarcos()
{
	char* nombre1=NULL;
	char* nombre2=NULL;
	char* nombrep=NULL;

	printf("Bienvenido al juego de hundir la flota.\n");
	printf("Para jugar necesitaréis ser dos personas.\n\n");

	printf("Nombre del primer jugador:\n");
	scanf("%s", nombre1);

	printf("Nombre del segundo jugador:\n");
	scanf("%s", nombre2);

	printf("Bien %s y %s!\n", nombre1,nombre2);

	printf("Ahora, debéis poner un nombre a vuestra partida:\n");
	scanf("%s", nombrep);

	printf("Muchas gracias!\nAhora empezemos a jugar!");
	scanf("%s", nombrep);



}
void mapa()
{
	printf("    A   B   C   D   E   F   G   H   I   J\n");
	for(int e=0;e<10;e++)
	{
		for(int i=0;i<43;i++)
		{
			printf("-");
		}
		printf("\n");
		if(e==9)
		{
			printf("%d", e+1);
		}
		else
		{
			printf(" %d", e+1);

		}
		printf("|");
		for(int i=0;i<40;i++)
		{
			if((i==3)||(i==7)||(i==11)||(i==15)||(i==19)||(i==23)||(i==27)||(i==31)||(i==35)||(i==39))
			{
				printf("|");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
