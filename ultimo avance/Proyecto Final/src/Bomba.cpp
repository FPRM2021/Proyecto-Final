#include "Bomba.h"
#include<windows.h>
bool validacion(int escenario[][17],Posicion pos,char tecla){
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
Bomba::Bomba(){
    radio = 3;
}
Bomba::Bomba(int radio){
    this->radio = radio;
}
void Bomba::explotar(int escenario[][17],Posicion pos){
    escenario[pos.get_y()][pos.get_x()]=5;
    for(int j=0,i=radio;i!=0;i-=1,j++){
        if(validacion(escenario,pos,ABAJO))
            escenario[pos.get_y()+j][pos.get_x()]=5;
        if(validacion(escenario,pos,ARRIBA))
            escenario[pos.get_y()-j][pos.get_x()]=5;
        if(validacion(escenario,pos,DERECHA))
            escenario[pos.get_y()][pos.get_x()+j]=5;
        if(validacion(escenario,pos,IZQUIERDA))
            escenario[pos.get_y()][pos.get_x()-j]=5;
    }
}
