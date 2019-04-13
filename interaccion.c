/*
 * interaccion.c
 *
 *  Created on: 9/4/2019
 *      Author: ALUMNO
 */

#include <stdio.h>
#include "interaccion.h"
#include <stdbool.h>

void pedirNombres()
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
void pedirBarcos(char *n,char *n1)
{
	Barco * b;
	Barco * a;
	b= malloc(3*sizeof(Barco));

	printf("%s, empezaremos con tus barcos.\n", n);
	mapa();
	*b=meterBarco(3);
	mapaConBarcos(b, 1);
	*(b+1)=meterBarco(4);
	mapaConBarcos(b, 2);
	*(b+2)=meterBarco(5);
	printf("Trabajo hecho! Tu mapa se queda as�.\n");
	mapaConBarcos(b, 3);

	/*printf("Ahora vamos con tus barcos, %s.", n1);
	mapa();
	*a=meterBarco(3);
	mapaConBarcos(b, 1);
	*(a+1)=meterBarco(4);
	mapaConBarcos(b, 2);
	*(a+2)=meterBarco(5);
	printf("Trabajo hecho! Tu mapa se queda as�.");
	mapaConBarcos(a, 3);*/
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
