#ifndef EMAIL_FILA_CIRCULAR_H_INCLUDED
#define EMAIL_FILA_CIRCULAR_H_INCLUDED

typedef struct email {
  char email[64];
  struct email* proximo;
} EmailFilaCircular;

EmailFilaCircular* criar();

void inserir(EmailFilaCircular* head, char email[64]);

void remover(EmailFilaCircular* head);

void imprimir(EmailFilaCircular* head);

#endif
