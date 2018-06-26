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
int interfaz(){
    gotoxy(20,18);cout<<"ENTER PARA JUGAR";
    gotoxy(20,20);cout<<"Presione escape para salir del Juego";
    int val=0;
    while (val==0){
        if(kbhit()){
            char tecla=getch();
            if(tecla==ESCAPE){
                limpiarInterfaz();
                exit(0);
            }
            if(tecla==ENTER){
                limpiarInterfaz();
                gotoxy(20,18);cout<<"Ingrese el numero de nivel: ";
                gotoxy(20,19);cout<<"1 Dificultad baja ";
                gotoxy(20,20);cout<<"2 Dificultad media ";
                gotoxy(20,21);cout<<"3 Dificultad alta ";
                int n=0;
                while(n==0 && n!=1 && n!=2 && n!=3){
                    gotoxy(48,18);cout<<"       ";
                    gotoxy(48,18);cin>>n;
                    if(n==1){
                        limpiarInterfaz();
                        return 100;
                    }
                    if(n==2){
                        limpiarInterfaz();
                        return 50;
                    }
                    if(n==3){
                        limpiarInterfaz();
                        return 30;
                    }
                    else
                        n=0;

                }
            }
        }
    }
}

void limpiarInterfaz(){
    gotoxy(20,17);cout<<"                                                  ";
    gotoxy(20,18);cout<<"                                                  ";
    gotoxy(20,19);cout<<"                                                  ";
    gotoxy(20,20);cout<<"                                                  ";
    gotoxy(20,21);cout<<"                                                  ";
    gotoxy(20,25);cout<<"                                                  ";
}
