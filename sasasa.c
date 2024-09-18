                #include <stdio.h>
                #include <string.h>
                #include <math.h>
                #include <stdlib.h>
                int main() {
                int d, m, a;
                int jan, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez, m31, m30;
                
                scanf("%d %d %d", &d, &m, &a);

                jan = 1;
                fev = 2;
                mar = 3;
                abr = 4;
                mai = 5;
                jun = 6;
                jul = 7;
                ago = 8;
                set = 9;
                out = 10;
                nov = 11;
                dez = 12;
             
                m31  =  (1) || (3) || (5) || (7) || (8) || (10) || (12);
                m30  =  (4) || (6) || (9) || (11);
                

                if(d > 31 || m > 12){
                printf("invalida");
                }

                 if( (d=29) && (m = 2) && ((((a% 4)==0) && ((a% 100)!=0)) || ((a% 400)==0)) ){
                 printf("valida");
                 return 0;}

                 if( d=29 && m == 2 && ((((a% 4)!=0) && ((a%100) ==0)) || ((a% 400) !=0)) ){
                 printf("invalida");
                 return 0;}

                 else printf("valida");
                }