/*
 * meterBarco.h
 *
 *  Created on: 8/4/2019
 *      Author: ALUMNO
 */

#ifndef HUNDIRLAFLOTA_METERBARCO_H_
#define HUNDIRLAFLOTA_METERBARCO_H_

#include <stdbool.h>
typedef struct
{
char letraCom;
char letraFin;
int tamanyo;
int numCom;
int numFin;
}Barco;

Barco * meterBarco(int tamanyo);
bool existeColumna(char col);
bool existeNumero(int num, int limite);
bool existeFila(int fila);
bool existeLetra(int tamanyo, char letra);
char calculaLetraFinal(char letraIni, int tamanyo);

#endif /* HUNDIRLAFLOTA_METERBARCO_H_ */
