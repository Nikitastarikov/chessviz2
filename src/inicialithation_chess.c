#include "board.h"

void inicialithation_chess (stroke massiv[9][9]) {
    int j,i; 
    //char str[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
    char str1[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    massiv[1][1].b = 'R';
    massiv[1][1].a = 0;
    massiv[1][2].b = 'N';
    massiv[1][2].a = 0;
    massiv[1][3].b = 'B';
    massiv[1][3].a = 0;
    massiv[1][4].b = 'Q';
    massiv[1][4].a = 0;
    massiv[1][5].b = 'K';
    massiv[1][5].a = 0;
    massiv[1][6].b = 'B';
    massiv[1][6].a = 0;
    massiv[1][7].b = 'N';
    massiv[1][7].a = 0;
    massiv[1][8].b = 'R';
    massiv[1][8].a =0;
    i = 2;
    for(j = 1; j < 9; j++) {
        massiv[i][j].b = 'P';
	massiv[i][j].a = 0;
    }
    for(i = 3; i < 7; i++) {
        for(j = 1; j < 9; j++) {
            massiv[i][j].b = ' ';
	    massiv[i][j].a = 2;	
        }
    }
    massiv[8][1].b = 'r';
    massiv[8][1].a = 1;
    massiv[8][2].b = 'n';
    massiv[8][2].a = 1;
    massiv[8][3].b = 'b';
    massiv[8][3].a = 1; 	
    massiv[8][4].b = 'q';
    massiv[8][4].a = 1; 
    massiv[8][5].b = 'k';
    massiv[8][5].a = 1;
    massiv[8][6].b = 'b';
    massiv[8][6].a = 1;
    massiv[8][7].b = 'n';
    massiv[8][7].a = 1;
    massiv[8][8].b = 'r';
    massiv[8][8].a = 1;
    i = 7;
    for(j = 1; j < 9; j++) {
        massiv[i][j].b = 'p';
        massiv[i][j].a = 1;
    }
    for(i = 1; i < 9; i++) {
	if (i == 1) {	
		printf (" ");	
		printf ("%s",str1);
		printf ("\n");
	}
	printf ("%d",i);
        for(j = 1; j < 9; j++) {
            printf("%c",massiv[i][j].b);
            if(j == 8) {
                printf("\n"); 
            } 
        }
    }
  
}
