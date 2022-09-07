//Faça um programa que pergunte ao usuário quantos valores ele deseja
//armazenar em um vetor de double, depois use a função MALLOC para reservar (alocar) o
//espaço de memória de acordo com o especificado pelo usuário. Esse vetor deve ter um
//tamanho maior ou igual a 10 elementos. Use este vetor dinâmico como um vetor comum,
//atribuindo aos 10 primeiros elementos do vetor valores aleatórios (usando a função
//rand() ) entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos
//do vetor.

#include <stdio.h>//Bibliotecas
#include <stdlib.h>
#include <time.h>
#define macro RAND_MAX //Gerando números aleatórios

int main(void){//função pricipal 

    int i;// Declarando as variáveis
    double tamanho, *vetor;

    printf("Informe o tamanho do vetor:\n");//Pedindo o tamanho do vetor
    scanf("%d", &tamanho);//Lendo e armarzenando o tamanho do vetor

    vetor = (double*)malloc(tamanho * sizeof(double));//Alocando dinamicamente

    printf("Intervalo da rand = [0,%d] \n", RAND_MAX);//avisando o intervalo de rand

    for(i = 0; i < 10; i++){//Laço para imprimir numeros aleatoreos fixos
        printf("Numero %d = %d \n", i, rand());//Mostrando usando rand
    }
    for(i = 1; i < tamanho; i++){//Laço para imprimir números aleatorios que foi pedido para o usuario
        printf("Numero %d = %d \n", i, rand());//Mostrando usando rand
    }

    free(vetor);//Liberando o vetor

    return 0;
}