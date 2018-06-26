#ifndef PROYECTIL_H
#define PROYECTIL_H
#include "Funciones.h"

class PROYECTIL
{
    private:
    int x,y;
    public:
    PROYECTIL(int,int);
    void mover();
    bool borrar();
    int getX();
    int getY();
};

#endif // PROYECTIL_H
