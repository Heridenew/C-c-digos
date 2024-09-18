#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int x, y;


printf("\nDigite x e y:");
scanf("%d %d", &x, &y);
int resto = x%y;
printf("Resto da divisão : %d", resto);


return 0;
}