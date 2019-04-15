/*
 * meterBarco.c
 *
 *  Created on: 8/4/2019
 *      Author: ALUMNO
 */
#include <stdio.h>
#include <stdlib.h>
#include "meterBarco.h"
#include "interaccion.h"

Barco meterBarco(int tamanyo, Barco * barcosAnteriores, int num)
{
	char vert=' ';
	char col=' ';
	int numIni=0;
	bool existeCol=false;
	bool existeNum=false;
	bool yaHayBarco=false;
	int posX=-1;
	int posY=-1;

	printf("Vas a introducir el barco de %i posiciones.\n", tamanyo);
	while((vert!='v')&&(vert!='V')&&(vert!='h')&&(vert!='H'))
	{
		fflush(stdin);
		printf("¿Quieres que sea vertical u horizontal? (v/h)\n");
		scanf("%c",&vert);

	}


	if(vert=='v'||vert=='V')
	{
		do{
			yaHayBarco=false;
			posX=-1;
			posY=-1;
			do
			{
				printf("Seleccione la columna: A-J\n");
				fflush(stdin);
				scanf("%c",&col);
				col=uppercase(col);
				posY=numerizarLetra(col);
				existeCol=existeColumna(col);
				if(!existeCol) printf("Cuidado, ¡esa columna no existe!\n");
			}while(!existeCol);

			do
			{
				printf("Seleccione el primer numero:");
				fflush(stdin);
				scanf("%i",&numIni);
				existeNum=existeNumero(numIni, 11-tamanyo);
				posX=numIni;
				if(!existeNum) printf("Cuidado, ¡el barco excede por debajo!\n");
			}while(!existeNum);

			for(int i=0; i<tamanyo; i++)
			{
				yaHayBarco=hayBarcos(barcosAnteriores, num, posX+i, posY);
				if(yaHayBarco)
				{
					printf("Parece que ya hay un barco en esa posicion. Intenta meter el barco de nuevo.");
					break;
				}
			}

		}while(yaHayBarco);
		Barco retorno;
		//retorno =  malloc(sizeof(Barco));
		retorno.letraCom=uppercase(col);
		retorno.letraFin=uppercase(col);
		retorno.numCom=numIni;
		retorno.numFin=numIni+tamanyo-1;
		retorno.tamanyo=tamanyo;
		return retorno;
	}

	if(vert=='h'||vert=='H')
	{
		do{
			yaHayBarco=false;
			posX=-1;
			posY=-1;
			do
			{
				printf("Seleccione la fila: 1-10\n");
				fflush(stdin);
				scanf("%i",&numIni);
				existeNum=existeFila(numIni);
				posX=numIni;
				if(!existeNum) printf("Cuidado, ¡esa fila no existe!\n");
			}while(!existeNum);

			do
			{
				printf("Seleccione la primera letra:\n");
				fflush(stdin);
				scanf("%c",&col);
				col=uppercase(col);
				existeCol=existeLetra(tamanyo, col);
				posY=numerizarLetra(col);
				if(!existeCol) printf("Cuidado, ¡el barco excede por la derecha!\n");
			}while(!existeCol);

			for(int i=0; i<tamanyo; i++)
			{
				yaHayBarco=hayBarcos(barcosAnteriores, num, posX, posY+i);
				if(yaHayBarco)
				{
					printf("Parece que ya hay un barco en esa posicion. Intenta meter el barco de nuevo.");
					break;
				}
			}

		}while(yaHayBarco);
		Barco retorno;
		//retorno = (Barco *) malloc(sizeof(Barco));
		retorno.letraCom=uppercase(col);
		retorno.letraFin=calculaLetraFinal(uppercase(col), tamanyo);
		retorno.numCom=numIni;
		retorno.numFin=numIni;
		retorno.tamanyo=tamanyo;
		return retorno;
	}
}

char uppercase(char a)
{
	if(a=='a') return 'A';
	if(a=='b') return 'B';
	if(a=='c') return 'C';
	if(a=='d') return 'D';
	if(a=='e') return 'E';
	if(a=='f') return 'F';
	if(a=='g') return 'G';
	if(a=='h') return 'H';
	if(a=='i') return 'I';
	if(a=='j') return 'J';
	else return a;
}
bool existeColumna(char col)
{
	if(col=='a'||col=='A'||col=='b'||col=='B'||col=='c'||col=='C'||col=='d'||col=='D'||col=='e'||col=='E') return true;
	if(col=='f'||col=='F'||col=='g'||col=='G'||col=='h'||col=='H'||col=='i'||col=='I'||col=='j'||col=='J') return true;
	return false;
}

bool existeNumero(int num, int limite)
{
	if((num<=limite)&&(num>0)) return true;
	return false;
}

bool existeFila(int fila)
{
	if((fila<=10)&&(fila>0)) return true;
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
	retorno= letraIni+tamanyo-1;
	return retorno;
}
