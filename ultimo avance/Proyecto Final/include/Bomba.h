#ifndef BOMBA_H
#define BOMBA_H
#include "Posicion.h"
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
bool validacion(int[][17],Posicion,char);
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
