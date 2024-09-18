#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define tam 16
    
typedef struct{
    char clube[tam];
    float valor;
    int grandesj;
    int titulos;
    char ney[3];
    char fla[3]; 
    float pont;
}times;

int main() {
int giros = 0; 
float aux2 = 0.0;
char sim[] = "sim";
char aux1[tam];
char flamengo[] = "Flamengo 2019";
times clubes[tam];


/*for(int x = 0; x < 100; x++){
    clubes[x].valor = 0.0;
    clubes[x].grandesj = 0;
    clubes[x].titulos = 0;
    clubes[x].pont = 0.0;
}*/

    scanf(" %d", &giros);
   
for (int i = 0; i < giros; i++){
       scanf(" %[^\n]", clubes[i].clube);
       scanf("%f %d %d", &clubes[i].valor, &clubes[i].grandesj, &clubes[i].titulos);
       scanf(" %[^\n]", clubes[i].ney);
       scanf(" %[^\n]", clubes[i].fla);
}

for(int i = 0; i < giros; i++){
    clubes[i].pont = clubes[i].valor + (clubes[i].grandesj * 100) + (clubes[i].titulos * 2000);
}

for(int i = 0; i < giros; i++){
    if(strcmp(clubes[i].ney, sim) == 0){
        clubes[i].pont = clubes[i].pont + 10000;
    }
    if(strcmp(clubes[i].fla, sim) == 0){
        clubes[i].pont = clubes[i].pont + 20000;
    }
}
for(int i = 0; i < giros; i++){
    for(int j = 0; j < giros; j++){
         if(clubes[i].pont > clubes[j].pont){

            strcpy(aux1 , clubes[i].clube);
            aux2 = clubes[i].pont; 
            strcpy(clubes[i].clube, clubes[j].clube);
            clubes[i].pont = clubes[j].pont;
            strcpy(clubes[j].clube, aux1);
            clubes[j].pont = aux2;
         }
    }
}

 for(int i = 0; i < giros; i++){
        if(strcmp(flamengo, clubes[i].clube) == 0){
                strcpy(aux1 , clubes[i].clube);
                aux2 = clubes[i].pont; 

                strcpy(clubes[i].clube, clubes[0].clube);
                clubes[i].pont = clubes[0].pont;

                strcpy(clubes[0].clube, aux1);
                clubes[0].pont = aux2;
        }
        
    }


for(int i = 0; i < giros; i++){
        printf("%s %.2f\n", clubes[i].clube, clubes[i].pont);
}
    	return 0;
    }