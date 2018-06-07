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

Jugador::Jugador(int vida ,Posicion pos ,string nombre):Individuo(vida,pos,nombre){}

void Jugador::movimiento(char tecla, int escenario[][17]){

    //if(kbhit()){
        tecla = getch();
        if(tecla == IZQUIERDA){
            if(escenario[pos.get_y()][pos.get_x()-1]==3 || escenario[pos.get_y()][pos.get_x()-1]==2){return;}
            pos.set_x(pos.get_x()-1);
        }
        if(tecla == DERECHA){
            if(escenario[pos.get_y()][pos.get_x()+1]==3 || escenario[pos.get_y()][pos.get_x()+1]==2){return;}
            pos.set_x(pos.get_x()+1);
        }
        if(tecla == ABAJO){
            if(escenario[pos.get_y()+1][pos.get_x()]==3 || escenario[pos.get_y()+1][pos.get_x()]==2){return;}
            pos.set_y(pos.get_y()+1);
        }
        if(tecla == ARRIBA){
            if(escenario[pos.get_y()-1][pos.get_x()]==3 || escenario[pos.get_y()-1][pos.get_x()]==2){return;}
            pos.set_y(pos.get_y()-1);
        }
    //}
}
