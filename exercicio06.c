#include<stdio.h>

main(){
    int valores[10], maiorValor=0, menorValor;
    
    menorValor = valores[10];

    for(int i = 0; i <10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);

        maiorValor = valores[0];
        menorValor = valores[0];

        if(valores[i] > maiorValor){
            maiorValor = valores[i];
        }
        if(valores[i] < menorValor){
            menorValor= valores[i];
        }
    }
    printf("Maior valor: %d", maiorValor);
    printf("\nMenor valor: %d", menorValor);
     
}