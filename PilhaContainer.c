#include <stdio.h>
#define size 10


typedef struct {
    int tam;
    int topo;
    int *Containervet
}tp_pilha;

int pilha_vazia(tp_pilha *pilha){
    if(pilha->topo==-1){
        return 1;
    }
    else
        return 0;
}
void inserir(tp_pilha *pilha){
    int numeroContainer;
    pilha->tam++;

    pilha->Containervet = (int*) realloc(pilha->Containervet,pilha->tam*sizeof(int));

    printf("insira numero do container que sera adicionado:");
    scanf("%i",&numeroContainer);

    pilha->topo++;
    pilha->Containervet[pilha->topo]=numeroContainer;
}
void excluir(tp_pilha *pilha){
    if(!pilha_vazia(pilha)){
        pilha->Containervet[pilha->topo]=NULL;
        pilha->topo--;
    }
    else
        printf("pilha vazia!\n");
}

void listar(tp_pilha *pilha){
    int i;
    int n = pilha->tam;

    if(!pilha_vazia(pilha)){
        for(i=n-1;i>=0;i--){
            if(pilha->Containervet[i]!=0){
            printf("%i\n",pilha->Containervet[i]);
       }
    }
    }
    else
         printf("pilha vazia!\n");
}

main(void){

    char verifica;

     tp_pilha pilha={0,-1,0};

    while(verifica!='s'){
        printf("(i)nserir/(l)istar/(e)xcluir/(s)air: ");
        fflush(stdin);
        scanf("%c",&verifica);

        switch(verifica){
            case'i':
                inserir(&pilha);
                break;
            case'e':
                excluir(&pilha);
                break;
            case'l':
                listar(&pilha);
                break;
            default:
                return 0;
        }
   }

}
