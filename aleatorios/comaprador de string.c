#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int num = 0; 
char aux[20];

printf("digite sua quantidade de string:");
scanf(" %d", &num);

char string[num+1][21];

for(int f = 0; f < num ; f++){
    
       printf("digite sua string de valor %d: ", f);
       scanf(" %[^\n]", string[f]);
}

/////////////////////////////
for (int i = 0; i < num ; i++) 
{ 
   for (int j = 0; j < num ; j++) 
   {
      if (strcmp(string[i], string[j]) < 0) 
      {
         strcpy(aux, string[i]);
         strcpy(string[i], string[j]);
         strcpy(string[j], aux);
      }
   }
}
////////////////////////////
for(int f = 0; f < num ; f++){

       printf(" %s", string[f]);
}

    return 0;
    }