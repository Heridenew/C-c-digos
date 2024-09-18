#include <stdio.h>
#include <string.h>

int main(){
int x = 0, i = 0, j = 0, f = 0, count = 0, count_p = 0, count_i = 0;

scanf(" %d" , &x);
int matriz[x][x];

for(i = 0; i < x ; i++){
    for(j = 0; j < x ; j++){

         char aux[31];
         scanf(" %[^\n]", aux);
       
      for(f = 0; f < x ; f++){
          {
           count = count + aux[f];
        }
      }
       matriz[i][j] = count;
    }
}

for(i = 0; i < x ; i++){
    for(j = 0; j < x ; j++){

       if( (i + j) % 2 == 0){
           count_p = count_p + matriz[i][j];
       }
        if( (i + j) % 2 == 1){
           count_i = count_i + matriz[i][j];
        }
    }
}
    
    if(count_i == count_p){
        printf("Tivemos um empate em %d pontos!", count_p);
    return 0;
    }

    if(count_i > count_p){
        printf("Os impares venceram com %d pontos!", count_i);
    return 0;
    }

    if(count_i < count_p){
        printf("Os pares venceram com %d pontos!", count_p);
    return 0;
    }
}