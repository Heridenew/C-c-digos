#include <stdio.h>
#include <string.h>
#define tam 40

int main(){
char receb[tam];
char nome[tam] = " anne";
char aux[tam];


scanf(" %[^\n]", receb);
strcat(receb , nome);

printf(" %s", receb);




    return 0;
}