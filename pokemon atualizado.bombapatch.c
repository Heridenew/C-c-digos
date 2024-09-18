#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{   
    char nome[30];   
    int ataque, defesa; 
}Pokemon;

typedef struct{   
    char nome[30];   
    Pokemon *pokebola;   
    int nPokemons, pontuacao; 
}Treinador;


Treinador *addTreinador(Treinador *treinadores, int qtdCompetidores, int qtdtemp){
              printf("Digite o nome do treinador: ");
              scanf(" %[^\n]", &*treinadores[qtdtemp].nome);
              printf("\n");
              realloc(treinadores , (qtdCompetidores + 1) * sizeof(Treinador));
              //realloc( , 68;
              return treinadores;
};



//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^Funções^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int main(){
int opc = 0, qtdet = 0, qtdetemp;
Pokemon pokemon;
Treinador *Treinadores;

Treinadores = calloc(sizeof(Treinador),1);

while(opc != 4 ){

    printf("1) Adicionar Competidor; 2) Adicionar Pokemon; 3) Batalhar; 4) Sair do programa\n");
        scanf("%d", &opc);
    if(opc == 0 || opc > 4){
        printf("Erro de seleção");
    };
   switch(opc){
        
        case 1:
            printf("Digite a quantidade de treinadores que vai adicionar: ");
            scanf("%d", &qtdetemp);
            for(int i = 0; i < qtdetemp; i++){
                addTreinador(&Treinadores, qtdet ,i);
            }

    }
   }

free(Treinadores);
    return 0;
}