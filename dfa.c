            #include <stdio.h>
            #include <string.h>
            #include <math.h>
            #include <stdlib.h>

            int main() {
            int d, m, a;
            int  fev, bissexto, fevbi;
            
            scanf("%d %d %d", &d, &m, &a);
            
            fev = 2;
        
            bissexto = (((a)%4==0) && ((a)%100!=0))  || ((a)%400==0) ;
            fevbi = (m = 2) && (a = bissexto); 
            
            if( d<=28 && m==2 ){
            printf("valida");
            return 0;}

            if( (d=29) && (m=fevbi) ){
            printf("valida");
            return 0;}

            else 
            printf("invalida");
            return 0;

        

            }