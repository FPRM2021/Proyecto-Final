#include "Nivel.h"
#include <windows.h>
#include <conio.h>
#include <time.h>
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
        {3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3},
        {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {3,0,3,0,3,0,3,3,3,3,3,0,3,0,3,0,3},
        {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {3,0,3,0,3,0,0,0,0,0,0,0,3,0,3,0,3},
        {3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,3},
        {3,0,3,0,3,0,0,0,0,0,0,0,3,0,3,0,3},
        {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3},
        {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        {3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3},
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

    int x=1,y=1;

    Posicion coord(y,x);
    Jugador uno(1,coord,"Jugador1",'O');
    gotoxy(x,y);

    cout<<uno.get_simbolo();

    bool bomba = false;
    Bomba *bom1 = uno.get_bomba();
    Posicion pos_bomba;
    while(uno.get_vida()){
        if(bomba){
            bom1->tiempo+=1;
            if(bom1->tiempo==800){
               uno.soltarBomba(escenario,pos_bomba);
               bom1->set_tiempo(0);
               bomba = false;
            }
        }
        gotoxy(19,19);
        cout<<bom1->tiempo;
        char pulsar;
        if(kbhit()){
            pulsar = getch();
            uno.movimiento(pulsar,escenario,coord);
            if(uno.soltarBomba(pulsar,escenario,coord)){
                bomba = true;
                pos_bomba = coord;
            }


        continue;
    }}

}
