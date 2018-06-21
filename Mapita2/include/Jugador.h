#ifndef JUGADOR_H
#define JUGADOR_H
#include "Individuo.h"
#include "Bomba.h"



class Jugador:public Individuo{
    Bomba bom;
    public:
        Jugador(int,Posicion,string);
        void set_Bomba(int);
        Bomba get_Bomba(){return bom;}
        void movimiento(char,int[][17]);
        bool soltarBomba(char);
};

#endif // JUGADOR_H
