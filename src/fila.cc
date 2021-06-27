#include "headers/fila.h"
#include "headers/celula.h"

fila::fila(){                                   //construtor.
        primeira = new celula();
        ultima = primeira;
}

void fila::enfilera(int item){                  //metodo enfilera item inteiro com auxilio de celula auxiliar que recebe o item e eh colocada no final
        celula *aux;                            //da fila fazendo a proxima celula de ultima receber auxiliar e fazer ultima receber auxiliar.
        aux = new celula();
        aux->_item = item;
        ultima->prox = aux;
        ultima = aux;
        
}

int fila::desenfilera(){                        //metodo desenfilera um item com auxilio de celula auxiliar posicionada no inicio da fila, armazena-se o
        int item;                               //item, faz-se a primeira celula apontar para a proxima, deleta-se auxiliar e retorna-se item.
        celula *aux;
        aux = new celula();
        item = primeira->prox->_item;
        aux = primeira->prox;
        primeira->prox = aux->prox;
        delete aux;
        return(item);

}

void fila::imprime(){                           //metodo imprime todos os itens da lista atraves de celula auxiliar que percorre toda a lista ate a ultima
        int item;                               //celula (antes de null).
        celula *aux;
        aux = new celula();
        aux = primeira->prox;
        while (aux != nullptr){
                item = aux->_item;
                printf("%i\n", item);
                aux = aux->prox;
        }
        
}