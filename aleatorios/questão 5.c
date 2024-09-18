#include <stdio.h>
#include <stdlib.h>
#define limite 50

typedef struct el_lista{
int valor;
struct el_lista *proximo;
}el_lista;

  int main(){

  int leitura, i = 0;
  el_lista lista[limite];
  int *proximo = NULL;
  proximo = calloc(limite, sizeof(int));
  
  
  do{
    scanf(" %d", proximo);
    leitura = *proximo;
    lista[i].valor = *proximo;
    ++proximo;
    printf("%d", lista[i].valor);
    i++;
    }
  while(leitura != 0);
  if(leitura = 0){
      printf("FIM :)");
  }
  free(proximo);

  return 0;
}