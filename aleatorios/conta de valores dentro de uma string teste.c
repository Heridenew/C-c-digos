#include <stdio.h>
#include <string.h>

int main(){
int x = 0, i = 0, o = 0, count = 0, n = 0;

printf("digite o tamanho da sua string: ");
scanf(" %d", &n);
char string[n+1];

printf("digite sua string: ");
scanf(" %[^\n]", string);

for(i = 0; i < n ; i++){
    count = count + string[i];
}



for(i = 0; i < n ; i++){
    printf("valor da sua string %d: %d\n", i , string[i]);
}

 printf("\n");
 printf("valor da sua string: %d", count);

return 0;}