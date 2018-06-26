#ifndef BOMBA_H
#define BOMBA_H
#include "Funciones.h"
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
enum Estado{normal,explotar,desaparecer};
class Bomba{
        int existencias = 0;
        int radio;
        void bomba_puesta(int[][17],Posicion);
        void bomba_explota(int[][17],Posicion);
        void bomba_borrar(int[][17],Posicion);
    public:
        Bomba();
        Bomba(int);
        int tiempo;
        void dibujar(int[][17], Posicion,Estado);

        void set_radio(int radio){this->radio = radio;}
        int get_radio(){return radio;}

        int get_tiempo(){return tiempo;}
        void set_tiempo(int tiempo){this->tiempo = tiempo;}
};


#endif // BOMBA_H
