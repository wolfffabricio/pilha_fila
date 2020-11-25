typedef struct Email {
	char endereco [64];
	struct EmailEncad seguinte;
} Email;

typedef struct Fila {
	Email inicio;
	Email fim;
	int tamanho;
} Fila;

Email* criaEmail(char endereco[64]);

Fila* criaFila ();

void insereEmail (Email* email, Fila* fila);

void excluiEmail (Email* email, Fila* fila);

char* consultaProxEmail (Fila* fila);

void apagaFila (Fila* fila);


