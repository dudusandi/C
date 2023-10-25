/*Escrever um programa que gera e escreve os 
números ímpares entre 100 e 200. */


#include<stdio.h>

int main(){
    int numero;

    numero =100;

    while(numero >=100 && numero <=200){
        if(numero %2 != 0){
        printf("%d\n", numero);
        numero++;
        } else {
        numero++;
        }
    }
}