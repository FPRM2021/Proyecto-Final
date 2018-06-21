#ifndef JUEGO_H
#define JUEGO_H
#include<SFML/Graphics.hpp>
#include "Mapa.h"

class Juego{
    sf::RenderWindow window;
    public:
        Juego();
        void run();
};

#endif // JUEGO_H
