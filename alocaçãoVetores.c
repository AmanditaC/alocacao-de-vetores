//Faça um programa que acha o maior e o menor inteiro dentro de um vetor de
//N inteiros, calcule a soma e imprime a soma. Fazer a alocação dinâmica do vetor e após
//seu uso liberar a memória alocada.

#include <stdio.h>//Biblioteca responsável pelas funções principais 
#include <stdlib.h>//Biblioteca responsável pela alocação

int main(){//Função principal

    int tamanho, i, j, soma, maior, menor, *vetor;//Declarando as variáveis

    printf("Informe um tamanho para o vetor:\n");//Pedindo o tamanho do vetor
    scanf("%d",&tamanho);//Lendo e armazenando o tamanho
    system("cls");//Apagando as informações anteriores

    vetor = (int *) malloc (tamanho * sizeof(int));//Alocando dinâmicamente o vetor

    for(i=0; i<tamanho; i++){//Laço para armazenar os valores do vetor
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &vetor[i]);

        system("cls");//Apagando as informações anteriores

        soma += vetor[i];//fazendo a soma dos valores do vetor
    }

    maior = *vetor;//Dizendo que a variável maior vai receber o vetor
    menor = *vetor;//Dizaendo que a variável menor vai receber o vetor

    for(j=0; j<tamanho; j++){//Laço para a verificação do maior e menor número dos vetores

        if(maior < *vetor + j){//Se tiver um n° maior no vetor 
            maior = *(vetor+j);//Maior vai receber o valor do vetor
        }
        if(menor < *vetor + j){//Se tiver um n° menor no vetor
            maior = *(vetor+j);//Menor vai receber o valor do vetor
        }
    }

    printf("SOMA = %d\nMAIOR = %d\nMENOR = %d\n", soma, maior, menor);//Imprimindo os valores da soma, do maior e do menor

    free(vetor);//Liberando a memória

    return 0;//Encerrando a função
}