#ifndef INDIVIDUO_H
#define INDIVIDUO_H
#include "Posicion.h"
#include <string>
#include<iostream>
using namespace std;
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

class Individuo{
        int vida;
        Posicion pos;
        string nombre;
    public:
        Individuo();
        Individuo(int,Posicion,string);
        void movimiento(char);
        int get_vida(){return vida;}
        Posicion get_pos(){return pos;}
        //void impacto();
};

#endif // INDIVIDUO_H
