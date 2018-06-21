
#include <string>
#include<iostream>
using namespace std;
#include "Funciones.h"

//Clase Individuo :
//Clase padre abstracta de las clases Jugador y Enemigo.

class Individuo{
    protected:
        int vida;
        Posicion pos;
        string nombre;
        char simbolo;
    public:
        Individuo();
        Individuo(int,Posicion,string,char);
//      Metodo virtual el cual sera implementado en las clases
//      derivadas por que el movimiento de las clases derivadas
//      seran distintos.
        virtual void movimiento(char,int[][17],Posicion&)=0;
        int get_vida(){return vida;}
        Posicion get_pos(){return pos;}
        void set_simbolo(char simbolo){this->simbolo = simbolo;}
        char get_simbolo(){return simbolo;}
};



