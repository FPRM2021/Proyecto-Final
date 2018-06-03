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
