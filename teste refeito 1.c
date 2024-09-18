                #include <stdio.h>
                    #include <string.h>
                    #include <math.h>
                    #include <stdlib.h>

                    int main() {
                    int x, y, a, b, n, m, ele1, ele2, conta1, conta2;

                    scanf("(%d, %d)\n", &x, &y);
                    scanf("%d*x^%d - %d*y^%d", &a, &n, &b, &m);
                    
                    ele1 = ((a)* (pow(x,n)));
                    ele2 = ((b)* (pow(y,m)));
                
                    if(    ((x) / ((ele1) - (ele2)))  == (y)  ){
                    printf("a função está definida em (%d,%d)\n", x, y);
                    return 0;}

                    else 
                    printf("a função não está definida em (%d,%d) .-.\n", x, y);

                        return 0;
                    }