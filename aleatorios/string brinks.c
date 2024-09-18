#include <stdio.h>
#include <string.h>

int main(){
char string2[15] = "Jorge Lucas ";

int tam;

printf("Digite o tamanho da sua palavra: ");
scanf("%d", &tam);
char string[tam+1];

printf("Digite sua palavra: ");
scanf("%s", string);

int toby = strcmp(string, string2);
    if(toby != 0)
    {

        strcat(string2,string);
        printf("Sua palavra foi %s\n", string2); 
        printf("O tamanho da sua palavra foi %ld ", strlen(string2));

    }
    else
    printf("Palavras iguais cmpç?\n '%s' e '%s'", string, string2);
    
return 0;
}