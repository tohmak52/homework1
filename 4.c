#include <stdio.h>
#include <stdlib.h>

/* Determine Whether a Temperature is Below or Above the Freezing Point. */

int main(int argc, char *argv[]) {
	int derece;
	printf("Havanin kac derece oldugunu giriniz: ");
	scanf("%d",&derece);
	
	if(derece>0){
		printf("Hava derecesi donma seviyesinden yuksektir");

	}
	if(derece<=0){
		printf("Hava donma derecesinde veya altindadir.");
	}
	return 0;
}