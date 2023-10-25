/*Escrever um programa que lê 5 valores para a, um de cada vez, e conta quantos
destes valores são negativos, escrevendo esta informação.*/


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