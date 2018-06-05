#include "Nivel.h"

Nivel::Nivel(){
    int escenario[][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

}
void Nivel::imprimir(Individuo jugador){
    while(jugador.get_vida()){
        for(int i=0;i<10;i++){
            for(int j=0;i<10;i++){
                cout<<escenario[i][j];
            }
        }
        if(kbhit()){
            char pulsar = getch();
            jugador.movimiento(pulsar);
        }
        int tmp = escenario[jugador.get_pos().get_x()][jugador.get_pos().get_y()];
        escenario[jugador.get_pos().get_x()][jugador.get_pos().get_y()] = 1;
        for(int i=0;i<10;i++){
            for(int j=0;i<10;i++){
                cout<<escenario[i][j];
            }
        }
        escenario[jugador.get_pos().get_x()][jugador.get_pos().get_y()] = tmp;
    }
}
