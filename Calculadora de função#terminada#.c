/*
Autor: Edenn Weslley
Data: 02/02/2022
    love you, reader
*/

#include <stdio.h>
#include <math.h>
 

int main() {
int a, b, c, x, del, vdel, r1, r2;


printf("Digite a, b e c:");
scanf("%d %d %d", &a, &b, &c);

r1 + r2 == (-b/a) && r1 * r2 == (c/a);
x = (-b +- vdel) / 2*a;
del = (b * b) - 4 * a * c;
vdel = sqrt(del);

if (a >= 0 )
{
if( vdel > 0 && ( a * (x * x) + (b * x) + c == 0))
printf("Digite suas raízes são: %.2f e %.2f\n", r1, r2);


}
else 
printf("Sua função não possui raízes reais");

    return 0;

}