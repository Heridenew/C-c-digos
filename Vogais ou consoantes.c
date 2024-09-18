#include <stdio.h>
#include <conio.h>

int main(){
char letra;

printf("Digite sua letra:");
scanf("%c",&letra);
switch( letra ){
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':

        printf("É uma vogal, é a %c \n", letra);
                break;

default:
printf("é uma consoante, é %c \n", letra);
}

system("pause");
return 0;
}