#include "PersonaBien.h"
#include <iostream>
using namespace std;
PersonaBien::PersonaBien()
{
    //ctor
}

PersonaBien::PersonaBien(string nombre, Tablero* tablero){
    this -> nombre = nombre;
    this -> tablero = tablero;
}


string PersonaBien::getNombre(){
    return nombre;
}


void PersonaBien::escribirTablero(string texto){
    this -> tablero -> escribir(texto);
}
