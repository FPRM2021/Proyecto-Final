
#include "Posicion.h"
#include <string>
#include<iostream>
using namespace std;
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

class Individuo{
    protected:
        int vida;
        Posicion pos;
        string nombre;
    public:
        Individuo();
        Individuo(int,Posicion,string);
        virtual void movimiento(char,int[][17])=0;
        int get_vida(){return vida;}
        Posicion get_pos(){return pos;}

};



