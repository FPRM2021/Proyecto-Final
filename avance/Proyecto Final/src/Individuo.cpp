#include "Individuo.h"
#include<conio.h>

Individuo::Individuo(){
    vida = 1;
    pos.set_x(5);
    pos.set_y(5);
    nombre = "Jugador 1";
}
Individuo::Individuo(int vida ,Posicion pos ,string nombre){
    this->vida = vida;
    this->pos = pos;
    this->nombre = nombre;
}
void Individuo::movimiento(char tecla){
    //if(kbhit()){
        tecla = getch();
        if(tecla == ARRIBA){pos.set_y(pos.get_y()+1);}
        if(tecla == ABAJO){pos.set_y(pos.get_y()-1);}
        if(tecla == DERECHA){pos.set_x(pos.get_y()+1);}
        if(tecla == IZQUIERDA){pos.set_x(pos.get_y()-1);}
    //}
}
