#include "board.h"

void print_chess (stroke massiv [9][9]) {
	int i,j;
	char str1[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	for(i = 1; i < 9; i++) {
		if (i == 1) {	
			printf (" ");	
			printf ("%s",str1);
			printf ("\n");
		}
		printf ("%d",i);
		//if (i != 1) {
        	for(j = 1; j < 9; j++) {
        		printf("%c",massiv[i][j].b);
                	if(j == 8) {
                		printf("\n"); 
                	}
		} 
        }   
}
