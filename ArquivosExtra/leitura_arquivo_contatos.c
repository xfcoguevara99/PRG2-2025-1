#include <stdio.h>
#include <stdlib.h>
#include "declaracao_funcoes.h"
typedef struct
{
    char nome[80];
    int idade;    
}pessoa;    

int contatos(){
    FILE *arquivo;
    pessoa p;
    int contador=0;
    arquivo = fopen("C:/Users/paola/Desktop/Fran/programacion/C/PRG2-2025-1/ArquivosExtra/contatos.bin", "rb");
    printf("tamanho de p: %zu",sizeof(p));
    if (arquivo !=NULL) {
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
    printf("Numero de contatos: %d\n",contador);
    fclose(arquivo);
    return 0;
}