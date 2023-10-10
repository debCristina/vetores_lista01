#include<stdio.h>
#define TAM 15

main(){

    float notas[TAM], mediaGeral,soma=0; 

    for(int i = 0; i <TAM; i++){
        printf("\nNota do aluno %d: ", aluno);
        scanf("%f", &notas[i]);
        soma+= notas[i];
    }

    mediaGeral= soma / TAM;
    printf("Media Geral da turma: %.2f", mediaGeral);
}




