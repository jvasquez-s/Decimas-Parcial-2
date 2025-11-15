#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
using namespace std;

class Tablero
{
    public:
        Tablero();
        Tablero(string texto);
        void borrarTablero(string texto);
        string escribir(string texto);

    protected:

    private:
        string texto;
};

#endif // TABLERO_H
