#include <stdio.h>
#include <stdlib.h>

/* .Draw a flow chart to count number of digits in a number. */

int main(int argc, char *argv[]) {
	int a,n;
	printf("Bir sayi giriniz: ");
		scanf("%d",&a);
	
	while(a!=0){
		a/=10;
		n++;
	}
	
	printf("Basamak sayisi: %d",n);
	return 0;
}