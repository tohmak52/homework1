#include <stdio.h>
#include <stdlib.h>

/* Determine and Output Whether Number N is Even or Odd */

int main(int argc, char *argv[]) {
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
		if(sayi%2==0){
			printf("Girdiginiz sayi cifttir.");
		}
		else{
			printf("Girdiginiz sayi tektir.");
		}
	return 0;
}