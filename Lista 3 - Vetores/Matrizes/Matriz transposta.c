#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
int tamanhoLinha, tamanhoColuna;


scanf("%d %d", &tamanhoLinha, &tamanhoColuna);
	int matrizA[tamanhoLinha][tamanhoColuna];
	int matrizB[tamanhoColuna][tamanhoLinha];
	int i, j;

	for (i=0; i<tamanhoLinha; i++)
	{
		for (j=0; j<tamanhoColuna; j++)
		{
			scanf ("%d ", &matrizA[i][j]);
		}
	}

	for (i=0; i<tamanhoColuna; i++)
	{

			for (j=0; j<tamanhoLinha; j++)
			{
				matrizB[i][j]=matrizA[j][i];
			}

	}

	for (i=0; i<tamanhoColuna; i++)
	{
          for (j=0; j<tamanhoLinha; j++) 
		  {
            printf("%d \t", matrizB[i][j]);

		  }
		  printf("\n");
	}

	return (0);
}