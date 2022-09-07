//Escreva um algoritmo que solicita ao usuário a quantidade de alunos de
//uma turma e aloca um vetor de notas (números reais). Depois de ler as notas, imprime a
//média aritmética. Obs: não deve ocorrer desperdício de memória; e após ser utilizada a
//memória deve ser liberada.

#include <stdio.h>//Biblioteca responsável pelas funções principais
#include <stdlib.h>//Biblioteca responsável pela alocação

int main(){//Função principal

    int quantidade_alunos, i;//Declaração das variáveis
    float *notas, soma, media;

    printf("Informe a quantidade de alunos:\n");//Pedindo a quantidade de alunos    
    scanf("%d",&quantidade_alunos);//Lendo e armazenando a quantidade de alunos

    notas = (float*) malloc (quantidade_alunos * sizeof(float));//Fazendo a alocação dinâmica
    
    for(i=0;i<quantidade_alunos;i++){//Laço para ler e armazenar as notas dos alunos
        printf("Informe a nota do aluno %d:\n", i+1);
        scanf("%f",&notas[i]);//Lendo e armazenando a nota do aluno no vetor

        soma +=notas[i];//Fazendo a soma das notas de todos os alunos
    }

    media = soma/quantidade_alunos;//Fazendo a media das notas de todos os alunos

    printf("SOMA = %1.f\nMEDIA = %1.f", soma, quantidade_alunos);//Imprimindo o resultado da soma e da media das notas dos alunos

    free(notas);//Liberando a memória

    return 0;//Encerrando a função principal
}