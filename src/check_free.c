#include "board.h"

int check_free (stroke massiv[9][9], int game) {
	int i,j;
	
	for (i = 1; i < 9; i++) {
		for (j = 1; j < 9; j++) {
			if ((massiv[i][j].b == 'K') || (massiv[i][j].b == 'k')) {
				++game;
			}
		}
	}
	return game;	
}
