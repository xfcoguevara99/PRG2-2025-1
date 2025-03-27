#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char nome[80];
    int idade;    
}pessoa;    

int main(){
    FILE *arquivo;
    pessoa p;
    int contador=0;
    if ((arquivo = fopen("contatos.bin", "rb")) != NULL) {
        while (!feof(arquivo)) {
            fread(&p, sizeof(p), 1, arquivo);
           
            if (!feof(arquivo)) {
                printf("nome: %s\t idade: %d\n",p.nome, p.idade);
                contador++;
            }
    }
    }else{
        fprintf(stderr, "Erro: arquivo nao pode ser aberto\n");
        exit(EXIT_FAILURE);
    }
    printf("Numero de contatos: %d",contador);
    fclose(arquivo);
    return 0;
}