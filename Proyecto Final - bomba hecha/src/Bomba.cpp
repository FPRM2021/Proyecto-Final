#include<windows.h>

#include "Bomba.h"
#include <iostream>
using namespace std;
#include<windows.h>

Bomba::Bomba(){
    radio = 3;
    tiempo = 0;
    existencias++;;
}

Bomba::Bomba(int radio){
    this->radio = radio;
    tiempo = 0;
    existencias++;
}

void Bomba::dibujar(int escenario[][17],Posicion pos_bomba,Estado e){
    switch(e){
        case Estado::normal:
            bomba_puesta(escenario,pos_bomba);
        case Estado::explotar:
            if(tiempo==800){
            bomba_explota(escenario,pos_bomba);
            }
        case Estado::desaparecer:
            bomba_borrar(escenario,pos_bomba);
    }
}
void Bomba::bomba_puesta(int escenario[][17],Posicion pos){
    escenario[pos.get_y()][pos.get_x()] = 5; //cambiamos la matriz
    for(int i=0;i<3;i++){
        gotoxy(pos.get_x(),pos.get_y());
        Sleep(70);
        cout<<" "; //imprimimos 5 en la posicion de jugador
        gotoxy(pos.get_x(),pos.get_y());
        Sleep(40);
        cout<<5;
    }
}
void Bomba::bomba_explota(int escenario[][17],Posicion pos){
        gotoxy(pos.get_y(),pos.get_x());
        escenario[pos.get_y()][pos.get_x()]=4;
        for(int tmp=1;tmp<3;tmp++){
            Sleep(70*tmp);
            if(validacion(escenario,pos,ABAJO)){
                escenario[pos.get_y()+tmp][pos.get_x()]=4;
                gotoxy(pos.get_x(),pos.get_y()+tmp);
                cout<<4;
            }
            if(validacion(escenario,pos,ARRIBA)){
                escenario[pos.get_y()-tmp][pos.get_x()]=4;
                gotoxy(pos.get_x(),pos.get_y()-tmp);
                cout<<4;
            }
            if(validacion(escenario,pos,IZQUIERDA)){
                escenario[pos.get_y()][pos.get_x()-tmp]=4;
                gotoxy(pos.get_x()-tmp,pos.get_y());
                cout<<4;
            }
            if(validacion(escenario,pos,DERECHA)){
                escenario[pos.get_y()][pos.get_x()+tmp]=4;
                gotoxy(pos.get_x()+tmp,pos.get_y());
                cout<<4;
            }



        }
}

void Bomba::bomba_borrar(int escenario[][17],Posicion pos){
}
