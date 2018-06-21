#include <iostream>
#include "Nivel.h"

using namespace std;

int main(){
    Posicion pos(1,1);
    Jugador yo(1,pos,"Player");
    Nivel uno;
    uno.imprimir(yo);
    return 0;
}


