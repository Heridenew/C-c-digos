#include <stdio.h>

int main()
{
    char str[50]; // String
    char str_inv[50]; //String invertida
    char *ptr_str = str;
    char *ptr_inv = str_inv;
    int i = -1;

    scanf(" %s", str);    
     
    while(*ptr_str != '\0'){
          i = i + 1;
          ++ptr_str;
    }

    int f = 0;
    int g = i;

    while(f != i){
          f = f + 1;
          g = g - 1;
          *ptr_inv = *ptr_str;
          --ptr_inv;
          ++ptr_str;
    }
    
    int y = 0;
    while(*ptr_str != '\0'){
          
          str_inv[y] = ptr_str;
          y = y + 1;
          ++ptr_str;
    }
    
    printf(" O inverso da string: %s \n\n", str_inv);
    

    return 0;
}

