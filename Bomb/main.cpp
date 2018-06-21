#include <iostream>
using namespace std;
#include "Mapa.h"
#include "Juego.h"

int main(){
    Mapa nivel;
    nivel.crearMapa();
    nivel.dibujarMapa();
    Juego Bomberman;
    Bomberman.run();
    return 0;
}
