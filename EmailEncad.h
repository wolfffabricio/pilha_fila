typedef struct EmailEncad {
	char endereco [64];
	struct EmailEncad seguinte;
} Email;

typedef struct FilaEncadeada {
	Email inicio;
	Email fim;
	int tamanho;
} Fila;

Fila* criaFila ();

void insereEmail (Email* email, Fila* fila);

void excluiEmail (Email* email, Fila* fila);

Email* consultaProxEmail (Fila* fila);

void apagaLista (Lista* lista);


