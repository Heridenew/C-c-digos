#include <stdio.h>
#include <locale.h>
int main(){  

    char c = 'a', *pc;

    if(pc = NULL){exit(1);}

    pc = &c;
    printf("\n\n\n");
        printf(" a. Endere?o de  C: %p   Valor guardado em   C: %d \n", &c, c);
        printf(" b. Valor  de   pc: %d   Valor guardado em *pc: %d\n", pc, pc);
        printf(" c. Endere?o de pc: %p  \n", pc);
        printf(" d. Endere?o de valor guardado no endere?o apontado por pc: %p   Valor guardado no endere?o de pc: %d \n", *&pc, *pc);
    printf("\n");
    // Os dois valores da linha d. s?o iguais pois quando um ponteiro 'p' ? desreferenciado para um valor da mem?ria,
    // acabamos por ter acesso ao valor contido no conte?do da posi??o que o ponteiro indicou
    printf(" Os dois valores da linha d. s?o iguais pois quando um ponteiro 'p' ? desreferenciado para um valor da mem?ria,\n acabamos por ter acesso ao valor contido no conte?do da posi??o que o ponteiro indicou");
    printf("\n\n\n");
  return 0;
}
