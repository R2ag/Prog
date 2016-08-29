#include<stdio.h>
#include<stdlib.h>


void menu(){
    printf("Menu:\n\n\n");
    printf("1 - Adicionar elementos\n");
    printf("2 - Listar elementos\n");
    printf("3 - Remover elementos\n");//Será implementado futuramente
    printf("0 - Sair\n");
}
void adicionarElementos(int *vetor){
    char cont;
    do{
        cont = 's';
        vetor = realloc(vetor,() )
        printf("Deseja continuar adicionando elementos?(s/n)\n");
    }while(cont == 's');
}

void listarElementos(int *vetor, int t){
    int i;
    printf("Elementos: ")
    for (i = 0; i< t-1; i++)
        printf("%d ", vetor[i]);
}

void removerElementos(){
    printf("Em desenvolvimento!");

}
int lerElemento(){
    int elemento = -1;
    printf("Elemento: ");
    scanf("%d", elemento);
    return elemento;
}
int verificarTamanho(){

}

int main(){
    int op, elemento, tamanho;
    int *v;
    v = (int *) malloc(0 * sizeof(int));

    do{
        menu();
        scanf("%d", &op);
        system("cls");

        switch (op){
            tamanho = verificarTamanho();
            case 1:
                elemento = lerElemento();
                adicionarElementos(v, elemento, tamanho);
                break;
            case 2:
                listarElementos(v, tamanho);
                break;
            case 3:
                removerElementos();
                break;
            default:
                break;
        }

    }while(op!=0);

}
