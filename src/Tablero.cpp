#include "Tablero.h"
#include <iostream>
using namespace std;

Tablero::Tablero()
{
    //ctor
}

Tablero::Tablero(string texto){
    this -> texto = texto;
}

void Tablero::borrarTablero(string texto){
    this -> texto = "";
}
string Tablero::escribir(string texto){
    this -> texto = texto;
    return texto;
}
