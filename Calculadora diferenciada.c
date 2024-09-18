/*
Autor: Edenn Weslley
Data: 02/02/2022
    love you, reader
*/

#include <stdio.h>

int main(){
int a, b, c;


printf("Bem vindo a Calculadora Diferenciada \n");
printf("Iremos calcular duas dezenas com base na propriedade: a + b = c e C x C = ab \n");
printf("Digite dois números para nosso cálculo(ex: 20 e 10):");
scanf("%d %d", &a, &b);

if(10 <= b <= 99 && 10 <= a <= 99){
if((a*b)/100 == a && (a%b)/100 == b)
printf("A é %d, B é %d, A+B é %d e C.C é %f\n", a, b, c);
}
else 
printf("Seus valores não satisfazem a propriedade\n");

    return 0;
}



 