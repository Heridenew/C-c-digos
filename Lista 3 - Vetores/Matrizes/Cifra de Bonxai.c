#include <stdio.h>
#define QL 26

int main() {

    int i = 0;
    int tam, des;

     scanf("%d\n", &tam);
     char va[tam];

    for (i = 0; i < tam; i++){
        scanf("%c", &va[i]);
    }

    scanf("%d", &des);

    for (i = 0; i < tam; i++){
        va[i] = 'a' + (va[i] - 'a' + des) % QL;
    }

    for (i = 0; i < tam; i++){
        printf("%c", va[i]);
    }

    return 0;
}