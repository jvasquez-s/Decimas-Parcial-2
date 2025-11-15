#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;

class Persona
{
    public:
        virtual void escribirTablero(string texto) = 0;
        virtual string getNombre() = 0;

    protected:

    private:

};

#endif // PERSONA_H
