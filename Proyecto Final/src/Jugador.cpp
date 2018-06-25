#include "Jugador.h"
#include<conio.h>
#include <stdlib.h>
using namespace std;
#include <windows.h>

Jugador::Jugador(int vida ,Posicion pos ,string nombre,char simbolo):Individuo(vida,pos,nombre,simbolo){}

void Jugador::movimiento(char tecla, int escenario[][17],Posicion &coord){

        if(tecla == IZQUIERDA){
//            if(validacion(escenario,get_pos(),tecla)){
//                pos.set_x(pos.get_x()-1);
//                escenario[pos.get_y()][pos.get_x()] = 1;
//            }
            if(validacion(escenario,coord,tecla)){
                gotoxy (coord.get_x(),coord.get_y());
                cout<<escenario[coord.get_y()][coord.get_x()];
                coord.set_x(coord.get_x()-1);
                gotoxy (coord.get_x(),coord.get_y());
                cout<<get_simbolo();
            }

            return;
        }
        if(tecla == DERECHA){
//            if(validacion(escenario,get_pos(),tecla)){
//                pos.set_x(pos.get_x()+1);
//                escenario[pos.get_y()][pos.get_x()] = 1;
//            }
            if(validacion(escenario,coord,tecla)){
                gotoxy (coord.get_x(),coord.get_y());
                cout<<escenario[coord.get_y()][coord.get_x()];
                coord.set_x(coord.get_x()+1);
                gotoxy (coord.get_x(),coord.get_y());
                cout<<get_simbolo();
            }

            return;
        }

        if(tecla == ABAJO){
//            if(validacion(escenario,get_pos(),tecla)){
//                pos.set_y(pos.get_y()+1);
//                escenario[pos.get_y()][pos.get_x()] = 1;
//            }
            if(validacion(escenario,coord,tecla)){
                gotoxy (coord.get_x(),coord.get_y());
                cout<<escenario[coord.get_y()][coord.get_x()];
                coord.set_y(coord.get_y()+1);
                gotoxy (coord.get_x(),coord.get_y());
                cout<<get_simbolo();
            }

            return;
        }
        if(tecla == ARRIBA){
//            if(validacion(escenario,get_pos(),tecla)){
//                pos.set_y(pos.get_y()-1);
//                escenario[pos.get_y()][pos.get_x()] = 1;
//            }
                if(validacion(escenario,coord,tecla)){
                gotoxy (coord.get_x(),coord.get_y());
                cout<<escenario[coord.get_y()][coord.get_x()];
                coord.set_y(coord.get_y()-1);
                gotoxy (coord.get_x(),coord.get_y());
                cout<<get_simbolo();
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

