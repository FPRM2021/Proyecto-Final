#include "Jugador.h"
#include<conio.h>
#include <stdlib.h>
using namespace std;
#include <windows.h>

Jugador::Jugador(int vida ,Posicion pos ,string nombre,char simbolo):Individuo(vida,pos,nombre,simbolo){
}
void Jugador::movimiento(char tecla, int escenario[][17],Posicion &coord){
    Sleep(60);
        if(tecla == IZQUIERDA){
//
            if(validacion(escenario,coord,tecla)){
                gotoxy (coord.get_x(),coord.get_y());
                cout<<escenario[coord.get_y()][coord.get_x()];
                coord.set_x(coord.get_x()-1);
                gotoxy (coord.get_x(),coord.get_y());
                cout<<get_simbolo();
            }

            return;
        }
       else if(tecla == DERECHA){
//
            if(validacion(escenario,coord,tecla)){
                gotoxy (coord.get_x(),coord.get_y());
                cout<<escenario[coord.get_y()][coord.get_x()];
                coord.set_x(coord.get_x()+1);
                gotoxy (coord.get_x(),coord.get_y());
                cout<<get_simbolo();
            }

            return;
        }

        else if(tecla == ABAJO){
//
            if(validacion(escenario,coord,tecla)){
                gotoxy (coord.get_x(),coord.get_y());
                cout<<escenario[coord.get_y()][coord.get_x()];
                coord.set_y(coord.get_y()+1);
                gotoxy (coord.get_x(),coord.get_y());
                cout<<get_simbolo();
            }

            return;
        }
        else if(tecla == ARRIBA){
//
                if(validacion(escenario,coord,tecla)){
                gotoxy (coord.get_x(),coord.get_y());
                cout<<escenario[coord.get_y()][coord.get_x()];
                coord.set_y(coord.get_y()-1);
                gotoxy (coord.get_x(),coord.get_y());
                cout<<get_simbolo();
            }
            return;
        }

}

bool Jugador::soltarBomba(char tecla,int escenario[][17], Posicion pos_jugador){
    if(tecla == ESPACIO){
        bom.dibujar(escenario,pos_jugador,normal);

        return true;
    }
    return false;
}

void Jugador::soltarBomba(int escenario[][17], Posicion pos_jugador){
    bom.dibujar(escenario,pos_jugador,explotar);
}

