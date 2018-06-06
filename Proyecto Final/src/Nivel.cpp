#include "Nivel.h"
#include <windows.h>
#include <conio.h>
using namespace std;
Nivel::Nivel(){
    cout<<"matriz creada"<<endl;
}
void Nivel::imprimir(Individuo jugador){

    //para borrar el cursor
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 50;
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hCon,&cci);

    int escenario[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,1,1,0,0,0,0},
        {0,0,0,0,1,1,0,0,0,0},
        {0,0,0,0,1,1,1,1,0,0},
        {0,0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,0,0,1,1,1},
        {0,0,0,0,0,0,0,0,0,0}
    };
    while(jugador.get_vida()){
        int tmp_x = jugador.get_pos().get_x();
        int tmp_y = jugador.get_pos().get_y();
        if(kbhit()){
            char pulsar = getch();
            jugador.movimiento(pulsar);
        }
        escenario[jugador.get_pos().get_x()][jugador.get_pos().get_y()] = 1;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cout<<escenario[i][j]<<" ";
            }
            cout<<endl;
        }
        if(jugador.get_pos().get_x()!=tmp_x || jugador.get_pos().get_y()!=tmp_y){
            escenario[tmp_x][tmp_y]=0;
        }
        system("cls");
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cout<<escenario[i][j]<<" ";
            }
            cout<<endl;
        }
        Sleep(100);
        system("cls");

    }
}
