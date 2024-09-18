        #include <stdio.h>
        #include <string.h>
        #include <math.h>
        #include <stdlib.h>

        int main() {
        int num1, num4, num5, resultado = 1;
        
        scanf("%d__%d-%d", &num1, &num4, &num5);

        if(num5>=0){
            for(int i=2 ; i<=99; i++){

            int a = i/num1;
            int b = i/num4;

                if(i>= 2* num1 && i>=2 * num4){

                    for (int j = 2 ;j<= a/2;  j++){     
                    if ((i/num4) % j == 0){                 
                    resultado++;}}    

                    for (int j = 2 ;j<= b/2;  j++){     
                    if ((i/num1) % j == 0){                 
                    resultado++;}}}

                    if (resultado == 0)                                            
                    printf("%d%.2d%d-%d\n",num1, i, num4, num5);

                    else
                    resultado = 0;

            }}
             else
             printf("Marquinhos esta louco!\n");
        }
        