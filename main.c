#include <stdio.h>
#include <stdlib.h>
#include "EmailFilaCircular.h"

/* 
Parte 1
PESQUISE UM USO REAL DE PILHA EM PROBLEMAS COM ALGORITMOS
APRESENTE O PROBLEMA
IMPLEMENTE O PROBLEMA EM C USANDO AMBAS AS FORMAS (OU IMPLEMENTE UM PROBLEMA PARA CADA FORMA):
-VETOR
-LISTA ENCADEADA (CRIAR UM TAD PILHA COM AS FUN��ES DEFINIDAS ANTERIORMENTE) 

Parte 2
PESQUISE UM USO REAL DE FILAS EM PROBLEMAS COM ALGORITMOS
APRESENTE O PROBLEMA
IMPLEMENTE O PROBLEMA EM C USANDO AMBAS AS FORMAS (OU IMPLEMENTE UM PROBLEMA PARA CADA FORMA):
-FILA CIRCULAR
-LISTA ENCADEADA (CRIAR UM TAD FILA COM AS FUN��ES DEFINIDAS ANTERIORMENTE) 
*/

void EmailFilaCircularTestes() {
	EmailFilaCircular* fila = criar();

	inserir(fila, "example@live.com");
	inserir(fila, "example2@live.com");
	inserir(fila, "example3@live.com");
	inserir(fila, "example4@live.com");
	inserir(fila, "example5@live.com");

	imprimir(fila);

	remover(fila);
	
	imprimir(fila);

	inserir(fila, "example55@live.com");

	imprimir(fila);

	remover(fila);

	imprimir(fila);
}

int main(int argc, char *argv[]) {
	EmailFilaCircularTestes();

	return 0;
}
