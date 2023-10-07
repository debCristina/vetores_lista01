#include<stdio.h>

main(){

    float notas[15], mediaGeral; 
    int soma=0, aluno=1; 

    for(int i = 0; i <15; i++){
        printf("\nNota do aluno %d: ", aluno);
        scanf("%f", &notas[i]);
        aluno ++;
        soma+= notas[i];
    }

    mediaGeral= soma / 15;
    printf("Media Geral da turma: %.2f", mediaGeral);
}




