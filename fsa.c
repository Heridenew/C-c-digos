#include <stdio.h>
int main(){
int i, j, par, impar;

    scanf("%d %d",&i, &j);

    if (i > 1000000 || j > 1000000 ){
        return 0;
    }
    par = (i % 2 == 0);
    impar = (i % 2 != 0);
   
    for ( i=par ; i=1; i++ ){
    printf("%d", i);
    }
    for ( i = impar ; i = 1 ; i++ ){
    printf("%d", i);
    }


    
    for 


    return 0;
}