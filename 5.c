#include<stdio.h>

int main(){
    float valor,valor1,valor2,valor3,valor4,media1,media2,media3,media4,i1,i2,i3,i4;


    printf("Digite -1 para sair\n");

    while(valor >0){
        printf("Digite um Valor: ");
        scanf("%f",&valor);
        if(valor >0 && valor <=25){
            i1++;
            valor1 += valor;
        }
        else if(valor >25 && valor <=50){
            i2++;
            valor2 += valor;
        }
        else if(valor >50 && valor <=75){
            i3++;
            valor3 += valor;
        }
        else if(valor >75 && valor <=100){
            i4++;
            valor4 += valor;
        }
    }
    media1 = valor1 /i1;
    media2 = valor2/ i2;
    media3 = valor3/ i3;
    media4 = valor4 /i4;

              
    printf("(0>25): %f\n(25>50):%f\n(50>75): %f\n(75>100): %f\n", i1,i2,i3,i4);
    printf("(0>25): %f\n(25>50):%f\n(50>75): %f\n(75>100): %f\n", media1,media2,media3,media4);
}