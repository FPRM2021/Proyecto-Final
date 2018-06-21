#include "Bomba.h"
#include<windows.h>

Bomba::Bomba(){
    radio = 3;
}
Bomba::Bomba(int radio){
    this->radio = radio;
}
void Bomba::explotar(int escenario[][17],Posicion pos){
    escenario[pos.get_y()][pos.get_x()]=5;
    for(int tmp=1;tmp<radio;tmp++){
        if(validacion(escenario,pos,ABAJO)){
            escenario[pos.get_y()+tmp][pos.get_x()]=5;}
        if(validacion(escenario,pos,ARRIBA)){
            escenario[pos.get_y()-tmp][pos.get_x()]=5;}
        if(validacion(escenario,pos,DERECHA)){
            escenario[pos.get_y()][pos.get_x()+tmp]=5;}
        if(validacion(escenario,pos,IZQUIERDA)){
            escenario[pos.get_y()][pos.get_x()-tmp]=5;}
    }
}
