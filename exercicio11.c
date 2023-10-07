#include<stdio.h>

main(){

    int valores[10], numNegativo=0, somaPositivo=0;


    for(int i = 0; i < 10; i ++){
        printf("Digite um numero: ");
        scanf("%d", &valores[i]);

        if(valores[i] < 0 ){
            numNegativo ++;
        }
        if(valores[i] > 0){
            somaPositivo += valores[i];
        }
    }
    
    printf("Numeros negativos: %d", numNegativo);
    printf("\nSoma dos numeros positivos: %d", somaPositivo);
}