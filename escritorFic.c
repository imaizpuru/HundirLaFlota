/*
 * escritorFic.c
 *
 *  Created on: 13/4/2019
 *      Author: ALUMNO
 */

#include <stdio.h>
#include <stdlib.h>
#include "meterBarco.h"
#include "interaccion.h"
#include "escritorFic.h"
#include <string.h>

void escribirAFichero(char * nom1, char * nom2, char * nomPartida, Barco * barcos1, Barco * barcos2)
{
	char letraCom=' ';
	char letraFin=' ';
	int tamanyo=0;
	int numCom=0;
	int numFin=0;


	char * nomFichero = malloc(8*sizeof(char));
	nomFichero= "HLF.txt";

	FILE * fic;
	fic=fopen(nomFichero, "w");

	fprintf(fic, "%s\n", nomPartida);
	fprintf(fic, "%s\n", nom1);
	fprintf(fic, "%s\n", nom2);

	for(int i=0; i<5; i++)
	{
		letraCom = (barcos1+i)->letraCom;
		letraFin = (barcos1+i)->letraFin;
		tamanyo = (barcos1+i)->tamanyo;
		numCom = (barcos1+i)->numCom;
		numFin = (barcos1+i)->numFin;

		fprintf(fic, "%c\n", letraCom);
		fprintf(fic, "%c\n", letraFin);
		fprintf(fic, "%i\n", tamanyo);
		fprintf(fic, "%i\n", numCom);
		fprintf(fic, "%i\n", numFin);
	}

	for(int i=0; i<5; i++)
	{
		letraCom = (barcos2+i)->letraCom;
		letraFin = (barcos2+i)->letraFin;
		tamanyo = (barcos2+i)->tamanyo;
		numCom = (barcos2+i)->numCom;
		numFin = (barcos2+i)->numFin;

		fprintf(fic, "%c\n", letraCom);
		fprintf(fic, "%c\n", letraFin);
		fprintf(fic, "%i\n", tamanyo);
		fprintf(fic, "%i\n", numCom);
		fprintf(fic, "%i\n", numFin);
	}

	fclose(fic);
}
