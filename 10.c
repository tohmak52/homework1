#include <stdio.h>
#include <stdlib.h>

/* Draw a flowchart to find the largest of three numbers A, B, and C. */

int main(int argc, char *argv[]) {
		int a,b,c;
	printf("A sayisini giriniz: ");
		scanf("%d",&a);
	printf("B sayisini giriniz: ");
		scanf("%d",&b);
	printf("C sayisini giriniz: ");
		scanf("%d",&c);
	
	if(a>=b && a>=c){
		printf("A sayisi en buyuktur.");
	}
	if(b>=a && b>=c){
		printf("B sayisi en buyuktur.");
	}
	if(c>=a && c>=b){
		printf("C sayisi en buyuktur.");
	}
		
	return 0;
}