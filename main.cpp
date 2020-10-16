#include "UFunciones.h"

int main()
{
  miEntero * *pM= nullptr;

  srand(time(nullptr));
  pM = crearMatriz(MAXFILAS,MAXCOL);
  llenarMatriz(pM,MAXFILAS,MAXCOL);
  imprimirMatriz(pM,MAXFILAS,MAXCOL);
  cout<<"\n";
  cout << "El dato mas pequenno es : " << hallaElMenor(pM,MAXFILAS, MAXCOL) << "\n";
  cout<<"\n";
  cout << "Suma de la diagonal     : " << sumaDeDiagonal(pM,MAXFILAS, MAXCOL) << "\n";
  cout << "Suma elementos por encima de la diagonal " << sumaPorEncimadelaDiagonal(pM,MAXFILAS,MAXCOL) << "\n";
  liberarMemoria(pM, MAXFILAS,MAXCOL);
  return 0;
}
