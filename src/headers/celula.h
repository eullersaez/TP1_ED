#ifndef CELULA_H
#define CELULA_H

class celula{
    public:
        int _item;                      //optei por nao implementar um tipoItem, pois para esse TP apenas int sera suficiente.
        celula *prox;
    celula();                           //construtor.
    friend class pilha;
    friend class fila;
    friend class listaEncadeada;        //fazendo todas as demais classes serem friends para poderem acessar os atributos privados de celula.
    
};

#endif