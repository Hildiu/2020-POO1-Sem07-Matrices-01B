//
// Created by MARIA HILDA BERMEJO RIOS on 10/16/20.
//
#include "UFunciones.h"

miEntero * * crearMatriz(int filas, int col)
//-----------------------------------------
{
   miEntero **pT= nullptr;
   pT = new miEntero*[filas];
   for(int f=0; f<filas; f++)
     pT[f] = new miEntero[col];

   return pT;
}

void  llenarMatriz(miEntero  **pM, int filas, int col)
//---------------------------------------------------
{
  for(miEntero f=0; f<filas; f++)
    for(miEntero c=0; c<col; c++)
      pM[f][c] = rand()%99 +1;
}


void imprimirMatriz(miEntero  ** pM,int filas, int col)
//----------------------------------------------------
{
  cout << "\n";
  for(miEntero f=0; f<filas; f++) {
    for (miEntero c = 0; c < col; c++)
      cout << setw(7) << pM[f][c];
    cout << "\n";
  }
}


miEntero  hallaElMenor( miEntero * *pM, int filas, int col)
{//-------------------------------------------------
  miEntero  elMenor=pM[0][0];

  for(miEntero f=0; f<filas; f++)
    for (miEntero c = 0; c < col; c++)
      if ( pM[f][c]< elMenor)
        elMenor = pM[f][c];

  return elMenor;
}


miEntero  sumaDeDiagonal(miEntero **pM, int filas, int col)
{//-------------------------------------------------------
  miEntero suma=0;
  for(miEntero i=0; i<filas; i++)
    suma += pM[i][i];

  return suma;
}


miEntero  sumaPorEncimadelaDiagonal( miEntero **pM, int filas, int col)
{
  miEntero  suma=0;
  for(miEntero f=0; f<filas-1; f++)
    for(miEntero c=f+1; c<col; c++)
      suma += pM[f][c];
  return suma;
}

void liberarMemoria(miEntero ** & pMatriz, int filas,int col)
{
  for(miEntero f=0; f<filas; f++)
    delete []pMatriz[f];
  delete []pMatriz;
  pMatriz= nullptr;
}