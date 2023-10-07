#include<stdio.h>

main(){

    int valores[10], maiorValor=0, posicao=0;

    for(int i = 0; i <10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);

        if(valores[i] > maiorValor ){
            maiorValor = valores[i];
            posicao = i;
        }
    }
   
       printf("O maior valor e: %d \nPosicao: %d", maiorValor, posicao);
}



