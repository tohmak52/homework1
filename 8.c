#include <stdio.h>
#include <stdlib.h>

/* Write an algorithm and draw a flowchart to print the SUM of numbers from
LOW to HIGH. Test with LOW=3 and HIGH=9 */

int main(int argc, char *argv[]) {
	
	int toplam,low,high,i;
	
	printf("*****Girilen iki sayi arasindaki sayilari toplayan program*****\n");
	printf("Dusuk sayiyi giriniz: ");
		scanf("%d",&low);
	printf("Yuksek sayiyi giriniz: ");
		scanf("%d",&high);
	
	for(i=low;i<=high;i++){
		
		toplam=toplam+i;
	}
	printf("Toplam: %d",toplam);

	
	return 0;
}