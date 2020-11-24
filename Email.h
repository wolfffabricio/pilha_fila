#define emailTam 30;

typedef struct EmailListaCirc {
	char endereco [emailTam];
	struct EmailListaCirc seguinte;
} Email;

typedef struct 
