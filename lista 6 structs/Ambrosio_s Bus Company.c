#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define tam 31
#define nome_tam 51

typedef struct{
   int num_pass;
   char dat[tam];
   char orig[tam];
   char dest[tam];
   char horario[7];
   int cadeira;
   int idade;
   char nome[nome_tam];
}passageiro;

int main() {

passageiro passageiro[tam];
char pessoas_ac[tam][tam];
int i = 0, j = 0, gcount = 0, media_idades = 0, soma_idades = 0;

/*for(i=0; i < tam; i++) {
    passageiro[i].num_pass = 0;
    strcpy(passageiro[i].dat, "NULL");
    strcpy(passageiro[i].orig, "NULL");
    strcpy(passageiro[i].dest, "NULL");
    strcpy(passageiro[i].horario, "NULL");
    passageiro[i].cadeira = 0;
    passageiro[i].idade = 0;
    strcpy(passageiro[i].nome, "NULL");
}*/

for(int f = 0; f < 100; f++){

                scanf(" %d\n", &passageiro[i].num_pass);
                if(passageiro[i].num_pass == -1){
                        break;
                }
                scanf(" %[^\n]", passageiro[i].dat);
                scanf(" %[^\n]", passageiro[i].orig);
                scanf(" %[^\n]", passageiro[i].dest);
                scanf(" %[^\n]", passageiro[i].horario);
                scanf(" %d\n", &passageiro[i].cadeira);
                scanf(" %d\n", &passageiro[i].idade);
                scanf(" %[^\n]", passageiro[i].nome);
                i = i+1;
                gcount == i;          
   } 



for(int e = 0; e < gcount; e++){
       soma_idades = soma_idades + passageiro[e].idade;
}

        media_idades = (soma_idades) / gcount;

for(i = 0; i < gcount; i++){

        if( (passageiro[i].idade > media_idades) && (passageiro[i].cadeira % 2 == 0) )
        {
                strcpy(passageiro[i].nome, pessoas_ac[j]);  
                j = j + 1;

                }
        }
     


for(int l = 0; l < j ; l++){
        printf(" %s\n", pessoas_ac[j]);
}

	return 0;
}