#include <stdio.h>
#include <string.h>

int main(){
	
	char string[30];
	int i = 0, j = 0, n = 0, count = 0, countp = 0;
	

	scanf(" %[^\n]", string);

	scanf(" %d", &n);
    char string2[n+1][30];


	for(i = 0; i < n; i++){
	        scanf(" %[^\n]", string2[i]);
    }

    	for(i = 0; i < n; i++){
           for(j = 0; j < n; j++){
                if(string[i] == string2[i][j]){
                        countp = countp + 1;
                    }
                 }

            if(countp = strlen(string2[i])){
                count = count + 1;
            }
        }


printf("E possivel formar %d palavras com esse conjunto\n", count);
    return 0 ;}

