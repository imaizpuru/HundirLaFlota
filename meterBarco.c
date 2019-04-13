/*
 * meterBarco.c
 *
 *  Created on: 8/4/2019
 *      Author: ALUMNO
 */
#include <stdio.h>
#include <stdlib.h>
#include "meterBarco.h"

Barco * meterBarco(int tamanyo)
{
	char vert=' ';
	char col=' ';
	int numIni=0;
	bool existeCol=false;
	bool existeNum=false;
	printf("Vas a introducir el barco de tamaño %i.\n", tamanyo);
	while(vert!='v'||vert!='V'||vert!='h'||vert!='H')
	{
		printf("¿Quieres que sea vertical u horizontal? (v/h)");
		scanf("%c",&vert);
	}

	if(vert=='v'||vert=='V')
	{
		do
		{
			printf("Seleccione la columna: A-J");
			scanf("%c",&col);
			existeCol=existeColumna(col);
			if(!existeCol) printf("Cuidado, ¡esa columna no existe!");
		}while(!existeCol);

		do
		{
			printf("Seleccione el primer numero:");
			scanf("%i",&numIni);
			existeNum=existeNumero(numIni, 11-tamanyo);
			if(!existeNum) printf("Cuidado, ¡el barco excede por debajo!\n");
		}while(!existeNum);

		Barco * retorno;
		retorno = (Barco *) malloc(sizeof(Barco));
		retorno->letraCom=col;
		retorno->letraFin=col;
		retorno->numCom=numIni;
		retorno->numFin=numIni+tamanyo-1;
		retorno->tamanyo=tamanyo;
		return retorno;
	}

	if(vert=='h'||vert=='H')
	{
		do
		{
			printf("Seleccione la fila: 1-10");
			scanf("%i",&numIni);
			existeNum=existeFila(numIni);
			if(!existeNum) printf("Cuidado, ¡esa fila no existe!\n");
		}while(!existeNum);

		do
		{
			printf("Seleccione la primera letra: ");
			scanf("%c",&col);
			existeCol=existeLetra(tamanyo, col);
			if(!existeCol) printf("Cuidado, ¡el barco excede por la derecha!");
		}while(!existeCol);

		Barco * retorno;
		retorno = (Barco *) malloc(sizeof(Barco));
		retorno->letraCom=col;
		retorno->letraFin=calculaLetraFinal(col, tamanyo);
		retorno->numCom=numIni;
		retorno->numFin=numIni;
		retorno->tamanyo=tamanyo;
		return retorno;
	}
}

bool existeColumna(char col)
{
	if(col=='a'||col=='A'||col=='b'||col=='B'||col=='c'||col=='C'||col=='d'||col=='D'||col=='e'||col=='E') return true;
	if(col=='f'||col=='F'||col=='g'||col=='G'||col=='h'||col=='H'||col=='i'||col=='I'||col=='j'||col=='J') return true;
	return false;
}

bool existeNumero(int num, int limite)
{
	if(num<=limite) return true;
	return false;
}

bool existeFila(int fila)
{
	if(fila<=10) return true;
	return false;
}

bool existeLetra(int tamanyo, char letra)
{
	if(letra=='a'||letra=='A'||letra=='b'||letra=='B'||letra=='c'||letra=='C'||letra=='d'||letra=='D'||letra=='e'||letra=='E'||letra=='f'||letra=='F') return true;
	else if(tamanyo<=4) if(letra=='g'||letra=='G') return true;
	else if(tamanyo<=3) if(letra=='h'||letra=='H') return true;
	else if(tamanyo==2) if(letra=='i'||letra=='I') return true;
	return false;

}

char calculaLetraFinal(char letraIni, int tamanyo)
{
	char retorno=' ';
	retorno= letraIni+tamanyo;
	return retorno;
}
