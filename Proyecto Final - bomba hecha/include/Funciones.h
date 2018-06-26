#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include "Posicion.h"
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <time.h>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ESCAPE 27
#define ESPACIO 32

#include <iostream>
using namespace std;
void gotoxy(int,int);
bool validacion(int[][17],Posicion,char);


#endif // FUNCIONES_H_INCLUDED
