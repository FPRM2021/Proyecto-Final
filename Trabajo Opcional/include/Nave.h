#ifndef NAVE_H
#define NAVE_H
#include "Funciones.h"
class NAVE{
private:
    int x,y,corazones,vidas;
public:
    NAVE(int,int,int,int);
    void pintar();
    void borrar();
    void mover();
    void cor();
    void pintarCorazones();
    void implotar();
    int getX();
    int getY();
    int getVidas();
    int getCor();
};

#endif // NAVE_H
