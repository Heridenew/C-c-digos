/*
Autor: Edenn Weslley
Data: 02/02/2022
    love you, reader
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main ()
{
    float base, proporcaolado, proporcaobase, areagera, areacirc, arearetan, raio;
    
    
    printf("Digite o valor, em centimetros, da base: ");
    scanf("%f", &base);
    printf("Digite a proporção do retangulo: ");
    scanf("%f:%f", &proporcaobase, &proporcaolado);
    
    (base / raio) == (proporcaobase / proporcaolado);
    arearetan = base * (raio + raio);
    areacirc = PI * raio * raio;
    areagera = areacirc + arearetan;
    
    printf("A área dessa figura é %.1f cm²", areagera);
    system("pause");
    return 0;
    
}

