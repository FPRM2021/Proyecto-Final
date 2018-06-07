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
bool Individuo::validacion(int escenario[][17],Posicion pos,char tecla){
        if(tecla == IZQUIERDA)
                if(escenario[pos.get_y()][pos.get_x()-1]==3 || escenario[pos.get_y()][pos.get_x()-1]==2 || escenario[pos.get_y()][pos.get_x()-1]==4){return false;}
        if(tecla == DERECHA)
            if(escenario[pos.get_y()][pos.get_x()+1]==3 || escenario[pos.get_y()][pos.get_x()+1]==2 || escenario[pos.get_y()][pos.get_x()+1]==4){return false;}

        if(tecla == ABAJO)
            if(escenario[pos.get_y()+1][pos.get_x()]==3 || escenario[pos.get_y()+1][pos.get_x()]==2 || escenario[pos.get_y()+1][pos.get_x()]==4){return false;}

        if(tecla == ARRIBA)
            if(escenario[pos.get_y()-1][pos.get_x()]==3 || escenario[pos.get_y()-1][pos.get_x()]==2 || escenario[pos.get_y()-1][pos.get_x()]==4){return false;}

        return true;
}
