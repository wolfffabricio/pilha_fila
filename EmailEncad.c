#include <stdio.h>
#include <stdlib.h>

typedef struct EmailListaCirc {
	char endereco [64];
	struct EmailListaCirc seguinte;
} Email;

typedef struct FilaCircular {
	Email inicio;
	Email fim;
	int tamanho;
} Fila;

Fila* criaFila () {
	Fila *novaFila = NULL;
	novaFila = (Fila*) malloc(sizeof(Fila));
	
	novaFila->inicio = NULL;
	novaFila->fim = NULL;
	novaFila->tamanho = 0;
	
	return novaFila;
}
