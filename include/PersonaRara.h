#ifndef PERSONARARA_H
#define PERSONARARA_H
#include "Persona.h"
#include "Tablero.h"
#include <iostream>
using namespace std;

class PersonaRara : public Persona
{
    public:
        PersonaRara();
        PersonaRara(string nombre, Tablero* tablero);
        void escribirTablero(string texto) override;
        string getNombre() override;

    protected:

    private:
        string nombre;
        Tablero* tablero;
};

#endif // PERSONARARA_H
