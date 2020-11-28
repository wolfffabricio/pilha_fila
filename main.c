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

int main(int argc, char *argv[]) {
	char tituloMenuContainerVetor[60] = "\n(1) - Pilha de container (Vetor)";
	char tituloMenuContainerListaEncadeada[60] = "\n(2) - Pilha de container (Lista Encadeada)";
	char tituloMenuFilaCircular[60] = "\n(3) - Fila de email (Fila Circular)";
	char tituloMenuFilaListaEncadeada[60] = "\n(4) - Fila de email (Lista Encadeada)";

	int menu = 0;

  printf("%s", tituloMenuContainerVetor);
  printf("%s", tituloMenuContainerListaEncadeada);
  printf("%s", tituloMenuFilaCircular);
  printf("%s", tituloMenuFilaListaEncadeada);

  printf("\n\nEscolha uma opção: ");
  scanf("%d" , &menu);

  switch (menu) {

    case 1: break;

    case 2: break;

    case 3: menuEmailFilaCircular(); break;
    
    case 4: break;

  }
    
	return 0;
}
