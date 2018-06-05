#ifndef NIVEL_H
#define NIVEL_H

#include "Individuo.h"
#include<conio.h>

class Nivel{
        int escenario[][10];
    public:
        Nivel();
        void imprimir(Individuo);
        //void fin(Individuo);
};

#endif // NIVEL_H
