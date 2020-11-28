#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "EmailFilaCircular.h"

EmailFilaCircular* criar() {
  EmailFilaCircular* head = NULL;
  head = (EmailFilaCircular*) malloc(sizeof(EmailFilaCircular));

  head->proximo = NULL;

  return head;
}

void setEmail(EmailFilaCircular* head, char email[TamanhoEmail]) {
	strcpy(head->email, email);
}

void inserir(EmailFilaCircular* head, char email[TamanhoEmail]) {  

  if (head->proximo == NULL) {
    setEmail(head, email);
    head->proximo = head;

    return;
  }

  EmailFilaCircular* atual = head;

  while (atual->proximo != head) {
    atual = atual->proximo;
  }

  EmailFilaCircular* novoEmail = criar();
  setEmail(novoEmail, email);

  atual->proximo = novoEmail;
  novoEmail->proximo = head;
}

void remover(EmailFilaCircular* head) {
  EmailFilaCircular* ultimoEmail = head;

  if (head->proximo == head) {
    head->proximo = NULL;
    setEmail(head, "");

    return;
  }

  while (ultimoEmail->proximo != head) {
    ultimoEmail = ultimoEmail->proximo;
  }

  char emailRemovido[TamanhoEmail];
  strcpy(emailRemovido, head->email);

  setEmail(head, head->proximo->email);
  head->proximo = head->proximo->proximo;
  ultimoEmail->proximo = head;

  printf("\nO email removido foi: %s", emailRemovido);
}

void listarFila(EmailFilaCircular* head) {
  if (head->proximo == NULL) {
    printf("\nA fila está vazia\n");
    return;
  }

  printf("\nEmails na fila:\n");

  EmailFilaCircular* atual = head;
  int posicao = 1;

  do {
    printf("%d - %s\n", posicao, atual->email);

    atual = atual->proximo;
    posicao++;
  } while (atual != head);

  printf("\n\n");

  atual = NULL;
  free(atual);
}

void menuEmailFilaCircular() {

  int op = 0;
  EmailFilaCircular* fila = criar();
  char email[TamanhoEmail];

  do {
    printf("\n(1) - Inserir\n(2) - Remover\n(3) - Listar fila\n(4) - Sair");

    printf("\n\nEscolha uma opção: ");
    scanf("%d" , &op);

    switch(op) {

      case 1:
        printf("\nDigite o email: ");
        scanf("%s" , email);

        inserir(fila, email);
      break;

      case 2:
        remover(fila);
      break;

      case 3:
        listarFila(fila);
      break;
      
      case 4:
        printf("\nSaindo");
      break;

      default:
        printf("\nOpção inválida");
      break;

    }
    
  } while (op != 4);

}