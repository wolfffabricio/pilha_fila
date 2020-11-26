#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "EmailEncad.h"

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
		fila->fim = email;
		fila->tamanho++;
		return;
	}
	
	fila->fim->seguinte = email;
	fila->fim = email;
	fila->tamanho++;
	return;
}

void excluiEmail (Fila* fila) {
	if(fila == NULL || fila->inicio == NULL) {
		printf("Nao eh possivel excluir email - nao ha email na fila.\n");
		return;
	}
	fila->inicio = fila->inicio->seguinte;
	fila->tamanho--;
	return;	
}

char* consultaProxEmail (Fila* fila) {
	char endereco[64]; 
	if(fila->inicio == NULL) {
		return "Nao ha email na fila!\n";
	}

	return fila->inicio->endereco;
}

void apagaLista (Fila* fila) {
	fila = NULL;
	free(fila);
	return;
}

void imprimeFila(Fila* fila) {
	if(fila == NULL || fila->inicio->endereco == NULL) {
		printf("Nao ha email na fila!\n");
		return;
	}
	
	printf("Fila de emails:\n");
	
	Email* emailAtual = fila->inicio;
	while(emailAtual != NULL) {
		printf("Email: %s\n", emailAtual->endereco);
		emailAtual = emailAtual->seguinte;
	}
	
	printf("\n");
	return;
}
