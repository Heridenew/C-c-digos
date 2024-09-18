#include <stdio.h>

int main(){

float peso, altura;
float imc;
printf("Qual o seu peso? ");
scanf("%f", &peso);
printf("Qual é a sua altura? ");
scanf("%f", &altura);
if (altura > 0) {
    imc = peso / (altura/100 * altura/100);
    if(imc < 18.5)
    printf("De frente parece que tá de lado KKKKKKKJJJJJJJJJJJ teu imc é %f\n", imc);
else if ( imc >= 18.5 && imc <24.9)
   printf("Ui papae, que shapezinho hein, teu imc é %f\n", imc);
else if (imc >= 24.9 && imc <30 )
   printf("Bora para a academia, cmpç, teu imc é %f\n", imc);
else 
   printf("Dale rolha de poço KKKKJJJJJJJJJJJJJJJJ GORDO PRA CACETE MRM KKKKKKKKKK O IMC DO CARA É %f\n", imc);

}
system("pause");
}