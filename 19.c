#include <stdio.h>
#include <stdlib.h>

/* .Draw a flow chart to print multiplication table of any number. */

int main(int argc, char *argv[]) {
	int sayi,i,carpim;
	carpim=1;
	printf("Bir sayi giriniz:\n");
		scanf("%d",&sayi);
	for(i=1;;i++){
		carpim=sayi*i;
		printf("%d x %d= %d\n",sayi,i,carpim);
	}
	return 0;
}