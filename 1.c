#include<stdio.h>

int main(){
    
    int valor,contador, numeros;

    numeros =0;

    while(numeros < 5 ){
        printf("Digite um Numero: ");
        scanf("%d", &valor);
        if(valor < 0){
            contador ++;
            numeros++;
        }
        else{
            numeros++;
        }
        
    }
    printf("%d", contador);
}