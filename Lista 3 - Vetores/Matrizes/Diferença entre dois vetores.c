 #include <stdio.h>

int main(){
int f=0, p=0, aux=0, t = 0;   

/////Escaneia  o tamanho do vetor e a diferença/////

     scanf("%d %d", &f, &p);
     int v1[f];

/////Escaneia os valores do vetor/////

    for(int s = 0; s < f; s++)
    {
        scanf("%d ", &v1[s]);
    }

/////Transfere valores para o outro vetor/////

    int v2[f];

    for(int h = 0; h < f; h++)
    {
        v2[h] = v1[h];
    }
    
    
/////Ordena os valores do vetor em ordem crescente/////

    for(int l = 0; l < f; l++)
    {
        for(int x = l; x < f; x++)
        {
            if(v2[l]>v2[x])
            {
                aux = v2[l];
                v2[l] = v2[x];
                v2[x] = aux;
            }
        }
    }

///// Procura a diferença entre os valores posicionais/////
          
    int j=0 , po=0, count = 0, v3[t], vf[count],vi[count], vp[po];
    for (t = 0; t < f; t++)
    {
       if(p = (v3[t] - v1[t]))
       {
         j++; count++; po++;
         vi[j] = v1[t];
         vf[j] = v3[t];
         vp[po] = t;
         
       }
    }
/////Saida do código/////
    printf("%d\n", count);
        for(int c=0; c < count; c++)
        {
            printf("%d %d %d", vi[c], vf[c], vp[c]);
        }
         

    return 0;
}