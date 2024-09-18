#include <stdio.h>
int main(){

for(int i = 2; i <=7; i++){
    printf("digitalWrite(LED%d,HIGH);\n", i-1);
}
    return 0;
}