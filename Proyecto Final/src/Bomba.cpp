#include "Bomba.h"
#include <iostream>
using namespace std;
#include<windows.h>

Bomba::Bomba(){
    radio = 3;
}

Bomba::Bomba(int radio){
    this->radio = radio;
}

void Bomba::explotar(char tecla,int escenario[][17],Posicion pos){
    if(tecla==ESPACIO){
        escenario[pos.get_y()][pos.get_x()]=5;
        for(int tmp=0;tmp<radio;tmp++){

            if(escenario[pos.get_y()+tmp][pos.get_x()]!=3){///abajo
                gotoxy(pos.get_x(),pos.get_y());
                gotoxy (pos.get_x(),pos.get_y()+tmp);
                cout<<5;
            }

            if(escenario[pos.get_y()-tmp][pos.get_x()]!=3){///arriba
                gotoxy(pos.get_x(),pos.get_y());
                gotoxy (pos.get_x(),pos.get_y()-tmp);
                cout<<5;
            }

            if(escenario[pos.get_y()][pos.get_x()+tmp]!=3){///izquierda
                gotoxy(pos.get_x(),pos.get_y());
                gotoxy (pos.get_x()+tmp,pos.get_y());
                cout<<5;
            }

            if(escenario[pos.get_y()][pos.get_x()-tmp]!=3){///derecha
                gotoxy(pos.get_x(),pos.get_y());
                gotoxy (pos.get_x()-tmp,pos.get_y());
                cout<<5;
            }

        }
    }
}

