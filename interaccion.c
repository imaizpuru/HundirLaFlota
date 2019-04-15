/*
 * interaccion.c
 *
 *  Created on: 9/4/2019
 *      Author: ALUMNO
 */

#include <stdio.h>
#include "interaccion.h"
#include <stdbool.h>
# include <stdlib.h>


void pedirBarcos(char * n,char * n1, Barco * b1, Barco * b2)
{
	printf("%s, empezaremos con tus barcos.\n", n);
	mapa();
	*b1=meterBarco(2, b1, 0);
	mapaConBarcos(b1, 1);
	*(b1+1)=meterBarco(2, b1, 1);
	mapaConBarcos(b1, 2);
	*(b1+2)=meterBarco(3, b1, 2);
	mapaConBarcos(b1, 3);
	*(b1+3)=meterBarco(4, b1 ,3);
	mapaConBarcos(b1, 4);
	*(b1+4)=meterBarco(5, b1, 4);
	printf("Trabajo hecho! Tu mapa se queda asi.\n");
	mapaConBarcos(b1, 5);

	printf("Ahora vamos con tus barcos, %s.\n", n1);
	mapa();
	*b2=meterBarco(2, b2, 0);
	mapaConBarcos(b2, 1);
	*(b2+1)=meterBarco(2, b2, 1);
	mapaConBarcos(b2, 2);
	*(b2+2)=meterBarco(3, b2, 2);
	mapaConBarcos(b2, 3);
	*(b2+3)=meterBarco(4, b2, 3);
	mapaConBarcos(b2, 4);
	*(b2+4)=meterBarco(5, b2, 4);
	printf("Trabajo hecho! Tu mapa se queda asi.\n");
	mapaConBarcos(b2, 5);
}
void pedirBarcos2(char * n,char * n1, Barco * b1, Barco * b2)
{
	printf("%s, empezaremos con tus barcos.\n", n);
	mapa();
	*b1=meterBarco(2, b1, 0);
	mapaConBarcos(b1, 1);
	*(b1+1)=meterBarco(2, b1, 1);
	mapaConBarcos(b1, 2);
	*(b1+2)=meterBarco(2, b1, 2);
	mapaConBarcos(b1, 3);
	*(b1+3)=meterBarco(3, b1 ,3);
	mapaConBarcos(b1, 4);
	*(b1+4)=meterBarco(3, b1, 4);
	mapaConBarcos(b1, 5);
	*(b1+5)=meterBarco(4, b1, 5);
	mapaConBarcos(b1, 6);
	*(b1+6)=meterBarco(5, b1, 6);
	printf("Trabajo hecho! Tu mapa se queda asi.\n");
	mapaConBarcos(b1, 7);

	printf("Ahora vamos con tus barcos, %s.\n", n1);
	mapa();
	*b2=meterBarco(2, b2, 0);
	mapaConBarcos(b2, 1);
	*(b2+1)=meterBarco(2, b2, 1);
	mapaConBarcos(b2, 2);
	*(b2+2)=meterBarco(2, b2, 2);
	mapaConBarcos(b2, 3);
	*(b2+3)=meterBarco(3, b2 ,3);
	mapaConBarcos(b2, 4);
	*(b2+4)=meterBarco(3, b2, 4);
	mapaConBarcos(b2, 5);
	*(b2+5)=meterBarco(4, b2, 5);
	mapaConBarcos(b2, 6);
	*(b2+6)=meterBarco(5, b2, 6);
	printf("Trabajo hecho! Tu mapa se queda asi.\n");
	mapaConBarcos(b2, 7);
}
void pedirBarcos3(char * n,char * n1, Barco * b1, Barco * b2)
{
	printf("%s, empezaremos con tus barcos.\n", n);
	mapa();
	*b1=meterBarco(2, b1, 0);
	mapaConBarcos(b1, 1);
	*(b1+1)=meterBarco(2, b1, 1);
	mapaConBarcos(b1, 2);
	*(b1+2)=meterBarco(2, b1, 2);
	mapaConBarcos(b1, 3);
	*(b1+3)=meterBarco(2, b1 ,3);
	mapaConBarcos(b1, 4);
	*(b1+4)=meterBarco(3, b1, 4);
	mapaConBarcos(b1, 5);
	*(b1+5)=meterBarco(3, b1, 5);
	mapaConBarcos(b1, 6);
	*(b1+6)=meterBarco(4, b1, 6);
	mapaConBarcos(b1, 7);
	*(b1+7)=meterBarco(4, b1, 7);
	mapaConBarcos(b1, 8);
	*(b1+8)=meterBarco(5, b1, 8);

	printf("Trabajo hecho! Tu mapa se queda asi.\n");
	mapaConBarcos(b1, 9);

	printf("Ahora vamos con tus barcos, %s.\n", n1);
	mapa();
	*b2=meterBarco(2, b2, 0);
	mapaConBarcos(b2, 1);
	*(b2+1)=meterBarco(2, b2, 1);
	mapaConBarcos(b2, 2);
	*(b2+2)=meterBarco(2, b2, 2);
	mapaConBarcos(b2, 3);
	*(b2+3)=meterBarco(2, b2 ,3);
	mapaConBarcos(b2, 4);
	*(b2+4)=meterBarco(3, b2, 4);
	mapaConBarcos(b2, 5);
	*(b2+5)=meterBarco(3, b2, 5);
	mapaConBarcos(b2, 6);
	*(b2+6)=meterBarco(4, b2, 6);
	mapaConBarcos(b2, 7);
	*(b2+7)=meterBarco(4, b2, 7);
	mapaConBarcos(b2, 8);
	*(b2+8)=meterBarco(5, b2, 8);

	printf("Trabajo hecho! Tu mapa se queda asi.\n");
	mapaConBarcos(b2, 9);
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
	if(fila<=numFin&&fila>=numCom&&col<=letraFinNumerizado&&col>=letraComNumerizado)return true;
	//if(((fila>=numCom)&&(fila<=numFin)&&(col==letraComNumerizado))||((col>=letraComNumerizado)&&(col<=letraFinNumerizado)&&(fila==numCom))) return true;
	return false;
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
	return 0;
}
