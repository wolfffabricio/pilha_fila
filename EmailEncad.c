#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Email {
	char endereco [64];
	struct Email* seguinte;
} Email;

typedef struct Fila {
	struct Email* inicio;
	struct Email* fim;
	int tamanho;
} Fila;

Email* criaEmail(char endereco[64]) {
	Email *novoEmail = NULL;
	novoEmail = (Email*) malloc(sizeof(Email));
	
	strcpy (novoEmail->endereco, endereco);
	novoEmail->seguinte = NULL;
	
	return novoEmail;
}

Fila* criaFila () {
	Fila *novaFila = NULL;
	novaFila = (Fila*) malloc(sizeof(Fila));
	
	novaFila->inicio = NULL;
	novaFila->fim = NULL;
	novaFila->tamanho = 0;
	
	return novaFila;
}

void insereEmail (Email* email, Fila* fila) {
	if (fila->inicio == NULL) {
		fila->inicio = email;
		fila->tamanho++;
		return;
	}
	
	fila->fim->seguinte = email;
	fila->fim = email;
	fila->tamanho++;
	return;
}

void excluiEmail (Email* email, Fila* fila) {
	fila->inicio = fila->incio->seguinte;
	fila->tamanho--;
	return;	
}

char* consultaProxEmail (Fila* fila) {
	char endereco[64]; 
	if(fila->inicio == NULL) {
		strcpy (endereco, "Nao ha email na fila!");
		return endereco;
	}
	
	strcpy(endereco, fila->inicio->endereco);
	return endereco;
}

void apagaLista (Fila* fila) {
	fila = NULL;
	free(fila);
	return;
}
