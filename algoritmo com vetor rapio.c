#include <stdio.h>
int main(){
int vet[tam]{10,2,5,7,8,5,4,2,1,5,1,78,15,415,458,1,4,612,94,5,1851,5};
int menor, j;

for(int i= j+1 ; i <tam; i++){
  if(vet[i] < vet[ menor]){
      menor = j;
      printf("Menor = %d e sua posição - %d\n", vet[menor], menor);
  }
      printf("Menor = %d e sua posição - %d\n", vet[menor], menor);
}







    return 0;
}