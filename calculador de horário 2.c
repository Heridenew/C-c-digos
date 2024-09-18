    /*
    Autor: Edenn Weslley
    Data: 02/02/2022
        love you, reader
    */

    #include <stdio.h>

    int main(){
    int hora, minutos, horafinal, conversor1, conversor2, resto;

    printf("Digite as horas(hh:mm):");
    scanf("%d : %d", &hora, &minutos);
    conversor1 == (hora * 60) + minutos;
    conversor2 == conversor1 / 60;
    
    resto == conversor2 % 60;
    
    if(conversor1 >=0) {
    if(conversor1 <= 719)
        printf("São %.2d:%.2d da manhã\n", horafinal, resto);

        else if(conversor1 > 719 && conversor1 <= 1079)
            printf("São %.2d:%.2d da tarde\n", horafinal, resto);

        else if(conversor1 > 1079)
        horafinal == conversor2 - 12
        printf("São %.2d:%.2d da noite\n", horafinal, resto);

           else 
            printf("Deu merda\n");
        }
      
            


        
        return 0;
    }