                #include <stdio.h>
                #include <string.h>
                #include <math.h>
                #include <stdlib.h>

                int main(){
                    int doce = 0, poke[3], contagem = 0;
                    scanf("%d" ,&doce);
                    scanf("%d" ,&poke[0]);
                    scanf("%d", &poke[1]);
                    scanf("%d", &poke[2]);

                    for(int f = 0; f < 3; f++ ){
                        for(int y = 0; y < 3; y++){
                            if(poke[f]<poke[y]){
                                int reg = poke[f];
                                poke[f]=poke[y];
                                poke[y] = reg;
                            }
                        }
                    }


                    if(doce - poke[0] >= 0){contagem++;}
                    if(doce - (poke[0] + poke[1]) >= 0 ){contagem++;}
                    if(doce - (poke[0]+poke[1]+poke[2]) >= 0 ){contagem++;}

                    printf("%d", contagem);
                    return 0;
                }