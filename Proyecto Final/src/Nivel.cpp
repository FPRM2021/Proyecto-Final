#include "Nivel.h"
#include <windows.h>
#include <conio.h>
using namespace std;


void borrar_cursor(){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 50;
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hCon,&cci);
}

void Nivel(bool jugadores){
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

    //para borrar el cursor
    borrar_cursor();


    for (int y = 0; y < 15; y++) {
        for (int x = 0; x < 17; x++) {
            cout<<escenario[y][x];
        }
        cout<<endl;
    }

    int x=2,y=2;

    Posicion coord(y,x);
    Jugador uno(1,coord,"Jugador1",'O');
    gotoxy(x,y);
    cout<<uno.get_simbolo();
    while(uno.get_vida()){
        char pulsar;
        if(kbhit()){
            pulsar = getch();
            uno.movimiento(pulsar,escenario,coord);
        }
        continue;


    }
    //posicion inicial de jugador

   // escenario[jugador.get_pos().get_y()][jugador.get_pos().get_x()]=1;

//    while(jugador.get_vida()){
//
//        int tmp_x = jugador.get_pos().get_x();
//        int tmp_y = jugador.get_pos().get_y();
//        Posicion pos(tmp_x,tmp_y);
//        dibujar(escenario);
//        system("cls");
//        if(kbhit()){
//            char pulsar = getch();
//            if(jugador.soltarBomba(pulsar)){
//                escenario[jugador.get_pos().get_y()][jugador.get_pos().get_x()]=4;
//            }
//            jugador.movimiento(pulsar,escenario);
//        }
//
//        if(jugador.get_pos().get_x()!=tmp_x || jugador.get_pos().get_y()!=tmp_y){
//            if(escenario[tmp_y][tmp_x]==4){
//                dibujar(escenario);
//                system("cls");
//                jugador.get_Bomba().explotar(escenario,pos);
//                continue;
//            }
//            escenario[tmp_y][tmp_x]=0;
//        }
//
//        dibujar(escenario);
//
//        Sleep(140);
//        system("cls");
//
//    }
}


