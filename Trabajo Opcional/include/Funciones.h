#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <stdio.h>
#include <windows.h>//gotoxy
#include <conio.h>//deteccion de teclas
#include <stdlib.h>//permite numeros aleatorios
#include <list>//usar listas


#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ESPACIO 32
#define ENTER 13
#define ESCAPE 27
using namespace std;

void OcultarCursor();
void gotoxy(int, int);
void pintarLimites();
int interfaz();
void limpiarInterfaz();
#endif // FUNCIONES_H
