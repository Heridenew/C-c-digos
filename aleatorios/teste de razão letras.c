#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define x 256
int main() {
int le; 
int le1 = le%x;
int le2 = le1%x;
int le3 = le2%x;
int le4 = le3%x;


scanf("%c", &le);

if(le1 <97&&le2 <97&&le3 <97&&le4 <97)
{
int le1 = le+26;
int le2 = le1+26;
int le3 = le2+26;
int le4 = le3+26;
}
if(le1 >122&&le2 >122&&le3 >122&&le4 >122)
{
int le1 = le-26;
int le2 = le1-26;
int le3 = le2-26;
int le4 = le3-26;
}

printf("\n%d = %c\n%d = %c\n%d = %c\n%d = %c\n%d = %c\n%c = %d", le, le, le1, le1, le2, le2, le3, le3, le4, le4);



    return 0;
}