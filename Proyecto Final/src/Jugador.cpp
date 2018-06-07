#include "Jugador.h"
#include<conio.h>
#include <stdlib.h>
using namespace std;
#include <windows.h>

Jugador::Jugador(int vida ,Posicion pos ,string nombre):Individuo(vida,pos,nombre){}
void Jugador::movimiento(char tecla, int escenario[][17]){

    //if(kbhit()){
        tecla = getch();/*
        if(tecla == 'w'){
            escenario[pos.get_y()][pos.get_x()] = 4;
        }*/
        if(tecla == IZQUIERDA){
            if(escenario[pos.get_y()][pos.get_x()-1]==3 || escenario[pos.get_y()][pos.get_x()-1]==2){return;}
            pos.set_x(pos.get_x()-1);
            escenario[pos.get_y()][pos.get_x()] = 1;
        }
        if(tecla == DERECHA){
            if(escenario[pos.get_y()][pos.get_x()+1]==3 || escenario[pos.get_y()][pos.get_x()+1]==2){return;}
            pos.set_x(pos.get_x()+1);
            escenario[pos.get_y()][pos.get_x()] = 1;

        }
        if(tecla == ABAJO){
            if(escenario[pos.get_y()+1][pos.get_x()]==3 || escenario[pos.get_y()+1][pos.get_x()]==2){return;}
            pos.set_y(pos.get_y()+1);
            escenario[pos.get_y()][pos.get_x()] = 1;
        }
        if(tecla == ARRIBA){
            if(escenario[pos.get_y()-1][pos.get_x()]==3 || escenario[pos.get_y()-1][pos.get_x()]==2){return;}
            pos.set_y(pos.get_y()-1);
            escenario[pos.get_y()][pos.get_x()] = 1;
        }
    //}
}
/*
void Jugador::soltarBomba(char tecla, int escenario[][17]){
    if(tecla=='w'){
        escenario[pos.get_y()][pos.get_x()] = 4;
    }
    return;
}
*/
