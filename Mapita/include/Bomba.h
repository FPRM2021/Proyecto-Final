#ifndef BOMBA_H
#define BOMBA_H
#include "Funciones.h"
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
class Bomba{
        int radio;
    public:
        Bomba();
        Bomba(int);
        void explotar(int[][17],Posicion);
        void set_radio(int radio){this->radio = radio;}
        int get_radio(){return radio;}
};


#endif // BOMBA_H
