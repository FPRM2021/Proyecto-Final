#include "Nave.h"

NAVE::NAVE(int x,int y,int corazones,int vidas){
    this->x=x;
    this->y=y;
    this->corazones=corazones;
    this->vidas=vidas;
}

void NAVE::pintar(){
    gotoxy(x,y);   printf("  %c  ",30);//se imprime un caracter ascii
    gotoxy(x,y+1); printf(" %c%c%c ",40,207,41);
    gotoxy(x,y+2); printf("%c%c %c%c",30,190,190,30);
}

void NAVE::borrar(){
    gotoxy(x,y);   cout<<"      ";
    gotoxy(x,y+1); cout<<"      ";
    gotoxy(x,y+2); cout<<"      ";
}

void NAVE::mover(){
    if(kbhit()){//detecta si se presiona una tecla
        char tecla=getch();//guarda la tecla que se presiona
        borrar();
        if(tecla == IZQUIERDA && x>3)x--;//validación de colisiones
        if(tecla == DERECHA && x<71)x++;
        if(tecla == ARRIBA && y>4)y--;
        if(tecla == ABAJO && y<30)y++;
        pintar();
        pintarCorazones();
    }
}

void NAVE::pintarCorazones(){

    gotoxy(50,2); printf("VIDAS %d", vidas);
    gotoxy(64,2);cout<<"Salud";
    gotoxy(70,2);cout<<"      ";
    for(int i=0;i<corazones; i++){
        gotoxy(70+i,2);printf("%c",3);
    }
}

void NAVE::cor(){
    corazones--;
}

void NAVE::implotar(){//me gusto el nombre
    if(corazones==0){
        borrar();//animación de explosion
        gotoxy(x,y);  cout<<"  *  ";
        gotoxy(x,y+1);cout<<" *** ";
        gotoxy(x,y+2);cout<<"  *  ";
        Sleep(200);

        borrar();
        gotoxy(x,y);  cout<<" *  * ";
        gotoxy(x,y+1);cout<<"* ** *";
        gotoxy(x,y+2);cout<<" *  * ";
        Sleep(200);
        borrar();

        vidas--;
        corazones=3;
        pintarCorazones();
        pintar();
    }
}

int NAVE::getX(){
    return x;
}
int NAVE::getY(){
    return y;
}

int NAVE::getVidas(){
    return vidas;
}

int NAVE::getCor(){
    return corazones;
}
