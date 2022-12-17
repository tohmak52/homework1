#include <stdio.h>
#include <stdlib.h>

/* .Draw a flow chart to print all natural numbers in reverse (from n to 1). */

int main(int argc, char *argv[]) {
	int sayi,i;
	printf("Dogal sayiyi giriniz: ");
		scanf("%d",&sayi);
	
	for(i=sayi;i>=1;i--){
		printf("%d\n",i);
	}
	return 0;
}