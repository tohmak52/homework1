#include <stdio.h>
#include <stdlib.h>

/* Calculate the area of a circle with given radius */

int main(int argc, char *argv[]) {
	int r,alan;
	printf("Dairenin yaricaipini giriniz: ");
	scanf("%d",&r);
	
	alan=(3.14*r*r);
	
	printf("Dairenin alani: %d",alan);
	
	
	return 0;
}