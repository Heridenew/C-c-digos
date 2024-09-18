#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char nome[50];
int caracteres = 0, palavras = 0;
FILE *arq;

printf("Digite o caminho/nome do arquivo: ");
scanf(" %[^\n]", nome);

if((arq = fopen(nome, "r"))==NULL){printf("ERRO NA ABERTURA");exit(1);}

contagem(arq, &palavras, &caracteres);

printf("Quantidade de caracteres: %d\nQuantidade de palavras: %d\n\n", caracteres, palavras);
    
fclose(arq);
    return 0;
}

void contagem(FILE *arq, int *palavra, int *caracter){
    char aux;
    while (!feof(arq)){
          while ( !feof(arq) && (aux == ' ' || aux == '\n')){aux = fgetc(arq);} 
           if (!feof(arq)){
               *palavra = *palavra + 1;
               while (!feof(arq) && aux != ' ' && aux != '\n'){
                   *caracter = *caracter + 1;
                   aux = fgetc(arq);
           }
        }
    }
}
