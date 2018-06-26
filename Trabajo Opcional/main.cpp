#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include "Nave.h"
#include "Asteroide.h"
#include "Proyectil.h"

int main()
{
    OcultarCursor();
    pintarLimites();
    NAVE N(37,30,3,3);//se crea una instancia de nave
    N.pintar();
    N.pintarCorazones();

    list<ASTEROIDE*>A;
    list<ASTEROIDE*>::iterator itA;
    for(int i=0;i<5;i++){
        A.push_back(new ASTEROIDE(rand()%75+3,rand()%5+4));
    }

    list<PROYECTIL*> P;//lista de proyectiles llamada P
    list<PROYECTIL*>::iterator it;//recorrer la lista


    bool gameover=false;
    int puntaje=0;

    while(!gameover){

        gotoxy(4,2); printf("Puntos %d", puntaje);
        if(kbhit()){
            char tecla=getch();
            if(tecla=='a')
                P.push_back(new PROYECTIL(N.getX()+2,N.getY()-1));//incluir a la lista proyectiles al presionar a
        }

        for(it=P.begin();it!=P.end();it++){//EL INTERADOR VA DEL INICIO DE LA LISTA, HASTA EL FIN DE LA MISMA
            (*it)->mover();
            if((*it)->borrar()){
                gotoxy((*it)->getX(),(*it)->getY());cout<<" ";
                delete(*it);//elimina al proyectil que sale de pantalla
                it=P.erase(it);//el iterador se iguala al siguiente en la lista
            }
        }
        for(itA=A.begin();itA!=A.end();itA++){//recorre la lista de los asteroides
            (*itA)->mover();
            (*itA)->colision(N);
        }

        for(itA=A.begin();itA!=A.end();itA++){//colision entre proyectil y asteroide
            for(it=P.begin();it!=P.end();it++){
                if((*itA)->getX()==(*it)->getX() && ( (*itA)->getY()+1==(*it)->getY() || (*itA)->getY()==(*it)->getY())){//casos varios de colision entre proyectil y asteroide
                  gotoxy((*it)->getX(),(*it)->getY());cout<<" ";
                  delete(*it);
                  it=P.erase(it);

                  A.push_back(new ASTEROIDE(rand()%74+3,4));// se crea un nuevo asteroide que sustituya al destruido
                  gotoxy((*itA)->getX(),(*itA)->getY());cout<<" ";
                  delete(*itA);
                  itA=A.erase(itA);

                  puntaje+=5;
                }
            }
        }
        if(N.getVidas()==0 && N.getCor()==0)gameover=true;
        N.mover();
        N.implotar();
        Sleep(30);
    }
    return 0;
}
