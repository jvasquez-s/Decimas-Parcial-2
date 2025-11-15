#include <iostream>
#include "PersonaBien.h"
#include "PersonaRara.h"
#include "Persona.h"
#include "fstream"
#include <vector>
#include "Tablero.h"
using namespace std;


void escribirIzquierdaDerecha(string texto, Persona& persona, int& numero);
int main()
{
    ofstream registro("Historial.txt", ios::app);
    registro.close();
    int opcion;
    Tablero tablero;
    string texto;
    int numero = 0;


    Persona* persona1 = new PersonaBien("Juan :",&tablero);
    Persona* persona2 = new PersonaRara("Dani :", &tablero);

    do{
        cout<<"Tablero"<<endl;
        cout<<"1. Para escribir persona izquierda-derecha"<<endl;
        cout<<"2. Para escribir persona derecha-izquierda"<<endl;
        cout<<"3. Para borrar el tablero"<<endl;
        cout<<"4. Para salir"<<endl;
        cin>>opcion;
        switch(opcion){
        case 1:
             numero = 0;
             escribirIzquierdaDerecha(texto, *persona1, numero);
             break;
        case 2:
            numero = 2;
            escribirIzquierdaDerecha(texto, *persona2, numero);
            break;
        case 3:
            tablero.borrarTablero(texto);
            break;
        }
    }while(opcion != 4);

}



void escribirIzquierdaDerecha(string texto, Persona& persona, int& numero){
    string linea = persona.getNombre();
    string leer;
    string textoReves;
    cout<<"Ingrese el texto: "<<endl;
    getline(cin >> ws, texto);
    if (numero == 2){
        for(int i = texto.size()-1; i >= 0; i--){
            textoReves += texto[i];
        }
    }else{
        textoReves += texto;
    }
    linea += textoReves;
    persona.escribirTablero(linea);

    vector<string> registros;
    ifstream registro1("Historial.txt");
    while(getline(registro1,leer)){
        registros.push_back(leer);
    }
    registros.push_back(linea);
    registro1.close();

    ofstream registro2("Historial.txt");
    for(int i = 0; i < registros.size(); i ++){
        registro2 << registros[i] << endl;
    }
    registro2.close();
}


