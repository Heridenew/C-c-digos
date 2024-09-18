#include <stdio.h>

int main(){
int x, y;


printf("Digite x e y: ");
scanf("%d  %d",&x, &y);

if(x){
   if(x>0 && y>0){
        printf("Primeiro Quadrante");
    }
    else if(x>0 && y<0){
        printf("Quarto Quadrante");
    }
    else if(x<0 && y<0){
        printf("Terceiro Quadrante");
    }
    else if(x<0 && y>0){
        printf("Segundo Quadrante");
    }
 
}
  else 
        printf("Sobre o eixo de x");

if(y==0){
printf("Sobre o eixo de y");
}
 
return 0;

}

