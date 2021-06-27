#ifndef FILA_H
#define FILA_H
#include "celula.h"
#include <cstdio>

class fila{
    private:
        celula *primeira;
        celula *ultima;
    public:
        fila();                  //construtor. optei por nao criar um construtor pois nao utilizarei no tp.
        void enfilera(int );     //recebe um inteiro e o insere no final da fila.
        int desenfilera();       //remove a primeira celula na fila e retorna seu item.
        void imprime();          //imprime por linha cada item do primeiro ate o ultimo inserido.
};

#endif