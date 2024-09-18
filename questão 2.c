#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
int *vetor, x, count = 0, flag = 0;
FILE *arq;

vetor  = calloc(1,sizeof(int));
arq = fopen("valores.txt","w");

printf("A contagem dos vetores so ira parar quando voce digitar '-1' ...\n");
printf("A contagem comecou:\n ");

while(flag != 1){
    printf("Digite o valor[%d]: ", count);
    scanf("%d", &x);
    if(x == -1){ flag = 1;}
    *(vetor + count) = x;

    vetor = realloc(vetor, (count + 2) * sizeof(int));
    count++;
}
printf("\n\n\n\n\n");

int aux1 = 0, s = 0;

for(int j = 0; j < count; j++){
    for(int i = 0; i < count ; i++){
       if( *(vetor + i) > aux1 ){
           aux1 = *(vetor + i);
           s = i;
       }
    }
    *(vetor + s) = 0;
    fprintf(arq,"%d\n", aux1);
    aux1 = 0;
}
    
free(vetor);
fclose(arq);

  return 0;
}