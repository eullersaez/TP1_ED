#include <cstdio>
#include "headers/listaencadeada.h"
#include "headers/pilha.h"
#include "headers/fila.h"

int main() {
  
    int num_frotas = 0;
    scanf("%d",&num_frotas);
    
    pilha NavesAptas;

    for(int i=0; i < num_frotas; i++){                                //empilhando todas as naves aptas para combate.
        int id_nave;
        scanf("%d",&id_nave);
        NavesAptas.empilha(id_nave);
    
    }

    listaEncadeada NavesEmCombate;
    fila NavesEmConserto;

    int operacao;
        while(scanf("%d", &operacao) != EOF) {                        //leitura do teclado de qual operacao sera feita utilizando switch para testar cada caso.
            switch (operacao){
            case 0:                                                   //caso 0: desempilha nave mais apta, imprime que esta em combate e insere na lista de naves em combate.
                int nave;
                nave = NavesAptas.desempilha();
                printf("nave %i em combate\n", nave);
                NavesEmCombate.insere(nave);
                break;
            case -1:                                                  //caso -1: desenfilera a nave com maior prioridade em conserto, imprime que foi consertada e a empilha na
                nave = NavesEmConserto.desenfilera();                 //pilha de naves aptas.
                printf("nave %i consertada\n", nave);
                NavesAptas.empilha(nave);
                break;
            case -2:                                                  //caso -2: imprime em cada linha o identificador de cada nave apta empilhada.
                NavesAptas.imprime();
                break;
            case -3:                                                  //caso -3: imprime em cada linha o identificador de cada nave enfileirada esperando conserto.
                NavesEmConserto.imprime();
                break;
            default:                                                  //caso default: ocorre sempre que operacao == identificador de alguma nave em combate, entao busca-se a posicao
                int posicao;                                          //da nave na lista, armazena-se sua posicao, remove-se a celula na posicao em que se encontra na lista de naves
                posicao = NavesEmCombate.buscaPosicao(operacao);      //em combate, imprime que foi avariada e a enfilera na fila de naves em conserto.
                NavesEmCombate.removeCelula(posicao);
                printf("nave %i avariada\n", operacao);
                NavesEmConserto.enfilera(operacao);
                break;
            }
    }
    return 0;
}
