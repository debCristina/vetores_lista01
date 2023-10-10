#include<stdio.h>

main(){

    float notas[15], mediaGeral,soma=0; 

    for(int i = 0; i <15; i++){
        printf("\nNota do aluno %d: ", aluno);
        scanf("%f", &notas[i]);
        soma+= notas[i];
    }

    mediaGeral= soma / 15;
    printf("Media Geral da turma: %.2f", mediaGeral);
}




