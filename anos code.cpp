#include<stdio.h>
int main()
{
    int ai = 0, af = 0, qd = 0, diai=0, diaf=0;
    int mesi=0, mesf =0, anopro = 0, mespro = 0;
    
    printf("Digite o ano inicial -> ");
    scanf("%d/%d/%d", &diai, &mesi, &ai); getchar();
    printf("Digite o ano final -> ");
    scanf("%d/%d/%d", &diaf, &mesf, &af); getchar();
    anopro = ai+1;

    if(ai != af){ 
        while(anopro < af){
            if(anopro%400 == 0) qd = qd + 366;
            else if(anopro%100 != 0 && anopro%4 == 0) qd = qd + 366;
            else qd = qd + 365;
            anopro++;
        }
            mespro = mesi;
            while(mespro <= 12){
            if(mespro == mesi){
                if(mesi <= 7 && mesi%2 == 1) qd+=31 - (diai - 1);
           
                    else if (mesi <= 7 && mesi%2 == 0 && mesi != 2) qd+=30 - (diai - 1);
                    else if(mesi == 2){
                if(ai%400 == 0) qd = qd + 29 - (diai - 1);
                    else if(ai%100 != 0 && ai%4 == 0) qd += 29 - (diai - 1);
                    else qd += 28 - (diai - 1);
                } 
                    else if(mesi > 7 && mesi%2== 0) qd+=31 - (diai - 1);
                    else if(mesi > 7 && mesi%2== 1) qd+=30 - (diai - 1);
            } else{ 
                if(mespro <= 7 && mespro%2 == 1) qd+=31;
                    else if (mespro <= 7 && mespro%2 == 0 && mespro != 2) qd+=30;
                    else if(mespro == 2){
                if(ai%400 == 0) qd = qd + 29;
                    else if(ai%100 != 0 && ai%4 == 0) qd += 29;
                    else qd += 28;
                }
                    else if(mespro > 7 && mespro%2== 0) qd+=31;
                    else if(mespro > 7 && mespro%2== 1) q+=30;
            }

            mespro++;           
        }
        mespro = mesf;
        while (mespro >= 1)
        {
            if(mespro == mesf){
                 qd+= diaf;
                 
            } else{ 
            if(mespro <= 7 && mespro%2 == 1) qd+=31;
                else if (mespro <= 7 && mespro%2 == 0 && mespro != 2) qd+=30;
                else if(mespro == 2){
            if(af%400 == 0) qd += 29;
                    else if(af%100 != 0 && af%4 == 0) qd += 29;
                        else qd += 28;
                } 
                    else if(mespro > 7 && mespro%2== 0) qd+=31;
                    else if(mespro > 7 && mespro%2== 1) qd+=30;
            }   
        mespro--;   
        }

    } else {/
            mespro = mesi;
        while(mespro < mesf){
            if(mespro == mesi){
                if(mesi <= 7 && mesi%2 == 1) quantDias+=31 - (diai - 1);
               
                else if (mesi <= 7 && mesi%2 == 0 && mesi != 2) quantDias+=30 - (diai - 1);
                else if(mesi == 2){
                if(ai%400 == 0) quantDias = quantDias + 29 - (diai - 1);
                else if(ai%100 != 0 && ai%4 == 0) quantDias += 29 - (diai - 1);
                else quantDias += 28 - (diai - 1);
                }
                else if(mesi > 7 && mesi%2== 0) quantDias+=31 - (diai - 1);
                else if(mesi > 7 && mesi%2== 1) quantDias+=30 - (diai - 1);
            } else{
                if(mespro <= 7 && mespro%2 == 1) quantDias+=31;
                else if (mespro <= 7 && mespro%2 == 0 && mespro != 2) quantDias+=30;
                else if(mespro == 2){
                    if(ai%400 == 0) quantDias = quantDias + 29;
                    else if(ai%100 != 0 && ai%4 == 0) quantDias += 29;
                    else quantDias += 28;
                }
                else if(mespro > 7 && mespro%2== 0) quantDias+=31;
                else if(mespro > 7 && mespro%2== 1) quantDias+=30;
            }
            
            mespro++;           
        }
        quantDias+= diaf;
    }
    
    printf("\nA quantidade de dias foi de %d", quantDias);
}