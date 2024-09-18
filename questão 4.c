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
FILE *arq, *base;
turma *turmas;
int opc = 0, quant = 1;

if(arq = fopen(strcat(turmas->disciplina,".txt"),"w")  == NULL){printf("ERRO DA ABERTURA DO ARQUIVO");}
if(base = fopen(strcat(turmas->disciplina,".dat"),"rb")  == NULL){arq = fopen(strcat(turmas,".txt"),"wb"); fclose(base);}
while(!feof(base)){
    fread(turmas,1 , sizeof(turma), base);
    quant++;
    realloc(turmas = malloc( quant * sizeof(turmas)));
    turmas++;
}


turmas = malloc(1 * sizeof(turmas));
turmas->alunos = malloc(1 * 1 * sizeof(aluno));

while(opc != 4){
    printf("1)Cadastrar aluno;\n2)Ver turma em arquivo texto;\n");
    scanf("%d",&opc);

    switch(opc){
        case 1:
            if(base = fopen(strcat(turmas,".dat"),"ab")  == NULL){printf("ERRO DA ABERTURA DO ARQUIVO");}


            break;
        case 2:
            break;
        case 3:
            break;
    }
}


fclose(base);
fclose(arq);
free(turmas);
    return 0;
}

