#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int ver = 80, verm = 100, ro = 120, ama = 80, p1, p2, p3, p4, mauro;
int cb1, cb2, cb3, cb4;
scanf("%d", &mauro);
scanf("%d %d %d %d", &p1, &p2, &p3, &p4);



if((p1) == (0)){
printf("Verde");	
return 0;}

if( (mauro) - (p1) == (0) && ((mauro - p2) >=0)  ){
printf("vermelho");	
return 0;}

cb1 = (ver)  / (p1);
cb2 = (verm) / (p2);
cb3 = (ro)   / (p3);
cb4 = (ama)  / (p4);

/*if(p2 = 0){
printf("Verde");	
return 0;}
}*/

if( (cb1 >= cb2 && cb3 && cb4) && ((mauro - p1) >=0)   ){
printf("Verde");	
return 0;}

if( (cb2 >= cb1 && cb3 && cb4) && ((mauro - p2) >=0)   ){
printf("Vermelho");
return 0;}

if( (cb3 >= cb1 && cb2 && cb4) && ((mauro - p3) >=0)   ){
printf("Roxo");
return 0;}

if( (cb4 >= cb1 && cb2 && cb3) && ((mauro - p4) >=0)   ){
printf("Amarelo");
return 0;}

else
printf("Acho que vou a pe :(");
	return 0;
}