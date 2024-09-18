           
                    #include <stdio.h>
                    #include <string.h>
                    #include <math.h>
                    #include <stdlib.h>

                    int main() {
                    int a, b, c;


                    scanf("%d %d %d", &a, &b, &c);

           

                    if(a == 0 && b == 0){
                    return 0;
                    }

                    if(c>=0 || c<=0){
                        if (( (a) * (a) ) == (c)){
                        printf("Quadrado Vitoris\n");
                        if (  ((a) % (b)) == (c))
                        printf("tambem Resto\n");
                        if (  ((a) * (b)) == (c))
                        printf("tambem Multi\n");
                        if (  ((a) / (b)) == (c))
                        printf("tambem Div\n");
                        if (  ((a) + (b)) == (c))
                        printf("tambem Soma\n");
                        if (  ((a) - (b)) == (c))
                        printf("tambem Sub\n");
                        return 0;}

                    }
                    if( ((c) >=0) || ((c) <=0)){
                        if (  ((a) % (b)) == (c)){
                        printf("Resto Vitoris\n");
                        if (  ((a) * (b)) == (c))
                        printf("tambem Multi\n");
                        if (  ((a) / (b)) == (c))
                        printf("tambem Div\n");
                        if (  ((a) + (b)) == (c))
                        printf("tambem Soma\n");
                        if (  ((a) - (b)) == (c))
                        printf("tambem Sub\n");
                        return 0;}
                    }
                    if( ((c) >=0) || ((c) <=0)){
                        if (  ((a) * (b)) == (c)){
                        printf("Multi Vitoris\n");
                        if (  ((a) / (b)) == (c))
                        printf("tambem Div\n");
                        if (  ((a) + (b)) == (c))
                        printf("tambem Soma\n");
                        if (  ((a) - (b)) == (c))
                        printf("tambem Sub\n");
                        return 0;}
                    }
                    if( ((c) >=0) || ((c) <=0)){
                        if (  ((a) / (b)) == (c) ){
                        printf("Div Vitoris\n");
                        if (  ((a) + (b)) == (c))
                        printf("tambem Soma\n");
                        if (  ((a) - (b)) == (c))
                        printf("tambem Sub\n");
                        return 0;}
                    }
                    if( ((c) >=0) || ((c) <=0)){
                        if (  ((a) + (b)) == (c)){
                        printf("Soma Vitoris\n");
                        if (  ((a) - (b)) == (c))
                        printf("tambem Sub\n");
                        return 0;}
                    }
                    if( ((c) >=0) || ((c) <=0)){
                        if (  ((a) - (b) ) == (c)){
                        printf("Sub Vitoris\n");
                        return 0;}
                    else printf("Impossivel vitores\n");
                    }
                    else printf("Impossivel vitores\n");
                    
                    return 0;
                    }