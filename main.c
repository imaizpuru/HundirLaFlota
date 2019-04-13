/*
 * main.c
 *
 *  Created on: 9/4/2019
 *      Author: ALUMNO
 */

#include <stdio.h>
#include "meterBarco.h"

void main(void)
{
	int i;
	pedirBarcos("Ami", "Ima");
	mapa();
	scanf("%d", i);
	Barco * barcos;
	barcos= malloc(3*sizeof(Barco));
	Barco b;
	b.letraCom='A';
	b.letraFin='A';
	b.numCom=5;
	b.numFin=7;
	Barco b3;
	b3.letraCom='J';
	b3.letraFin='J';
	b3.numCom=3;
	b3.numFin=7;
	Barco b2;
	b2.letraCom='B';
	b2.letraFin='E';
	b2.numCom=1;
	b2.numFin=1;
	*barcos=b;
	*(barcos+1)=b2;
	*(barcos+2)=b3;
	mapaConBarcos(barcos, 3);
	//scanf("%d", i);
//	pedirNombresYBarcos();

}

