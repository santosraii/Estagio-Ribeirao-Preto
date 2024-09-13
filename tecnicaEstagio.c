#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int quadradoPerf(int n){
    
    int x = (int) sqrt(n);
    return (x*x == n);
}

int questao1(int n){
    return quadradoPerf(5*n*n - 4) || quadradoPerf(5*n*n + 4);
}

int questao2(const char *str){

    int ocorr = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'A'){
            ocorr++;
        }
    }
    return ocorr;
}

int main(){

    //questao 1: Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
    int n = 57;

    if(questao1(n)){
        printf("O número %d pertence à sequencia de fibonacci. \n", n);
    } else{
        printf("O número %d não pertence à sequencia de fibonacci. \n", n);
    }

//questao2: Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.
    const char *frase = "A bolsa de Ana é bonita AAAaaa";

    if(questao2(frase) > 0){
        printf("A frase tem %d letras 'a' ou 'A'.\n", questao2(frase));
        }else{
            printf("A frase não tem letras 'a' ou 'A'.\n");
        }
    
//questao3:Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA); Ao final do processamento, qual será o valor da variável SOMA?
    int indice = 12;
    int soma = 0;
    int k = 1;
    while(k < indice){
        k++;
        soma += k;
    }
    printf("%d\n", soma);


//questao4
/*
a) 1, 3, 5, 7, : 9, diferenca de 2
b) 2, 4, 8, 16, 32, 64, : 128,  razao de 2
c) 0, 1, 4, 9, 16, 25, 36, : 49, quadrados perfeitos
d) 4, 16, 36, 64, : 100, quadrados perfeitos de numeros pares
e) 1, 1, 2, 3, 5, 8, : 12, sequencia de fibonacci
f) 2,10, 12, 16, 17, 18, 19, : 20
*/

//questao5
/*
Ligar um interruptor e deixar aceso por alguns minutos.
Apagar o primeiro e ligar o segundo
Ir ate uma das salas, se estiver aceso, é o interruptor 2, se estiver apagado e quente, é o interruptor 1
se estiver apagado e frio é o 3 */
    return 0;
}