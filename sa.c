#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int num, i;
int soma = 0;

for( i = 0 ; i<10 ; i++){
printf("Digite o %do numero: ", i+1);
scanf("%d", &num);
soma = soma+num;
}
printf("A soma é %d\n", &soma);
return 0;
}





