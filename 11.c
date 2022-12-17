#include <stdio.h>
#include <stdlib.h>

/* Draw a flowchart for a program that reads 10 numbers from the user and
prints out their sum, and their product. */

int main(int argc, char *argv[]) {
		int i,toplam,carpim,sayi;
		toplam=0;
		carpim=1;
	printf("10 tane sayi giriniz:\n");
	for(i=1;i<=10;i++){
		scanf("%d",&sayi);
		carpim=sayi*carpim;
		toplam=sayi+toplam;
		}
	printf("Toplam: %d\n",toplam);
	printf("Carpim: %d",carpim);
	return 0;
}