#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x[10], aux, i;

    for(i = 0; i < 10; i++){
         scanf("%d", &x[i]);
    }

for(int f = 0; f <= 10; f++){
 for(i = 0; i <= 10; i++) {
    if (x[f] < x[i]){
        aux = x[f];
        x[f] = x[i];
        x[i] = aux;
    }
  }
}

     for(i = 0; i < 10; i++){
         printf("%d ", x[i]);
    }

    return 0;
}