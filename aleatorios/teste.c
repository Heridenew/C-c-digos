#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int j = 0, quant_car = 0, quant_mot = 0, n1 = 0, n2 = 0;
char stringvencedor1[11], stringvencedor2[11];

/////Scanf's da quantidade de participantes das vagas dos carros e quais são...............................................................................................................
scanf("%d \n", &quant_car);
quant_car = quant_car+1;

char car[quant_car][11], aux1[11];
car[quant_car][11] = '\0';

       for(int i = 0; i < quant_car-1;i++)
       {
               scanf(" %s", car[i] );

}
/////Scanf's da quantidade de participantes das vagas das motos e quais são...............................................................................................................
 scanf("%d \n", &quant_mot);
 quant_mot = quant_mot+1;

char mot[quant_mot][11], aux2[11];
mot[quant_mot][11] = '\0';
      for(int j = 0; j < quant_mot-1; j++)
      {
              scanf(" %s", mot[j] );
}

/////Scanf dos valores sorteados.......................................................................................................................
   
///// Ordena as strings dos Carros...............................................................................................................
for (int i = 0; i < quant_car; i++) 
{ 
   for (int j = 0; j < quant_car; j++) 
   {
    
      if (strcmp(car[j], car[i]) >= 0) 
      {
         strcpy(aux1, car[j]);
         strcpy(car[j], car[i]);
         strcpy(car[i], aux1);
      }
   }
}
///// Ordena as strings das Motos...............................................................................................................
for (int i = 0; i < quant_car; i++) 
{ 
   for (int j = 0; j < quant_car; j++) 
   {
    
      if (strcmp(mot[j], mot[i]) < 0) 
      {
         strcpy(aux1, mot[i]);
         strcpy(mot[i], mot[j]);
         strcpy(mot[j], aux1);
      }
   }
}
for (int i = 0; i < quant_mot; i++) 
{ 
 printf(" %s", car[i]);
}
 printf(" \n");
for (int i = 0; i < quant_mot; i++) 
{ 
 printf(" %s", mot[i]);
}





	return 0;
}