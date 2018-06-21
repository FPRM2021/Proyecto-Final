#ifndef MAPA_H
#define MAPA_H
#include <ctime>
#include <stdlib.h>
#define filas 15
#define columnas 15

class Mapa{
    int **matriz;
    public:
        Mapa();
        ~Mapa();
        void crearMapa();
        void dibujarMapa();
};

#endif // MAPA_H
