#ifndef JUGADOR_H
#define JUGADOR_H
#include "Individuo.h"
#include "Bomba.h"
class Jugador:public Individuo{
    Bomba bom;
    public:
        Jugador(int,Posicion,string);
        void movimiento(char,int[][17]);
        //void soltarBomba(char,int[][17]);
};

#endif // JUGADOR_H
