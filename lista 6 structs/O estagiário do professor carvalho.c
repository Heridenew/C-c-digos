#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define tam 50

typedef struct{
   char nome[tam];
   char tipo[4];
   int ataque;
   int defesa;
}pokemons;

int main() {
int x = 0, quant = 0, var1 = 0, var2 = 0, at_tot = 0, def_tot = 0, pk = 0;
char strlut[6] = "luta";
char strlist[6] = "list";
char type[tam];
char decisao[tam];
char tip_da_lis[tam][tam];
char *ponteiro;
pokemons pokemon[tam];
char poke1[tam], poke2[tam];

scanf("%d", &x);

for(int i = 0; i < 2; i++ ){
    scanf(" %[^\n]", pokemon[i].nome) ;
    scanf(" %[^\n]", pokemon[i].tipo) ;
    scanf("%d", &pokemon[i].ataque) ;
    scanf("%d", &pokemon[i].defesa);
    quant = quant + 1;
}
for(int i = 0; i < 100; i++ ){
    if(scanf(" %[^\n]", decisao) == 0) {
        break;
    }
  
    if( strcmp(decisao,strlut) == 0 ){
          scanf(" %s vs %s", poke1, poke2);
            for(int y = 0; y < quant; y++){
                if( strcmp(poke1, pokemon[y].nome) == 0 ){
                   var1 = y;
                }
                if( strcmp(poke2, pokemon[y].nome) == 0 ){
                   var2 = y;
                }
            }
             at_tot = (pokemon[var1].ataque - pokemon[var2].defesa);
             def_tot =  (pokemon[var2].ataque - pokemon[var1].defesa);
             if( at_tot > def_tot){
                 printf(" %s deitou %s na porrada\n", pokemon[var1].nome, pokemon[var2].nome);
        }
             if( at_tot < def_tot){
                 printf(" %s deitou %s na porrada\n", pokemon[var2].nome, pokemon[var1].nome);
        }
             if( at_tot == def_tot){
                 printf("parece que temos um empate\n");
        }
    }
        else if (strcmp(decisao,strlut) != 0) {

                    ponteiro = strstr(decisao, strlist);

                    if(ponteiro){
                        type[tam] =  '*ponteiro*(ponteiro+1)*(ponteiro+2)';

                        for(int y = 0; y < quant; y++){

                            if( strcmp(type, pokemon[y].tipo) == 0 ){
                                strcpy(tip_da_lis[pk][tam], pokemon[y].nome);  
                                pk = pk+1;
                                }
                             }
                              
                            }
                            for(int y = 0; y < quant; y++){
                                printf("%s ", tip_da_lis[y][tam]);
                            }   
                 }   
                 
        else{
        scanf( strcpy(decisao, pokemon[i].nome) );
    }

    scanf(" %[^\n]", pokemon[i].tipo) ;
    scanf("%d", &pokemon[i].ataque) ;
    scanf("%d", &pokemon[i].defesa) ;
    quant = quant + 1;
}





	return 0;
}