////Testador de função/////
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
int x = 0, raizes = 0;

while(raizes < 3){
        int resultado = ( pow(x,3) + (6*(pow(x,2))) + (12*x) - 8);
        if (resultado == 0){
            printf("%d é raiz\n", x);
            raizes++;
    }
    printf("tentativa %d\n", x);
    x++;
}


    return 0;
}