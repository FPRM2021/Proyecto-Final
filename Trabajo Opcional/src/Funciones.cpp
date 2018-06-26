#include "Funciones.h"

void OcultarCursor(){
    HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize=50;//tamaño del cursor
    cci.bVisible=FALSE;//no se muestra el cursor en pantalla
    SetConsoleCursorInfo(hCon,&cci);//accede a los datos del cursor y los modifica
}

void gotoxy(int x, int y){
    HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);//tener el control de salida de la consola
    COORD dwPos;
    dwPos.X=x;//igualar parametros
    dwPos.Y=y;
    SetConsoleCursorPosition(hCon, dwPos);//atributos interpretados como coordenadas
}

void pintarLimites(){
    for(int i=2;i<78;i++){
        gotoxy(i,3);printf("%c", 205);
        gotoxy(i,33);printf("%c", 205);
    }

    for(int i=4; i<33;i++){
        gotoxy(2,i); printf("%c",186);
        gotoxy(77,i); printf("%c",186);
    }
    gotoxy(2,3); printf("%c",201);
    gotoxy(2,33); printf("%c",200);
    gotoxy(77,3); printf("%c",187);
    gotoxy(77,33); printf("%c",188);
}

