#include <stdio.h>
#include <stdlib.h>
#include "EmailFilaCircular.h"

EmailFilaCircular* criar() {
  EmailFilaCircular* head = NULL;
  head = (EmailFilaCircular*) malloc(sizeof(EmailFilaCircular));

  head->proximo = NULL;

  return head;
}

void setEmail(EmailFilaCircular* head, char email[64]) {
  for(int i = 0; i < 64; i++) head->email[i] = email[i];
}

void inserir(EmailFilaCircular* head, char email[64]) {  

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

  while (ultimoEmail->proximo != head) {
    ultimoEmail = ultimoEmail->proximo;
  }

  EmailFilaCircular* temp = head;
  setEmail(head, head->proximo->email);
  head->proximo = head->proximo->proximo;
  ultimoEmail->proximo = head;

  printf("\nO email removido foi: %s", temp->email);
  
  temp = NULL;
  free(temp);
}

void imprimir(EmailFilaCircular* head) {
  if (head->proximo == head) {
    printf("\nA fila está vazia\n");
    return;
  }

  printf("\nA fila está assim:\n");

  EmailFilaCircular* atual = head;
  int posicao = 1;

  do {
    printf("(%d) - %s\n", posicao, atual->email);

    atual = atual->proximo;
    posicao++;
  } while (atual != head);

  atual = NULL;
  free(atual);
}