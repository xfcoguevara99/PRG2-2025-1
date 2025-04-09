#include <stdlib.h>
#include <string.h>
void problema1(){
    int *ponteiro, numero = 100;
    *ponteiro = numero;
    printf("Valor do numero: %d",*ponteiro);
}

void problema2(){
    int arranjo[3] = {5,8,9};
    int *ponteiro;
    ponteiro = &arranjo[0];
    for (int i=1;i<=sizeof(arranjo)/sizeof(int);i++){
        printf("Valor %d do arranjo: %d\n",i,arranjo[i-1]);
    }
}
void problema3(int *ponteiro){
    *ponteiro = 50;
}
void problema4(){
    int *array = malloc(4*sizeof(int));
    //array = malloc(4*sizeof(int));
    for (int i=0;i<4;i++){
        printf("Entre com os 4 valores do arranjo: ");
        scanf(" %d",&array[i]);
    }
    for (int i=1;i<=4;i++){
        printf("Valor %d do arranjo: %d\n",i,array[i-1]);
    }

}
void problema4_1(){
    int *array;
    //array = malloc(20);
    array = calloc(5,sizeof(int));
    if (array != NULL)
    {
        printf("Alocacao feita com sucesso");

    }else{
        printf("Nao foi possivel fazer a alocacao");
    }
    
    for (int i=0;i<4;i++){
        printf("Entre com os valores do arranjo: ");
        scanf(" %d",&array[i]);
    }
    for (int i=1;i<=5;i++){
        printf("Valor %d do arranjo: %d\n",i,array[i-1]);
    }
    free(array);

}

void problema5(int *a,int *b){
    int c = *a;
    printf("Antes -> numero1: %d, numero2: %d\n",*a,*b);
    *a = *b;
    *b = c;
    printf("Despues -> numero1: %d, numero2: %d",*a,*b);
}

void problema6(){
    char string[] = "Ola mundo";
    for (int i=0;i<sizeof(string)/sizeof(char);i++){
        printf("%c\n",string[i]);
    }
}

void problema7(){
    int **vetor1,*vetor2,a=5,**ponteiro_array,array[50];
    *ponteiro_array = &array[0];
    printf("Conteudo do vetor: %d\n",vetor2[0]);
    printf("Tamanaho do vetor: %zu\n",sizeof(vetor2));
    vetor2 = calloc(7,sizeof(int));
    printf("Tamanaho do vetor depois de alocar memoria: %zu\n",sizeof(*vetor2));
    printf("Conteudo do vetor: %d\n",vetor2[7]);
    printf("Tamanaho do vetor: %zu\n",sizeof(array));
    ponteiro_array = calloc(100,sizeof(int));
    printf("Tamanaho do vetor depois de alocar memoria: %zu\n",sizeof(*ponteiro_array));
    printf("Tamanaho %d\n",*ponteiro_array[0]);



    free(vetor2);



}

void teste_string(){
    //EXEMPLO STRSTR()
    char * ponteiro;
    char fonte[] = "Programa de Ensino e Tutoria - Ensino BCC";
    char comparacao[] = "Ensino";

    printf("String 'fonte':\n%s\n\n", fonte);
    printf("Substring 'comparacao':\n%s\n\n", comparacao);
        
    ponteiro = strstr(fonte, comparacao);
        
    if(ponteiro != NULL){
        printf("Substring encontrada!\n");
        printf("Substring inicia na posição %ld\n", ponteiro - fonte);
    } else {
        printf("Substring não encontrada!\n");
    }
    
 

}
void teste2_string(){
    char fonte[] = "*-Programa.*-- de.. Ensino  .  e Tutoria.BCC UFSCar. -Programa",frase_nova[128],espacio[]= " ",palavra[]="Programa";
    char delimitadores[] = " .-*";
    int contador=0;
        
    printf("String 'fonte':\n%s\n\n", fonte);
    printf("String 'delimitadores':\n%s\n", delimitadores);
        
    char * resultado = strtok(fonte, delimitadores);    //Primeira chamada
        
    while(resultado != NULL){
        if(strcmp(resultado,palavra)==0){
            contador++;
        }
        strcat(frase_nova,resultado);
        strcat(frase_nova,espacio);
        printf("%s\n", resultado);
        /* Segunda chamada, função utiliza fonte anterior
        e parte do ponteiro final adicionado anteriormente */
        resultado = strtok(NULL, delimitadores);
    }
    printf("\ncontador de palavra na frase: %d",contador);

    printf("\nfrase nova: %s",frase_nova);
}