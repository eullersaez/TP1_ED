#ifndef PILHA_H
#define PILHA_H
#include "celula.h"
#include <cstdio>

class pilha{
    private:
        celula *topo;
    public:
        pilha();                       //construtor. optei por nao criar um construtor pois nao utilizarei no tp.
        void empilha(int );            //recebe um item inteiro e o insere no topo da pilha.
        int desempilha();              //remove a ultima celula inserida e retorna seu item.
        void imprime();                //imprime por linha cada item do ultimo ate o primeiro inserido.
};

#endif