#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int j = 0, quant_car = 0, quant_mot = 0, n1 = 0, n2 = 0;
char stringvencedor1[11], stringvencedor2[11];

/////Scanf's da quantidade de participantes das vagas dos carros e quais s�o...............................................................................................................
scanf(" %d", &quant_car);


char car[quant_car+1][11], aux1[11];


       for(int i = 0; i < quant_car;i++)
       {
               scanf(" %[^\n]", car[i] );

}
/////Scanf's da quantidade de participantes das vagas das motos e quais s�o...............................................................................................................
 scanf("%d", &quant_mot);


char mot[quant_mot + 1][11], aux2[11];

      for(int j = 0; j < quant_mot; j++)
      {
              scanf(" %[^\n]", mot[j] );
}

/////Scanf dos valores sorteados.......................................................................................................................
   scanf(" %d %d", &n1, &n2);
   n1 = n1-1;
   n2 = n2-1;
///// Ordena as strings dos Carros...............................................................................................................

for (int i = 0; i < quant_car ; i++) 
{ 
   for (int j = 0; j < quant_car ; j++) 
   {
      if (strcmp(car[i], car[j]) < 0) 
      {
         strcpy(aux1, car[i]);
         strcpy(car[i], car[j]);
         strcpy(car[j], aux1);
      }
   }
}
///// Ordena as strings das Motos...............................................................................................................
for (int i = 0; i < quant_mot ; i++) 
{ 
   for (int j = 0; j < quant_mot ; j++) 
   {
      if (strcmp(mot[i], mot[j]) < 0) 
      {
         strcpy(aux2, mot[i]);
         strcpy(mot[i], mot[j]);
         strcpy(mot[j], aux2);
      }
   }
}
  
/////Assimila��o do ganhador do carro
for(int u = 0; u <= n1; u++){
    strcpy (stringvencedor1, car[u]);
}
/////Assimila��o do ganhador da moto
for(int s = 0; s <= n2; s++){
    strcpy (stringvencedor2, mot[s]);
}

///// Compara��o dos vencedores e sa�das do c�digo...............................................................................................................
int toby = strcmp(stringvencedor1, stringvencedor2);

  if(toby != 0)
    {
           printf("Quem ganhou o carro foi: %s\n", stringvencedor1); 
           printf("Quem ganhou a moto foi: %s", stringvencedor2);
    }

    else
    printf("Quem ganhou tudo hoje foi %s", stringvencedor1);


	return 0;
}