#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>
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

#endif // MATRIZ_H
