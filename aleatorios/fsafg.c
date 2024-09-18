#include <stdio.h>
#include <string.h>
#include <locale.h>

#define tam 40
#define size  15
int main(){
    setlocale(LC_ALL, "Portuguese");

char mo[5] = "anne", mo2[6] = "evely";
char mo1_2[tam] = " anne ", mo2_2[tam] = " evely";
char tot[tam] = "Anne Evely";
char receb[tam];
int a, b;


printf("\n\n\n*********************************");
printf("* Bem-vindo(a) ao joguinho do Sir. *");
printf("********************************* \n\n\n");

printf(" 'Digite seu nome para que os Cavaleiros Medievais da Távola Quadrática avaliem se você\n é digno(a) de ser o amor da vida do explendoroso Sir. Edenn Weslley'");
printf("\n\n Seu nome aqui: ");
scanf(" %[^\n]", receb);

strcat(mo1_2, mo2_2);
int jaaj = (strcmp(receb, mo));
int jeej = (strcmp(receb, mo2));
int jiij = (strcmp(receb, mo1_2));

if(jaaj == 0 || jeej == 0 || jiij == 0 ){

printf("\n\n\n*********************************");
printf("* Resposta da Távola *");
printf("********************************* \n\n\n");
    /* FOR THE APEX OF HEART */
    for (a = size/2; a <= size; a = a+2)
    {
        // FOR SPACE BEFORE PEAK-1 : PART 1
        for (b = 1; b < size-a; b = b+2)       
            printf(" ");
 
        // FOR PRINTING PEAK-1 : PART 2
        for (b = 1; b <= a; b++)
            printf("0");
  
        // FOR SPACE B/W PEAK-1 AND PEAK-2 : PART 3
        for (b = 1; b <= size-a; b++)
            printf(" ");
         
        // FOR PRINTING PEAK-2 : PART 4
        for (b = 1; b <= a-1; b++)
            printf("0");
 
        printf("\n");
    }
 
    /*FOR THE BASE OF HEART ie. THE INVERTED TRIANGLE */
 
    for (a = size; a >= 0; a--)
    {
        // FOR SPACE BEFORE THE INVERTED TRIANGLE : PART 5
        for (b = a; b < size; b++)
            printf(" ");
 
        // FOR PRINTING THE BASE OF TRIANGLE : PART 6
        for (b = 1; b <= ((a * 2) - 1); b++)
            printf("0");
 
        printf("\n"); 
    }
       
        printf("\n"); 
        printf("Queridissima %s, és a mais bela entre todas, o excelentissimo Sir. Edenn Weslley ama-te como a flor mais formosa que ele possui", tot); 
        printf("\n"); 
 }

if(jaaj != 0 && jeej != 0 && jiij != 0 ){
printf("\n\n\n*********************************");
printf("* Resposta da Távola *");
printf("********************************* \n\n\n");
printf("\n"); 
printf(" Querido(a) %s ,\n\n infelizmente você não é capaz de merecer o amor do excelentissimo Sir. Edenn,\n mas passe outra hora que talvez ele esteja disponível para um lolzinho", receb);
printf("\n"); 
}

system("pause");
    return 0;
    }