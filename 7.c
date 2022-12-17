#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Write an algorithm and draw a flowchart to print the square of all numbers from
1 to10.
 */

int main(int argc, char *argv[]) {
		int sayi,i;
		
	printf("1-10 arasi sayilarin karesi:\n");
		for(i=1;i<=10;i++){
			sayi=i*i;
			printf("%d\n",sayi);
		}
	
	
	return 0;
}