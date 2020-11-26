#include <stdio.h>
#include <stdlib.h>
#include "EmailEncad.h"

/* 
Parte 1
PESQUISE UM USO REAL DE PILHA EM PROBLEMAS COM ALGORITMOS
APRESENTE O PROBLEMA
IMPLEMENTE O PROBLEMA EM C USANDO AMBAS AS FORMAS (OU IMPLEMENTE UM PROBLEMA PARA CADA FORMA):
-VETOR
-LISTA ENCADEADA (CRIAR UM TAD PILHA COM AS FUNÇÕES DEFINIDAS ANTERIORMENTE) 

Parte 2
PESQUISE UM USO REAL DE FILAS EM PROBLEMAS COM ALGORITMOS
APRESENTE O PROBLEMA
IMPLEMENTE O PROBLEMA EM C USANDO AMBAS AS FORMAS (OU IMPLEMENTE UM PROBLEMA PARA CADA FORMA):
-FILA CIRCULAR
-LISTA ENCADEADA (CRIAR UM TAD FILA COM AS FUNÇÕES DEFINIDAS ANTERIORMENTE) 
*/

int main(int argc, char *argv[]) {
	
	Email* email1 = criaEmail("mail1@mail.com");
	Email* email2 = criaEmail("mail2@mail.com");
	Email* email3 = criaEmail("mail3@mail.com");
	Email* email4 = criaEmail("mail4@mail.com");
	Fila* fila = criaFila();
	
	imprimeFila(fila);
	
	excluiEmail(fila);
	
	printf("Proximo email da fila: %s\n\n", consultaProxEmail(fila));
	
	insereEmail(email1, fila);
	insereEmail(email2, fila);
	insereEmail(email3, fila);
	insereEmail(email4, fila);
	
	imprimeFila(fila);
	
	excluiEmail(fila);
	printf("Proximo email da fila: %s\n\n", consultaProxEmail(fila));
	
	excluiEmail(fila);
	printf("Proximo email da fila: %s\n\n", consultaProxEmail(fila));
	
	imprimeFila(fila);
	return 0;
}
