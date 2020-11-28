#ifndef EMAIL_FILA_CIRCULAR_H_INCLUDED
#define EMAIL_FILA_CIRCULAR_H_INCLUDED
#define TamanhoEmail 64

typedef struct email {
  char email[TamanhoEmail];
  struct email* proximo;
} EmailFilaCircular;

EmailFilaCircular* criar();

void inserir(EmailFilaCircular* head, char email[64]);

void remover(EmailFilaCircular* head);

void listarFila(EmailFilaCircular* head);

void menuEmailFilaCircular();

#endif
