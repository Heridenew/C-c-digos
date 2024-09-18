#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int quant = 0, aux=0;


/////Scanf's da quantidade de movimentações................................................................................................. 
scanf(" %d", &quant);
char string[quant+1][100];
/////Scanf's das strings....................................................................................................................
for(int f = 0; f < quant; f++){
    
    scanf(" %[^\n]", string[f]);
}
/////....................................................................................................................


for(int f = 0; f < i; f++){

    printf("%s\n", string[f]);
}

	return 0;
}