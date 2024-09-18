                #include <stdio.h>
                #include <string.h>
                #include <math.h>
                #include <stdlib.h>
                /*
                Código brabor do Teh Adventujrs of Meme Man: Sanduíche 
                By Edenn Weslley
                */


                int main(){

                char i0, i1, i2, i3, i4, i5, i6, b, f, p, A, T, C, R, P;
                char lele = ''
                /*
                Integral: '.' (ponto final)
                Italiano: ':' (dois pontos)

                Bovina: 'b'
                Frango: 'f'
                Peixe Peixoto Pisciano: 'p'

                Alface:  'A'
                Tomate: 'T'
                Cebola acebolada: 'C'
                Pickle Rick: 'R'

                Picante: 'P'
                Desinteressante: 'D'
                Meh: 'M'
                Errado: 'E'   */

                scanf("%c%c%c%c%c%c%c", &i0, &i1, &i2, &i3, &i4, &i5, &i6);

                /*if(i0){
                    if((i0)!=(i6)){
                    printf("Invalido\n...Mas pelo menos ganhou um chute");
                    return 0;}
                    if ( ((i0) != (lele)) && ((i0) != (lela))){
                    printf("Invalido\n...Mas pelo menos ganhou um chute");
                    return 0;}
                    if ( ((i1) != (b)) && (((i1) != (f))) && (((i1) != (p)))){
                    printf("Invalido\n...Mas pelo menos ganhou um chute");
                    return 0;}
                    if (  ((i2) != (A)) && ((i2) != (T)) && ((i2) != (C)) && ((i2) != (R))){
                    printf("Invalido\n...Mas pelo menos ganhou um chute");
                    return 0;}
                    if ( ((i3) != (A)) && ((i3) != (T)) && ((i3)!= (C)) && ((i3) != (R))){
                    printf("Invalido\n...Mas pelo menos ganhou um chute");
                    return 0;}
                    if ( ((i4) != (A)) && ((i4) != (T)) && ((i4) != (C)) && ((i4) != (R))){
                    printf("Invalido\n...Mas pelo menos ganhou um chute");
                    return 0;}
                    if ((i5) != (P) ){
                    printf("Invalido\n...Mas pelo menos ganhou um chute");
                    return 0;}
                    if ( ((i6) != (lele)) && ((i0) != (lela))){
                    printf("Invalido\n...Mas pelo menos ganhou um chute");}

                    else printf("Valido\n");
                }*/
            if( ((i0)==(i6)) && 
            (((i0)==(lele)         || ((i0)=(lela)))) && 
            (((i1)==(b))         || ((i1)=(f))     || ((i1)==(p)))  && 
            (((i2)==(A))         || ((i2)=(T))     || ((i2)==(C))   ||     ((i2)==(R))) && 
            (((i3)==(A))         || ((i3)=(T))     || ((i3)==(C))   ||     ((i3)==(R))) &&  
            (((i4)==(A))         || ((i4)=(T))     || ((i4)==(C))   ||     ((i4)==(R))) && 
            ((i5)==(P)) && 
            ((i6)==(i0))){
            printf("Valido\n");}

            else 
            printf("Invalido\n...Mas pelo menos ganhou um chute");
           
                }
