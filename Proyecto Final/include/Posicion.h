#ifndef POSICION_H
#define POSICION_H

////Clase Posicion :
//Sirve para : Simular coordenadas en la matriz de la clase Nivel
//             y asi poder cambiar la posicion de nuestro jugador
//             o de nuestro enemigo.

class Posicion{
        int x,y;
    public:
        Posicion(int x=1,int y=1){this->x=x; this->y=y;}
        int get_x(){return x;}
        int get_y(){return y;}
        void set_x(int x){this->x=x;}
        void set_y(int y){this->y=y;}
};

#endif // POSICION_H
