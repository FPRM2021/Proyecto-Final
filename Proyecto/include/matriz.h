#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>
#include<stdio.h>
#include<windows.h>//permite dar una posición al cursor
#include<conio.h>
using namespace std;

class matriz{
    protected:
        int fil=10;
        int col=10;
        int **data;
    public:
        matriz();
        ~matriz();
        void impMat();
};

class pers: public matriz{
    protected:
       int x;
       int y;
    public:
        pers(int, int);
        void movimiento();
};

#endif // MATRIZ_H
