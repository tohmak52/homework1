#include <stdio.h>
#include <stdlib.h>

/* Write an algorithm and draw a flowchart to print all numbers between LOW
and HIGH that are divisible by NUMBER */

int main(int argc, char *argv[]) {
	
		int low,high,i;
	printf("**Iki sayi arasindaki sayilari yazdirma programi**\n");
	printf("Dusuk sayiyi giriniz: ");
		scanf("%d",&low);
	printf("Yuksek sayiyi giriniz: ");
		scanf("%d",&high);
	for(i=low;i<=high;i++){
		printf("   %d\n",i);
	}
	
	return 0;
}