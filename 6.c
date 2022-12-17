#include <stdio.h>
#include <stdlib.h>

/* Write an algorithm and draw a flowchart to convert the length in feet to
centimeter */

int main(int argc, char *argv[]) {
	
	float cm,feet;
	printf("Feet cinsinden uzunluk giriniz: ");
	scanf("%f",&feet);
	
	cm=feet*30.48;
	
	printf("Cm cinsinden uzunluk: %f",cm);
	
	return 0;
}