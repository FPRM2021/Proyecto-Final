#include "Proyectil.h"

PROYECTIL::PROYECTIL(int x, int y){
    this->x=x;
    this->y=y;
}

void PROYECTIL::mover(){
    gotoxy(x,y); cout<<" ";
    y--;
    gotoxy(x,y);cout<<"*";
}

bool PROYECTIL::borrar(){
    if(y==4) return true;
    return false;
}

int PROYECTIL::getX(){
    return x;
}
int PROYECTIL::getY(){
    return y;
}
