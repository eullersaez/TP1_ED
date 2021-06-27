#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H
#include "celula.h"

class listaEncadeada{
    private:
        celula* primeira;
        celula* ultima;

    public:
        listaEncadeada();               //construtor.
        ~listaEncadeada();              //destrutor, ja tinha implementado apesar de nao utilizar.
        void insere(int );              //recebe um inteiro, insere em uma celula e o posiciona no inicio.
        int buscaPosicao(int );         //recebe um inteiro, procura na lista pela celula de item correspondente e retorna sua posicao na lista.
        void removeCelula(int );        //recebe um inteiro com a posicao da celula a ser removida e a remove da lista.
};

#endif