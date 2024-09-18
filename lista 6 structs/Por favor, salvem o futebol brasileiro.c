#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define tam 50
#define tam_jog 16
    
    typedef struct{
        char nome[tam];
        char origem[tam];
        int ataque;
        int defesa;
        int custo;
        char time_compra[tam];
     }jogadores;

    typedef struct{
        char nome[tam];
        int dinheiro;
        char foco;
        int pont[tam];
    }times;

int main(){

int quant_t = 0, quant_j = 0, i = 0;
char vasco[] = "Vasco";
char ataque[] = "A";
char defesa[] = "D";
times time[tam];
jogadores jogador[tam];


    scanf("%d", &quant_t);

    for (i = 0; i < quant_t, i++){
        scanf(" %[^\n]", time[i].nome);
          if(strcmp(time[i].nome, vasco) == 0){
              strcpy(time[i].nome, "null");
              printf("Vasco nao tem salvacao, tomou 3 pro vitoria em casa\n");
              i = i - 1;
          }
        scanf(" %d %s", &time[i].dinheiro, time[i].foco);
    }

    scanf("%d", &quant_j);

    for (i = 0; i < quant_t, i++){
        scanf(" %s %s\n", jogador[i].nome, jogador[i].origem);
        scanf(" %d %d\n", &jogador[i].ataque, &jogador[i].defesa);
        scanf(" %d\n", &jogador[i].custo);
    }

    for(i = 0; i < quant_t, i++){
           for(int j = 0; j < quant_j, j++){
                if(time[i].dinheiro >= jogador[j].custo){
                        time[i].pont[j] = time[i].pont[j] + 1;
        }
  }
    for(i = 0; i < quant_t, i++){
       for(int j = 0; j < quant_j, j++){

            if(time[i].pont[j] == time[j].pont[j]){

            if(jogador[j].ataque > jogador[j].defesa){

                        for(int k = i; k <= j, k++){ 
                            if((strcmp(time[k].foco, ataque) == 0){
                                    strcpy(jogador[j].time_compra, time[k].nome);
                                                                  }
                            if((strcmp(time[k].foco, defesa) == 0){
                                    strcpy(jogador[j].time_compra, time[k].nome);
                                                                  }
                            
                                                   }
                                                       }     
                                         }
                                }
                

    
    for(i = 0; i < )


    return 0;
}
