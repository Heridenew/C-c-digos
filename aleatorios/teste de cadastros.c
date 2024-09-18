#include <stdio.h>

typedef struct {
    int id;
    char nome[35];
    int idade;
    float salario;
}Funcionario;


void struct_cadastro(Funcionario x){ 
     printf("Digite seu id: ");
     scanf(" %d", &x.id);
     printf("Digite seu nome: ");
     scanf(" %[^\n]", x.nome);
     printf("Digite sua idade: ");
     scanf(" %d", &x.idade);
     printf("Digite seu salário: ");
     scanf(" %f", &x.salario);
};

int main(){
int x = 0, contador = 0;
Funcionario func[50];

printf("Digite a quantidade de funcionários a serem cadastrados: ");
scanf("%d", &x);
printf("\n");

for(int i = 0; i < x; i++){
    struct_cadastro(func[i]);
}
for(int i = 0; i < x; i++){
    func[i].salario = func[i].salario + (func[i].salario/10);
}
printf("\n\n\n");

for(int i = 0; i < x; i++){
    printf("O Salário novo do funcionário %d é %.2f\n", i+1, func[i].salario);
}


    return 0;
}