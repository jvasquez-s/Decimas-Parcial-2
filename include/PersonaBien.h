#ifndef PERSONABIEN_H
#define PERSONABIEN_H
#include "Persona.h"
#include "Tablero.h"
#include <iostream>
using namespace std;


class PersonaBien : public Persona
{
    public:
        PersonaBien();
        PersonaBien(string nombre, Tablero* tablero);
        void escribirTablero(string texto) override;
        string getNombre() override;

    protected:

    private:
        string nombre;
        Tablero* tablero;
};

#endif // PERSONABIEN_H
