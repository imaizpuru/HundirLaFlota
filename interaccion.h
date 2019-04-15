/*
 * interaccion.h
 *
 *  Created on: 9/4/2019
 *      Author: ALUMNO
 */

#include <stdio.h>
#include <stdbool.h>
#include "meterBarco.h"

#ifndef INTERACCION_H_
#define INTERACCION_H_

void pedirNombres();
void pedirBarcos();
void pedirBarcos2();
void pedirBarcos3();
void mapa();
void mapaConBarcos(Barco* barcos, int num);
bool hayBarcos(Barco * barcos, int num, int fila, int col);
bool hayBarco(Barco b, int fila, int col);
int numerizarLetra(char c);


#endif /* INTERACCION_H_ */
