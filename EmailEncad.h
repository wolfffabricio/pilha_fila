typedef struct Email {
	char endereco [64];
	struct Email* seguinte;
} Email;

typedef struct Fila {
	struct Email* inicio;
	struct Email* fim;
	int tamanho;
} Fila;

Email* criaEmail(char endereco[64]);

Fila* criaFila();

void insereEmail (Email* email, Fila* fila);

void excluiEmail (Fila* fila);

char* consultaProxEmail (Fila* fila);

void apagaFila (Fila* fila);

void imprimeFila(Fila* fila);

