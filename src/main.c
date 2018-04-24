#include "board.h"
//#include <stdio.h>

int main() {
	printf ("\tCHESS\n\n");
	stroke mass [9][9];
	int j,a,game;
	char str[6];
	inicialithation_chess (mass);
	a = j = 0;
	game = 2;
	while (game == 2) {
		while (j == a) {
			printf ("your move:");
			fgets (str, 6, stdin);
			while (getchar() != '\n');
			//printf ("%s",str);
			if (check_one (str) == 0) {
				printf ("ok\n");
			}
			else {
				printf ("error\n");
			}	
			if (j == 0) {
				if (check_two (mass,str,j) == 1) {
					printf ("ok\n");
					j = 1;
				}
				else {
					printf ("you can't move there\n");
				}
			}
			else {
				if (check_two (mass,str,j) == 0) {
					printf ("ok\n");
					j = 0;
				}
				else {
					printf ("you can't move there\n");
				}
			}
			print_chess (mass);
		}
		game = 0;
		game = check_free (mass, game);
		if (a == 0) {
			a = 1;
		}
		else {
			a = 0;
		} 	
	}	
	return 0;
}
