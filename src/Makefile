#=== OBSERVACOES ===
# As alteracoes feitas no makefile com relacao ao disponibilizado previamente foram apenas para
# adicionar as regras necessarias para fazer o tp funcionar, e optei por colocar manualmente sem
# variaveis as informacoes necessarias.
# Alem disso, removi alguns dos comentarios explicando sobre o proprio makefile e tambem deixei
# os comandos relacionados aos testes comentados, pois eles nao serao inclusos na pasta final.

# == VARIAVEIS ===

CC=g++ # compilador
CFLAGS=-Wall -Wextra # compiler flags
EXEC=./tp1 # nome do executavel que sera gerado
#TMPOUT=tp1.testresult

# === REGRAS =====

$(EXEC): main.cc listaencadeada.o pilha.o fila.o celula.o
	$(CC) $(CFLAGS) main.cc listaencadeada.o pilha.o fila.o celula.o -o $(EXEC)

main.o: main.cc
	g++ -c main.cc

listaencadeada.o: listaencadeada.cc headers/listaencadeada.h
	g++ -c listaencadeada.cc

pilha.o: pilha.cc headers/pilha.h
	g++ -c pilha.cc

fila.o: fila.cc headers/fila.h
	g++ -c fila.cc

celula.o: celula.cc headers/celula.h
	g++ -c celula.cc

clean: # remove todos os arquivos temporarios que forem gerados pela compilacao
	rm -rf main.o listaencadeada.o pilha.o fila.o celula.o

#test: $(EXEC)
#	@bash run_tests.sh $(EXEC) $(TMPOUT)