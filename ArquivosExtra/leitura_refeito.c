#include <stdio.h>
#include <stdlib.h>
#include "declaracao_funcoes.h"

void leitura(){
    FILE *arquivo;
    char linhas[64],*resultado;
    int contador=1;
    arquivo = fopen("C:/Users/paola/Desktop/Fran/programacion/C/PRG2-2025-1/ArquivosExtra/documento.txt","rt");
    if (arquivo != NULL){
        while(!feof(arquivo)){
            resultado = fgets(linhas,64,arquivo);
            printf("Linha numero %d: %s\n",contador,linhas);
            contador++;
        }     
    }else{
        printf("Nao foi possivel abrir o arquivo");
    }
    fclose(arquivo);
}