//Implemente uma função que preencha um vetor alocado dinamicamente de N
//elementos com valores inteiros fornecidos pelo o usuário, de modo que, à medida que um
//novo elemento é inserido, o vetor já permaneça organizado de maneira ordenada
//crescente. Escreva um programa que utiliza esta função, que deve obedecer ao seguinte
//protótipo: void preenche_ordenado(int n, int *v);

#include <stdio.h>//Bibliotecas
#include <stdlib.h>

void preenche_ordenado(int n, int *v);//Declaraçõa do protótipo da função principal

int main(){//Função principal
     
     int n, *v;//Declaração das variáveis

     printf("Informe o tamanho do vetor:\n");//Pedindo o tamanho da matriz
     scanf("%d", &n);
     
     system("cls");//Limpando as informações inseridas anteriormente

     v = (int*)malloc(n*sizeof(int));//Fazendo a alocação dinâmica         

     preenche_ordenado(n, &v);//Chamando a função secundária para a principal

     free(v);//Liberando o vetor

     return 0;
}

void preenche_ordenado(int n, int *v){//Função secunária

     int i, j, aux;//Declarando variáveis

     for(i = 0; i < n; i++){//Laço para preencher o vetor

          printf("Informe o valor %d do vetor:\n", i+1);
          scanf("%d", &v[i]);
          
          system("cls");
     }

     for(i = 0; i < n; i++){//Laço para organização dos valores do vetor
          for(j = i+1; j < n; j++){
               if(v[i]>v[j]){//Se o vetor i for maior que o j
                    aux = v[i];//auxiliar vai receber o vetor i
                    v[i] = v[j];//vetor i vai receber o vetor j
                    v[j] = aux;//vetor j vai receber o auxiliar
               }
          }
     }
     for(i = 0; i < n; i++){//Laço para mostrar os valores do vetor organizado
          printf("%d\n", *(v+i));
     }

}