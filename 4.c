/*Escrever um programa que lê um número não conhecido de valores, um de cada
vez, e conta quantos deles estão em cada um dos intervalos [0, 25 ), [25, 50), [50,
75 ) e [75, 100 ], escrevendo estas informações.*/

#include<stdio.h>

int main(){
    int i1,i2,i3,i4,valor;
    char s;

    printf("Digite -1 para sair\n");

    while(valor >0){
        printf("Digite um Valor: ");
        scanf("%d",&valor);
        if(valor >0 && valor <=25){
            i1++;
        }
        if(valor >25 && valor <=50){
            i2++;
        }
        if(valor >50 && valor <=75){
            i3++;
        }
        if(valor >75 && valor <=100){
            i4++;
        }
    }
    printf("(0>25): %d\n(25>50):%d\n(50>75): %d\n(75>100): %d\n", i1,i2,i3,i4);
}