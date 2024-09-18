////Testador de função/////
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){
int a, b, c, d, resultado, contagem = 0, i = 0;


printf("Digite a, b, c e d: \n");
scanf("%d %d %d %d", &a, &b, &c, &d);

while(contagem < 3) {
   
    if( (  ((a*(-1)) *pow(i,3))   - (b * pow(i,2)) - (c * i) + d)  == 0  ){
        printf("Resultado foi: %d", resultado);
        system("pause");
        contagem++;
    }
    i++;
    printf("Tentativa %d\n", i);
}




    return 0;
}