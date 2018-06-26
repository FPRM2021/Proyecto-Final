#include "Asteroide.h"

ASTEROIDE::ASTEROIDE(int x,int y){
    this->x=x;
    this->y=y;
}
void ASTEROIDE::pintar(){
    gotoxy(x,y);printf("%c",184);
}
void ASTEROIDE::mover(){//parecido a dejar bomba
    gotoxy(x,y);cout<<" ";
    y++;
    if(y>32){
        x=rand()%71+4;//numero aleatorio entre 0 y 71, se agrega 4 para mantenerlos en el limite
        y=4;
    }
    pintar();
}

void ASTEROIDE::colision(NAVE &N){
    if(x>=N.getX() && x<N.getX()+6 && y>=N.getY() && y<=N.getY()+2){//condiciones respecto al tamaño de la nave para que haya colision
        N.cor();//disminuye corazones
        N.borrar();
        N.pintar();//para que no borre la nave
        N.pintarCorazones();//actualiza los corazones
        x=rand()%71+4;//el asteroide se reinicia
        y=4;
    }
}

int ASTEROIDE::getX(){
    return x;
}

int ASTEROIDE::getY(){
    return y;
}


