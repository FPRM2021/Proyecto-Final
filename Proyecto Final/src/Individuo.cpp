#include "Individuo.h"
#include<conio.h>

Individuo::Individuo(){
    vida = 1;
    pos.set_y(1);
    pos.set_x(1);
    nombre = "Jugador 1";
}
Individuo::Individuo(int vida ,Posicion pos ,string nombre){
    this->vida = vida;
    this->pos = pos;
    this->nombre = nombre;
}
