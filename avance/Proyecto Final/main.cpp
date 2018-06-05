#include <iostream>
#include "Nivel.h"

using namespace std;

int main(){
    Posicion pos(5,5);
    Individuo yo(1,pos,"Rafo");
    Nivel uno();
    uno.imprimir(yo);
    return 0;
}
