//
// Created by MARIA HILDA BERMEJO RIOS on 10/16/20.
//

#ifndef EJMPLO2_UFUNCIONES_H
#define EJMPLO2_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXFILAS=8;
const int MAXCOL= 8;

using miEntero = size_t;

miEntero * * crearMatriz(int filas, int col);
void  llenarMatriz(miEntero  **pM, int filas, int col);
void imprimirMatriz(miEntero  ** pM,int filas, int col);
miEntero  hallaElMenor( miEntero * *pM, int filas, int col);
miEntero  sumaDeDiagonal(miEntero **pM, int filas, int col);
miEntero  sumaPorEncimadelaDiagonal( miEntero **pM, int filas, int col);
void liberarMemoria(miEntero ** &pM, int filas,int col);

#endif //EJMPLO2_UFUNCIONES_H
