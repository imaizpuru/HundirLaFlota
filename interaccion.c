/*
 * interaccion.c
 *
 *  Created on: 9/4/2019
 *      Author: ALUMNO
 */

#include <stdio.h>
#include "interaccion.h"
#include <stdbool.h>

void pedirNombresYBarcos()
{
	char* nombre1=NULL;
	char* nombre2=NULL;
	char* nombrep=NULL;

	printf("Bienvenido al juego de hundir la flota.\n");
	printf("Para jugar necesitar�is ser dos personas.\n\n");

	printf("Nombre del primer jugador:\n");
	scanf("%s", nombre1);

	printf("Nombre del segundo jugador:\n");
	scanf("%s", nombre2);

	printf("Bien %s y %s!\n", nombre1,nombre2);

	printf("Ahora, deb�is poner un nombre a vuestra partida:\n");
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

void mapaConBarcos(Barco* barcos, int num)
{
	int col=0;
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
		for(int i=0;i<10;i++)
		{
			if(hayBarcos(barcos, num, e+1, col))
			{
				printf(" X |");
			}
			else
			{
				printf("   |");
			}
			col++;
		}
		col=0;
		printf("\n");
	}
}

bool hayBarcos(Barco * barcos, int num, int fila, int col)
{
	bool ret=false;
	for(int i=0; i<num; i++)
	{
		ret=hayBarco(*(barcos+i), fila, col);
		if(ret)break;
	}
	return ret;
}

bool hayBarco(Barco b, int fila, int col)
{
	int letraComNumerizado = numerizarLetra(b.letraCom);
	int letraFinNumerizado = numerizarLetra(b.letraFin);
	int numCom = b.numCom;
	int numFin =b.numFin;
	if(fila<=numFin&&fila>=numCom&&col<=letraFinNumerizado&&col>=letraComNumerizado) return true;
	else return false;
}

int numerizarLetra(char c)
{

	switch(c)
	{
	case 'A': return 0;
		break;
	case 'B': return 1;
			break;
	case 'C': return 2;
			break;
	case 'D': return 3;
			break;
	case 'E': return 4;
			break;
	case 'F': return 5;
			break;
	case 'G': return 6;
			break;
	case 'H': return 7;
			break;
	case 'I': return 8;
			break;
	case 'J': return 9;
			break;
	}

}
