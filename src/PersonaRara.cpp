#include "PersonaRara.h"
#include <iostream>
using namespace std;
PersonaRara::PersonaRara()
{
    //ctor
}


PersonaRara::PersonaRara(string nombre, Tablero* tablero){
    this -> nombre = nombre;
    this -> tablero = tablero;
}


string PersonaRara::getNombre(){
    return nombre;
}


void PersonaRara::escribirTablero(string texto){
    this -> tablero -> escribir(texto);
}
