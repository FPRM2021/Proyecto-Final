#include "Nivel.h"
#include <windows.h>
#include <conio.h>
using namespace std;

Nivel::Nivel(){
}

void Nivel::imprimir(Jugador jugador){

    //para borrar el cursor
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 50;
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hCon,&cci);

    int escenario[15][17] = {
        {3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3},
        {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {3,0,0,0,3,3,0,0,0,3,3,0,0,0,0,0,3},
        {3,0,0,0,3,3,0,0,0,3,3,0,0,0,0,0,3},
        {3,0,0,0,3,3,0,0,0,3,3,0,0,0,0,0,3},
        {3,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3},
        {3,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3},
        {3,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,3},
        {3,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,3},
        {3,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,3},
        {3,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,3},
        {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3},
        //0=paso libre,2=destructible,1=el jugador,3=puntos fijos
    };

    escenario[jugador.get_pos().get_y()][jugador.get_pos().get_x()]=1;

    while(jugador.get_vida()){

        int tmp_x = jugador.get_pos().get_x();
        int tmp_y = jugador.get_pos().get_y();
        Posicion pos(tmp_x,tmp_y);
        dibujar(escenario);
        system("cls");
        if(kbhit()){
            char pulsar = getch();
            if(jugador.soltarBomba(pulsar)){
                escenario[jugador.get_pos().get_y()][jugador.get_pos().get_x()]=4;
            }
            jugador.movimiento(pulsar,escenario);
        }

        if(jugador.get_pos().get_x()!=tmp_x || jugador.get_pos().get_y()!=tmp_y){
            if(escenario[tmp_y][tmp_x]==4){
                dibujar(escenario);
                system("cls");
                jugador.get_Bomba().explotar(escenario,pos);
                continue;
            }
            escenario[tmp_y][tmp_x]=0;
        }

        dibujar(escenario);

        Sleep(140);
        system("cls");

    }
}

void Nivel::dibujar(int escenario[][17]){
    for(int i=0;i<15;i++){
            for(int j=0;j<17;j++){
                cout<<escenario[i][j]<<" ";}
            cout<<endl;
        }
}
