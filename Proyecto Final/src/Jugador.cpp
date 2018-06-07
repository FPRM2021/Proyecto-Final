#include "Jugador.h"
#include<conio.h>
#include <stdlib.h>
using namespace std;
#include <windows.h>

Jugador::Jugador(int vida ,Posicion pos ,string nombre):Individuo(vida,pos,nombre){
}
void Jugador::movimiento(char tecla, int escenario[][17]){

        if(tecla == IZQUIERDA){
            if(validacion(escenario,get_pos(),tecla)){
                pos.set_x(pos.get_x()-1);
                escenario[pos.get_y()][pos.get_x()] = 1;
            }
            return;
        }
        if(tecla == DERECHA){
            if(validacion(escenario,get_pos(),tecla)){
                pos.set_x(pos.get_x()+1);
                escenario[pos.get_y()][pos.get_x()] = 1;
            }
            return;
        }

        if(tecla == ABAJO){
            if(validacion(escenario,get_pos(),tecla)){
                pos.set_y(pos.get_y()+1);
                escenario[pos.get_y()][pos.get_x()] = 1;
            }
            return;
        }
        if(tecla == ARRIBA){
            if(validacion(escenario,get_pos(),tecla)){
                pos.set_y(pos.get_y()-1);
                escenario[pos.get_y()][pos.get_x()] = 1;
            }
            return;
        }
    //}
}

bool Jugador::soltarBomba(char tecla){
    if(tecla=='w'){
        return true;
    }
    return false;
}

