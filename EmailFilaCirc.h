typedef struct EmailListaCirc {
	char endereco [64];
	struct EmailListaCirc seguinte;
} Email;

typedef struct FilaEncadeada {
	Email inicio;
	Email fim;
	int tamanho;
} Fila;

Fila* criaFila ();

void insereEmail (Email* email);

void excluiEmail (Email* email);


