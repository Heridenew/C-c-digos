#include <stdio.h>
#include <math.h>

int main(){
int  numero[100], escolha, potenciacao, radiciacao, soma, subtracao, divisao, multiplicacao;
double x, y;

printf("Digite quantos numeros voce quer operar: ");
scanf("%d", &numero);
printf("Digite qual operação voce quer fazer \n");
printf(" 1 - Soma\n 2 - Subtração \n 3 - Divisão\n 4 - Multiplicação\n 5 - Potenciacao\n 6 - Radiciacao\n");
scanf("%d", &escolha);

soma == x + y;
subtracao == x - y;
divisao == x / y;
multiplicacao == x * y;
x*x == potenciacao;
sqrt(x) == radiciacao;

for(numero>1;escolha<5){
switch(escolha){
 case '1':
 printf("Sua Soma tem valor: %d", soma);
  break;
 case '2':
 printf("Sua Subtracao tem valor: %d", subtracao);
  break;
 case '3':
 printf("Sua Divisao tem valor: %d", divisao);
  break;
 case '4':
 printf("Sua Multiplicacao tem valor: %d", multiplicacao);
  break;
    }
}

for (numero==1;escolha>=5){
switch(escolha){
  case '5':
 printf("Sua Potenciaçao tem valor: %d", potenciacao);
  break;
 case '6':
 printf("Sua Potenciaçao tem valor: %d", radiciacao);
  break;
}





}