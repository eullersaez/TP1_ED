#include "headers/listaencadeada.h"
#include "headers/celula.h"

listaEncadeada::listaEncadeada(){           //construtor da lista vazia, ultima celula = primeira celula.
    primeira = new celula();
    ultima = primeira;
}

listaEncadeada::~listaEncadeada(){          //destrutor: percorre-se toda a lista utilizando uma celula auxiliar que sempre aponta pra celula que sera excluida, enquanto 
    celula *aux;                            //a primeira celula sempre aponta pra celula apos a sua proxima. ao final apaga-se a primeira celula e a lista eh deletada por
    aux = primeira->prox;                   //completo.
    while(aux != nullptr){
            primeira->prox = aux->prox;
            delete aux;
            aux = primeira->prox;
    }
    ultima = primeira;
    delete primeira;
}
        
void listaEncadeada::insere(int item){      //metodo cria uma celula auxiliar, define seu atributo _item = item que se deseja inserir na lista, faz com que a celula auxiliar
    celula *aux;                            //aponte para a primeira celula valida (primeira->prox), e faz com que o atributo prox de primeira aponte para si, ou seja, eh inserida
    aux = new celula();                     //na primeira posicao. caso a lista esteja vazia antes da insercao da celula auxiliar, apos essas operacoes aux->prox == nullptr e portanto
    aux->_item = item;                      // ultima = aux.
    aux->prox = primeira->prox;
    primeira->prox = aux;
    if(aux->prox == nullptr){
        ultima = aux;
    }
}

int listaEncadeada::buscaPosicao(int item){         //metodo percorre toda a lista checando se o item procurado == item da celula em que a celula auxiliar se encontra. caso sim (achou), o loop while
    celula *aux;                                    //para de ser executado e retorna-se posicao. caso contrario a posicao eh incrementada e auxiliar recebe aux->prox ate o fim da lista. nao 
    aux = new celula();                             //cuidei de casos como nao achar o item na lista, devido a especificacao do tp.
    aux = primeira->prox;    
    int posicao = 0, achou = 0;             
    while(aux->prox != nullptr && !achou){
        if(aux->_item == item){
            achou = 1;
        }else{
            aux = aux->prox;
            posicao++;
        }
    }
    return posicao;
    
} 
        
void listaEncadeada::removeCelula(int posicao){     //metodo remove celula na posicao entrada. para tal, utiliza-se uma celula auxiliar cuja funcao eh ser posicionada sempre uma posicao antes
    celula *aux;                                    //da celula paraApagar(por meio do loop for), ou seja, a celula que sera removida. quando a celula a ser removida esta na ultima posicao, faz-se
    aux = new celula();                             // a celula anterior apontar para null e virar ultima. quando nao eh o caso, faz-se a celula auxiliar apontar para a celula apos paraApagar. apos
    aux = primeira;                                 //qualquer um dos casos apaga-se paraApagar.
    for(int i=0 ;i<posicao;i++){
            aux = aux->prox;
    }
    celula *paraApagar;
    paraApagar = new celula();
    paraApagar = aux->prox;
    if(paraApagar->prox == nullptr){
        aux->prox = nullptr;
        ultima = aux;
    }else{
        aux->prox = paraApagar->prox;
    }
    delete paraApagar;

}