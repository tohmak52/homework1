#include <stdio.h>
#include <stdlib.h>

/* Write an algorithm and draw a flowchart to print the multiplication table for 6's. */

int main(int argc, char *argv[]) {
		unsigned int carpimlar,i;
		
	printf("**6'larin carpim tablosu**\n");
	
		for(i=1;;i++){
			carpimlar=6*i;
			printf("6x%d=%d \n",i,carpimlar);
		}
		
	return 0;
}