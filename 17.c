#include <stdio.h>
#include <stdlib.h>

/* .Design an algorithm with a natural number, n, as its input which calculates the 
following formula and writes the result in the standard output: S = ½ + ¼ + … 
+1/n. */

int main(int argc, char *argv[]) {
	float i,n,carpim;
	carpim=0;
		printf("Bir sayi giriniz: ");
			scanf("%f",&n);
	
	for(i=2;i<=n;i+=2){
		carpim=1/i+carpim;
	}
	printf("Sonuc: %f",carpim);
	return 0;
}