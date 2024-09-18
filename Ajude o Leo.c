        #include <stdio.h>
        #include <string.h>
        #include <math.h>
        #include <stdlib.h>

        int main() {
        int x, y, a, b, n, m, pot1, pot2, con1, con2, con3;


        scanf("(%d, %d)", &x, &y);
        scanf("%d*x^%d - %d*y^%d", &a, &n, &b, &m);

        pot1 = pow(x,n);
        pot2 = pow(y,m);
        con1 = a * (pot1);
        con2 = b * (pot2); 
        con3 = (con1) - (con2);

       
        if( (con3 !=0)){
        printf("a função está definida em (%d,%d)\n", x, y);
        return 0;}

        else
        printf("a função não está definida em (%d,%d) .-.\n", x, y);

            return 0;
        }

    