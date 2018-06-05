#ifndef POSICION_H
#define POSICION_H


class Posicion{
        int x,y;
    public:
        Posicion(){x=0;y=0;}
        Posicion(int,int);
        int get_x(){return x;}
        int get_y(){return y;}
        void set_x(int x){this->x=x;}
        void set_y(int y){this->y=y;}
};

#endif // POSICION_H
