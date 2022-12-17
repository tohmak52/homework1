#include <stdio.h>
#include <stdlib.h>

/*  Convert Temperature from Fahrenheit (?) to Celsius (?) */

int main(int argc, char *argv[]) {
	float celsius,fahrenheit;
	printf("Fahrenheit cinsinden sicaklik giriniz: ");
	scanf("%f",&fahrenheit);
	
	celsius=(fahrenheit-32)*5/9;
	
	printf("Celsius cinsinden deger: %f",celsius);
	return 0;
}