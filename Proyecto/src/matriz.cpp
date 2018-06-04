#include "matriz.h"

matriz::matriz(){
    data=new int*[fil];
    for (int i=0;i<col;i++){
        data[i]=new int[col];
    }
    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            data[i][j]=0;
        }
    }
}

matriz::~matriz(){
    delete []data;
}

void matriz::impMat(){
    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            cout<<data[i][j]<<" ";
        }
        cout<<"\n";
    }
}

pers::pers(int x,int y){
    this->x=x;
    this->y=y;
}

void pers::movimiento(){
    data[y][x]=8;
    bool game_over=false;
    while(!game_over){
        impMat();
        if(kbhit()){
            char tecla=getch();//guarda ls letra que se presione
            if(tecla=='j'){
                x--;
                data[y][x]=8;
                data[y][x+1]=0;
            }
            if(tecla=='l'){
                x++;
                data[y][x]=8;
                data[y][x-1]=0;
            }
            if(tecla=='i'){
                y--;
                data[y][x]=8;
                data[y+1][x]=0;
            }
            if(tecla=='k')
                y++;
                data[y][x]=8;
                data[y-1][x-1]=0;
        }
    }
}
