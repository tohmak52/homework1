#include <stdio.h>
#include <stdlib.h>

/* .Draw a flowchart for computing factorial N (N!). */

int main(int argc, char *argv[]) {
	int faktoriyel,i,sayi;
	printf("Faktoriyelini alacaginiz sayiyi giriniz: ");
	scanf("%d",&sayi);
	faktoriyel=1;
	for(i=sayi;i>=1;i--){
		faktoriyel=faktoriyel*i;
		
		}
	printf("Sonuc: %d",faktoriyel);
	return 0;
}