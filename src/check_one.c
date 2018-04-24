#include "board.h"

int check_one (char str[]) {
	char j;
	int c = 0;
	for (j = 'A'; j <= 'H'; j++) {
		if (str[0] == j) {
			c = 1;
		}
	}	
	if (c == 1) {
		for (j = 'A'; j <= 'H'; j++) {
			if (str[3] == j) {
				c = 2;
			}
		}
	}
	else {
		printf("error 1\n");
		return -1;	
	}
	if (c != 2) {
		printf("error 2\n");
		return -1;
	}
	for (j = 1; j <= 8; ++j) {
		if ((str[1] - '0') == j) {
			c = 3;
		}
	}
	if (c == 3) {
		for (j = 1; j <= 8; ++j) {
			if ((str[4] - '0') == j) {
				c = 4;
			}
		}
	}
	if (c != 4) {
		printf ("error 3\n");
		return -1;
	}
	if (str[2] != '-') {
		printf ("error 4\n");
		return -1;
	}
	return 0;
	//else if ()	
}
