#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int faltas, nota1, nota2, nota3;
}aluno;

typedef struct{
    char disciplina[50];
    int periodo;
    aluno *alunos;
}turma;

int main(){
FILE *arq;
turma *turma;
int opc = 0;

arq = fopen(strcat(turma),"");

turma = malloc(1 * sizeof(turma));
turma->alunos = malloc(1 * 1 * sizeof(aluno));

while(opc != 3){
    printf("1)Cadastrar aluno;\n2)Ver turma em arquivo texto;\n3)Sair do programa;\n");

}




free(turma);
    return 0;
}