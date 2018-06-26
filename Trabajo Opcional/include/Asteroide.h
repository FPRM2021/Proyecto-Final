#ifndef ASTEROIDE_H
#define ASTEROIDE_H
#include "Funciones.h"
#include "Nave.h"

class ASTEROIDE
{
    private:
    int x,y;
    public:
        ASTEROIDE(int,int);
        void pintar();
        void mover();
        void colision(NAVE &);
        int getX();
        int getY();
};

#endif // ASTEROIDE_H
