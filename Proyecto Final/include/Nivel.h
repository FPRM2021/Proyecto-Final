#ifndef NIVEL_H
#define NIVEL_H

#include "Jugador.h"
#include <conio.h>
#include <stdlib.h>

class Nivel{
    private:
        void dibujar(int[][17]);
    public:
        Nivel();
        void imprimir(Jugador);
};

#endif // NIVEL_H
