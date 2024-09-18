        #include <stdio.h>
        #include <string.h>
        #include <math.h>
        #include <stdlib.h>

        int main() {
        int num1, num4, num5, resultado = 1;
        
        scanf("%d__%d-%d", &num1, &num4, &num5); /* l� o numero no formato x__x-xxxx*/
        if(num5>=0){
            for(int i=2 ; i<=99; i++){

            int a = i/num1;
            int b = i/num4;

                if(i>= 2* num1 && i>=2 * num4){

                for (int j = 2 ;j<= a/2;  j++){       /*for que testa se � primo*/
                    if ((i/num4) % j == 0){                 
                    resultado=1;}}                
                    
                for (int j = 2 ;j<= b/2;  j++){       /*for que testa se � primo*/
                    if ((i/num1) % j == 0){                 
                    resultado=1;}}}    


                else                                                /* se n�o for, ent�o o valor de resultado � zerado para o proximo for ser executado*/
                resultado = 1;

            if (resultado == 0)                                             /* se resultado � igual a 0, ent�o imprime*/
                printf("%d%.2d%d-%d\n",num1, i, num4, num5);
            else                                                        /* se n�o for, ent�o o valor de resultado � zerado para o proximo for ser executado*/
                resultado = 0;
        }
         if(resultado == 1){
        printf("Marquinhos esta louco!\n");}}
       
        else 
        printf("Marquinhos esta louco!\n");
        return 0;
        }