/*Escrever um programa que lê 10 valores, um de cada vez, e conta quantos deles
estão no intervalo [ 10, 20 1 e quantos deles estão fora deste intervalo, escrevendo
estas informações.*/

#include<stdio.h>

int main(){
    int i, intervalo, fora_intervalo, valor;

    intervalo=0;
    fora_intervalo =0;

    for(i=0;i<10;i++){
        printf("Digite um Valor: ");
        scanf("%d", &valor);
        if(valor >10 && valor <20){
            intervalo++;
        } else{
            fora_intervalo++;
        }
    }
    printf("Dentro do Intervalo: %d\nFora do Intervalo: %d", intervalo,fora_intervalo);
}