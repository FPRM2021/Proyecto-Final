#include "Mapa.h"
#include <iostream>
using namespace std;
#include<SFML/Graphics.hpp>

Mapa::Mapa(){
    matriz= new int*[filas];
}

Mapa::~Mapa(){
    //dtor
}

void Mapa::crearMapa(){
    srand(time(0));
    for(int i=0; i<filas;i++){
        matriz[i]= new int[columnas];
    }
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if((i==0) || (j==0) || (i==filas-1) || (j==columnas-1))
                matriz[i][j]=1;
            else{
                if((i%2==0) && (j%2==0))
                    matriz[i][j]=1;
                else{
                    if((i==1 && (j==1 || j==2)) || (j==1 && i==2) || (i==filas-2 && (j==columnas-3 || j==columnas-2)) || (i==filas-3 && j==columnas-2))
                        matriz[i][j]=0;
                    else
                        matriz[i][j]= rand()%2+2;
                }
            }
        }
    }
}

void Mapa::dibujarMapa(){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}
