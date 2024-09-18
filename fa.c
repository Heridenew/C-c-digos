#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
   int i, j;
   char k;
   int z= 1;
   char n ;
   char A= 1,B=2,C=3,D=4,E=5 ,F=6,G=7,H=8,I=9,J=10,K=11,L=12,M=13,N=14,O=15,P=16,Q=17,R=18,S=19,T=20,U=21,V=22,W=23,X=24,Y=25,Z=26;

   scanf("%c", &n);

      for(i=1 ; i<=n; i++)
      {
          for(j=n-1;j>=i;j--)
          {
              printf(".");
          }
          for(k=1;k>=-(i-1);k++)
          {
              printf("%c", k-1);
          }
          z+=2;
          printf("\n");
      }


    return 0;
}