#include <stdio.h>
#include <stdlib.h>

/* .Design an algorithm which generates even numbers between 1000 and 2000 */

int main(int argc, char *argv[]) {
	int i,toplam;
	toplam=0;
	printf("**1000-2000 arasindaki cift sayilari veren program**");
	
		for(i=2000;i>=1000;i-=2){
			printf("%d\n",i);
			toplam=toplam+i;
		}
		printf("Toplam: %d",toplam);
	
	return 0;
}