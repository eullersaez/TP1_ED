#include "headers/pilha.h"
#include "headers/celula.h"

pilha::pilha(){                           //construtor.
        topo = new celula();
}
        
void pilha::empilha(int item){            //metodo empilha um novo item na pilha por meio de uma celula auxiliar que recebe o item, faz a proxima celula
        celula *aux;                      //ser a celula que eh topo ate entao e apos faz topo receber auxiliar.
        aux = new celula();
        aux->_item = item;
        aux->prox = topo;
        topo = aux;

}

int pilha::desempilha(){                  //metodo desempilha ao utilizar uma celula auxiliar responsavel por apontar pra celula que esta no topo, fazer
        int item;                         //o inteiro item receber o valor de _item que esta no topo, entao faz topo apontar para a proxima celula, apaga-
        celula *aux;                      //se a celula auxiliar e retorna-se item.
        aux = new celula();
        aux = topo;
        item = topo->_item;
        topo = topo->prox;
        delete aux;
        return (item);

}            


void pilha::imprime(){                   //metodo imprime todos os itens da pilha comecando do topo ate o final por meio de uma celula auxiliar que comeca no topo
        int item;                        //e so para quando a proxima celula aponta para null.
        celula *aux;
        aux = new celula();
        aux = topo;
        
        while (aux->prox != nullptr){
                item = aux->_item;
                printf("%d\n", item);
                aux = aux->prox;
        }
        

}