		#include <stdio.h>
		#include <string.h>
		#include <math.h>
		#include <stdlib.h>

		int main() {
			
		int sod, ta, av, la;
		int soldini, tanqini, aviaoini, lancaini;
		int soldrefo, tanqrefo, aviaorefo, lancarefo;
		int soldfi, tanqfi, aviaofi, lancafi;

       

		scanf("%d %d %d %d",&sod, &ta, &av, &la);

		scanf("%d %d %d %d",&soldini, &tanqini, &aviaoini, &lancaini);

		scanf("%d %d %d %d",&soldrefo, &tanqrefo, &aviaorefo, &lancarefo);

		soldfi = soldini + soldrefo;
		tanqfi = tanqini + tanqrefo;
		aviaofi = aviaoini + aviaorefo;
		lancafi = lancarefo + lancaini;                                            

	if( ((sod > soldfi) && (ta > tanqfi)  && (av > aviaofi) )||
        ((sod > soldfi) && (ta > tanqfi)  && (la > lancafi) )||
        ((ta  > tanqfi) && (av > aviaofi) && (la > lancafi) )||
        ((sod > soldfi) && (av > aviaofi) && (la > lancafi) )){
		printf("Avancar");
		return 0;}
    if( ((sod < soldfi) && (ta < tanqfi)  && (av < aviaofi) )||
        ((sod < soldfi) && (ta < tanqfi)  && (la < lancafi) )||
        ((ta  < tanqfi) && (av < aviaofi) && (la < lancafi) )||
        ((sod < soldfi) && (av < aviaofi) && (la < lancafi) )){
		printf("Recuar");
		return 0;}
		else
		printf("Permanecer");

			return 0;
		}