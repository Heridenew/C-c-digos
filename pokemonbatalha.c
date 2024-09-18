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


Treinador *addTreinador(Treinador *treinadores, int *qtdCompetidores){
              printf("Digite o nome do treinador: ");
              scanf(" %[^\n]", &*treinadores[*qtdCompetidores].nome);
              printf("\n");
              *qtdCompetidores = *qtdCompetidores + 1;
              return treinadores;
};

Treinador *addPokemon(Treinador *treinadores, char *nomeTreinador, Pokemon pokemon, int qtdCompetidores, int *pos){
                        if(strcmp(nomeTreinador, treinadores[*pos].nome) == 0){
                            printf("Digite o nome do pokemon: ");
                            scanf(" %[^\n]", *pokemon[*pos].nome);
                            printf("Digite o ataque do pokemon: ");
                            scanf(" %d", *pokemon[*pos].ataque);
                            printf("Digite a defesa do pokemon: ");
                            scanf(" %d", *pokemon[*pos].defesa);
                            printf("Digite o slot do pokemon: ");
                            scanf(" %d", *treinadores[*pos].pokebola);
                            printf("\n");  
                        }
                    }
                return treinadores;
};

Treinador *removeTreinador(Treinador *treinadores, int *qtdCompetidores, int indexTreinador){
              free(treinadores[indexTreinador]);
              *qtdCompetidores--;
              return treinadores;
};

char *batalha(Treinador **treinadores, char *nomeCompetidor1, char *nomeCompetidor2, int indexPokemon1, int indexPokemon2, int *qtdCompetidores){
  int flag1 = 0, flag2 = 0;
                for(int i = 0; i < *qtdCompetidores; i++){
                    if(strcmp(*nomeCompetidor1, **treinadores[i].nome) == 0) {
                        flag = i;
                    }
                     if(strcmp(*nomeCompetidor2, **treinadores[i].nome) == 0) {
                        flag2 = i;
                    }
                }

                int batalha1 = (pokemon[indexPokemon1].defesa - pokemon[indexPokemon2].ataque)
                int batalha2 = (pokemon[indexPokemon2].defesa - pokemon[indexPokemon1].ataque)
                if(batalha1 > batalha2)
                   printf("O vencedor do duelo foi %s", nomeCompetidor1);
                else
                   printf("O vencedor do duelo foi %s", nomeCompetidor2);
};

int main(){
int opc = 0, qtdet = 0, qtd = 0, qtd2 = 0, flag = 0, poke1 = 0, poke2 = 0;
Treinador *nomeTreinador;
Pokemon poke;
char *name, *name2, *name3;

name = calloc(sizeof(char), 30);
name1 = calloc(sizeof(char), 30);
name2 = calloc(sizeof(char), 30);
nomeTreinador = calloc(sizeof(int), 100);

while(opc != 4 ){

    for(int i = 0; i < qtdet; i++){
        if(nomeTreinador[i].pontuacao == -5){ removeTreinador(nomeTreinador, &qtdet, i) ; }
    } 

    printf("1) Adicionar Competidor; 2) Adicionar Pokemon; 3) Batalhar; 4) Sair do programa\n");
    scanf("%d", &opc);

    if(opc == 0){
        printf("Erro de seleção");
    };

     switch (opc)
        {
            case 1:
            
                printf("Digite a quantidade de treinadores: ");
                scanf(" %d", &qtd);
                for(int i = 0; i < qtd; i++){
                    addTreinador(nomeTreinador,&i);
                    qtdet++;
                }
                return 0;
            

            case 2:
                    printf("Digite o nome do treinador: ");
                    scanf("%[^\n]", name);
                    for(int i = 0; i < qtdCompetidores; i++){
                        addPokemon(nomeTreinador, name , poke, qtdet, i);
                }
                return 0;
            case 3:
                    printf("Digite o nome do treinador 1: ");
                    scanf("%[^\n]", name1);
                    printf("Digite a posição do pokemon: ");
                    scanf(" %d", &poke1);
                    printf("Digite o nome do treinador 2: ");
                    scanf("%[^\n]", name2);
                    printf("Digite a posição do pokemon: ");
                    scanf(" %d", &poke2);

                 batalha(nomeTreinador, name1, name2, poke1, poke2, qtdet);
        }
 }

free(nomeTreinador);
free(name);
free(name1);
free(name2);
     return 0;
}
