#include "board.h"

int check_two (stroke massiv[9][9], char str1[], int a) {
	int i,j,r1,r = 0;
	int str[5];
	str[0] = str1[0] - 'A' + 1;
	str[3] = str1[3] - 'A' + 1;
	str[1] = str1[1] - '0';
	str[4] = str1[4] - '0';
		 
	if (str[1] > str[4]) {
			r = str[1] - str[4];
			
		}
		else if (str[4] > str[1]) {
			r = str[4] - str[1];
		}
	// PESHKA (str[1] == 7)
	if (((massiv[str[1]][str[0]].b == 'P') || (massiv[str[1]][str[0]].b == 'p')) && (massiv[str[1]][str[0]].a == a)) {
		printf ("a == %d\n",a);
		if ((str[0] == str[3]) && (str[1] == 2) && (r == 2) && (a == 0)) {
			if (massiv[str[4]][str[3]].a == 2) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[1]][str[0]].a = 2;
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;	
				}
			}
		}	
		else if ((str[0] == str[3]) && (str[1] == 7) && (r == 2) && (a == 1)) {
			if (massiv[str[4]][str[3]].a == 2) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[1]][str[0]].a = 2;
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;	
				}
				return a;
			}
		}	
		else if ((str[0] == str[3]) && ((str[4] - str[1]) != 0) && ((str[4] - str[1]) < 2) && (str[4] > str[1]) && (a != 1)) {
			if (massiv[str[4]][str[3]].a == 2) {			
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[1]][str[0]].a = 2;
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;	
				}
				return a;
			}			
		} 
		else if ((str[0] == str[3]) && ((str[4] - str[1]) != 0) && ((str[1] - str[4]) < 2) && (str[1] > str[4]) && (a != 0)) {
			if (massiv[str[4]][str[3]].a == 2) {			
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[1]][str[0]].a = 2;
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;	
				}
				return a;
			}			
		} 
		else if ((((str[0] - str[3]) == 1) || ((str[3] - str[0]) == 1)) && (r == 1)) {
				if ((massiv[str[4]][str[3]].a != a) && (massiv[str[4]][str[3]].a != 2)) {
					massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
					massiv[str[4]][str[3]].a = a;
					massiv[str[1]][str[0]].a = 2;
					massiv[str[1]][str[0]].b = ' ';
					if (a == 1) {
		 				a = 0;
					}
					else {
						a = 1;	
					}	
					return a;
				}			
		}
	}
	// FERZ
	if (((massiv[str[1]][str[0]].b == 'R') || (massiv[str[1]][str[0]].b == 'r')) && (massiv[str[1]][str[0]].a == a)) {
		if (str[0] == str[3]) { 	
			if (str[4] > str[1]) {	
				for (i = (str[4] - 1); i > str[1]; --i) {
					printf ("%d\n",i);
					if ((massiv[str[0]][i].a != 2) || (massiv[str[0]][i].a == a)) {
						printf ("%d\n",i);
						if (massiv[i][str[0]].a == a) {
							return a;
						}
					}	
				}
			}
			if (str[1] > str[4]) {
				for (i = (str[4] + 1); i < str[1]; ++i) {
					printf ("1%d\n",i);
					if ((massiv[str[0]][i].a != 2) || (massiv[str[0]][i].a == a)) {
						printf ("%d\n",i);
						if (massiv[i][str[0]].a == a) {
							return a;
						}
					}	
				}
			}
			if ((massiv[str[4]][str[3]].a != a) || (massiv[str[4]][str[3]].a == 2)) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[1]][str[0]].a = 2;
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}
				return a;					
			}
		

		}
	  	else if (str[1] == str[4]) {
			if (str[3] > str[0]) {
				for (i = (str[3]-1); i > str[0]; --i) {
					if ((massiv[str[1]][i].a != 2) || (massiv[str[1]][i].a == a)) {
						printf ("%d\n",i);
						if (massiv[i][str[0]].a == a) {
							return a;
						}
					}
				}
			}
			if (str[3] < str[0]) {
				for (i = (str[3]+1); i < str[0]; ++i) {
					if ((massiv[str[1]][i].a != 2) || (massiv[str[1]][i].a == a)) {
						if (massiv[i][str[0]].a == a) {
							return a;
						}
					}	
				}
			}
			if ((massiv[str[4]][str[3]].a != a) || (massiv[str[4]][str[3]].a == 2)){
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[1]][str[0]].a = 2;
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}					
			}
		}
	return a;	
	}
	// KON
	if (((massiv[str[1]][str[0]].b == 'n') || (massiv[str[1]][str[0]].b == 'N')) && (massiv[str[1]][str[0]].a == a)) {
		r = 0;		
		if ((str[1] > str[4]) && (str[0] > str[3])) {
			if (((str[1] - str[4]) == 2) && ((str[0] - str[3]) == 1)) {
				r = 1;
			}
			else if (((str[1] - str[4]) == 1) && ((str[0] - str[3]) == 2)) {
				r = 1;
			}
		}
		else if ((str[1] > str[4]) && (str[3] > str[0])) {
			if (((str[1] - str[4]) == 2) && ((str[3] - str[0]) == 1)) {
				r = 1;
			}
			else if (((str[1] - str[4]) == 1) && ((str[3] - str[0]) == 2)) {
				r = 0;
			}
		}
		else if ((str[4] > str[1]) && (str[3] > str[0])) {
			if (((str[4] - str[1]) == 2) && ((str[3] - str[0]) == 1)) {
				r = 1;
				printf ("%d\n",r);
			}
			else if (((str[4] - str[1]) == 1) && ((str[3] - str[0]) == 2)) {
				r = 1;
			}
		}
		else if ((str[4] > str[1]) && (str[0] > str[3])) {
			if (((str[4] - str[1]) == 2) && ((str[0] - str[3]) == 1)) {
				r = 1;
			}
			else if (((str[4] - str[1]) == 1) && ((str[0] - str[3]) == 2)) {
				r = 1;
			}
		}
		if (r == 0) {
			return a;
		}
		else {
			if ((massiv[str[4]][str[3]].a != a) || (massiv[str[4]][str[3]].a == 2)) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].a = 2;   
			}
			if (a == 1) {
				a = 0;
			}
			else {
				a = 1;
			}
		}
	return a;
	}
	
	// SLON
	if (((massiv[str[1]][str[0]].b == 'b') || (massiv[str[1]][str[0]].b == 'B')) && (massiv[str[1]][str[0]].a == a)) {		
		if (str[0] < str[3]) {
			r1 = str[3] - str[0];
		} 		
		else {
			r1 = str[0] - str[3];
		}	
		if (str[1] < str[4]) {
			r = str[4] - str[1];
		}
		else {
			r = str[1] - str[4];
		}
		if ((str[1] < str[4]) && (r1 == r) && (str[0] < str[3])) {
			printf ("go\n");
			for (i = str[4],j = str[3]; i > str[1]; --i, --j) {
				if ((massiv[i][j].a != 2) && (massiv[i][j].a == a)) {
					printf ("%d%d\n",i,j);
					return a;
				}
			}
			if (massiv[str[4]][str[3]].a != a) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = massiv[str[1]][str[0]].a;
				massiv[str[1]][str[0]].a = 2;
				massiv[str[1]][str[0]].b = ' ';
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}
				return a;			
			}
		}
		else if ((str[1] < str[4]) && (r1 == r) && (str[0] > str[3])) {
			for (i = str[4], j = str[3]; i > str[1]; --i, ++j) {
				
				if ((massiv[i][j].a != 2) && (massiv[i][j].a == a)) {
					printf ("%d%d\n",i,j);
					return a;
				}
			}
			if (massiv[str[4]][str[3]].a != a) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = massiv[str[1]][str[0]].a;
				massiv[str[1]][str[0]].a = 2;
				massiv[str[1]][str[0]].b = ' ';
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}	
				return a;		
			}
		}
		else if ((str[1] > str[4]) && (r1 == r) && (str[0] > str[3])) {		
			for (i = str[4], j = str[3]; i > str[4] ;++i , ++j) {
				if ((massiv[i][j].a != 2) && (massiv[i][j].a == a)) {
					printf ("%d%d\n",i,j);
					return a;
				}
				printf ("%d\n",a);
			}
			if (massiv[str[4]][str[3]].a != a) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = massiv[str[1]][str[0]].a;
				massiv[str[1]][str[0]].a = 2;
				massiv[str[1]][str[0]].b = ' ';
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}	
				return a;		
			}
		}
		else if ((str[1] > str[4]) && (r1 == r) && (str[0] < str[3])) {	
			for (i = str[4], j = str[3]; i > str[4]; ++i, --j) {
				if ((massiv[i][j].a != 2) && (massiv[i][j].a == a)) {
					printf ("%d%d\n",i,j);
					return a;
				}
			}
			if (massiv[str[4]][str[3]].a != a) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = massiv[str[1]][str[0]].a;
				massiv[str[1]][str[0]].a = 2;
				massiv[str[1]][str[0]].b = ' ';
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}	
				return a;		
			}
		}
	return a;
	}
	// KOROLEVA
	printf ("a == %d\n",a);
	if (((massiv[str[1]][str[0]].b == 'q') || (massiv[str[1]][str[0]].b == 'Q')) && (massiv[str[1]][str[0]].a == a)) {	
		if (str[0] < str[3]) {
			r1 = str[3] - str[0];
		} 		
		else {
			r1 = str[0] - str[3];
		}	
		if (str[1] < str[4]) {
			r = str[4] - str[1];
		}
		else {
			r = str[1] - str[4];
		}
		printf ("step0\n");
		if ((str[1] < str[4]) && (r1 == r) && (str[0] < str[3])) {
			printf ("go\n");
			for (i = str[4],j = str[3]; i > str[1]; --i, --j) {
				if ((massiv[i][j].a != 2) && (massiv[i][j].a == a)) {
					printf ("%d%d\n",i,j);
					return a;
				}
			}
			if (massiv[str[4]][str[3]].a != a) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = massiv[str[1]][str[0]].a;
				massiv[str[1]][str[0]].a = 2;
				massiv[str[1]][str[0]].b = ' ';
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}
				return a;			
			}
		
		printf ("step1\n");
		}
		else if ((str[1] < str[4]) && (r1 == r) && (str[0] > str[3])) {
			for (i = str[4], j = str[3]; i > str[1]; --i, ++j) {
				
				if ((massiv[i][j].a != 2) && (massiv[i][j].a == a)) {
					printf ("%d%d\n",i,j);
					return a;
				}
			}
			if (massiv[str[4]][str[3]].a != a) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = massiv[str[1]][str[0]].a;
				massiv[str[1]][str[0]].a = 2;
				massiv[str[1]][str[0]].b = ' ';
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}	
				return a;		
			}
		
		printf ("step2\n");
		}
		else if ((str[1] > str[4]) && (r1 == r) && (str[0] > str[3])) {		
			for (i = str[4], j = str[3]; i > str[4] ;++i , ++j) {
				if ((massiv[i][j].a != 2) && (massiv[i][j].a == a)) {
					printf ("%d%d\n",i,j);
					return a;
				}
				printf ("%d\n",a);
			}
			if (massiv[str[4]][str[3]].a != a) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = massiv[str[1]][str[0]].a;
				massiv[str[1]][str[0]].a = 2;
				massiv[str[1]][str[0]].b = ' ';
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}	
				return a;		
			}
		
		printf ("step3\n");
		}
		else if ((str[1] > str[4]) && (r1 == r) && (str[0] < str[3])) {	
			for (i = str[4], j = str[3]; i > str[4]; ++i, --j) {
				if ((massiv[i][j].a != 2) && (massiv[i][j].a == a)) {
					printf ("%d%d\n",i,j);
					return a;
				}
			}
			if (massiv[str[4]][str[3]].a != a) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = massiv[str[1]][str[0]].a;
				massiv[str[1]][str[0]].a = 2;
				massiv[str[1]][str[0]].b = ' ';
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}	
				return a;		
			}
		
		printf ("step4\n");
		}
		else if (str[0] == str[3]) { 	
			if (str[4] > str[1]) {	
				for (i = (str[4] - 1); i > str[1]; --i) {
					printf ("%d\n",i);
					if ((massiv[str[0]][i].a != 2) || (massiv[str[0]][i].a == a)) {
						printf ("%d\n",i);
						if (massiv[i][str[0]].a == a) {
							return a;
						}
					}	
				}
			}
			if (str[1] > str[4]) {
				for (i = (str[4] + 1); i < str[1]; ++i) {
					printf ("1%d\n",i);
					if ((massiv[str[0]][i].a != 2) || (massiv[str[0]][i].a == a)) {
						printf ("%d\n",i);
						if (massiv[i][str[0]].a == a) {
							return a;
						}
					}	
				}
			}
			if ((massiv[str[4]][str[3]].a != a) || (massiv[str[4]][str[3]].a == 2)) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[1]][str[0]].a = 2;
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}
				return a;					
			}
		

		}
	  	else if (str[1] == str[4]) {
			if (str[3] > str[0]) {
				for (i = (str[3]-1); i > str[0]; --i) {
					if ((massiv[str[1]][i].a != 2) || (massiv[str[1]][i].a == a)) {
						printf ("%d\n",i);
						if (massiv[i][str[0]].a == a) {
							return a;
						}
					}
				}
			}
			if (str[3] < str[0]) {
				for (i = (str[3]+1); i < str[0]; ++i) {
					if ((massiv[str[1]][i].a != 2) || (massiv[str[1]][i].a == a)) {
						if (massiv[i][str[0]].a == a) {
							return a;
						}
					}	
				}
			}
			if ((massiv[str[4]][str[3]].a != a) || (massiv[str[4]][str[3]].a == 2)){
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[1]][str[0]].a = 2;
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}					
			}
		}
	return a;	
	}
	// KING
	if (((massiv[str[1]][str[0]].b == 'k') || (massiv[str[1]][str[0]].b == 'K')) && (massiv[str[1]][str[0]].a == a)) {
		if (str[0] == str[3]) {
			if (((str[1]+1) == str[4]) && ((massiv[str[4]][str[3]].a != a) || (massiv[str[4]][str[3]].a == 2))){
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[1]][str[0]].a = 2;
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}
				return a;					
			}
			if (((str[4]+1) == str[1]) && ((massiv[str[4]][str[3]].a != a) || (massiv[str[4]][str[3]].a == 2))){
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[1]][str[0]].a = 2;
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}
				return a;					
			}
		}
		else if (str[1] == str[4]) {	
			if (((str[0]+1) == str[3]) && ((massiv[str[4]][str[3]].a != a) || (massiv[str[4]][str[3]].a == 2))){
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[1]][str[0]].a = 2;
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}
				return a;					
			}
			if (((str[3]+1) == str[0]) && ((massiv[str[4]][str[3]].a != a) || (massiv[str[4]][str[3]].a == 2))){
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = a;
				massiv[str[1]][str[0]].b = ' ';
				massiv[str[1]][str[0]].a = 2;
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}
				return a;					
			}
		}	
		if (str[0] < str[3]) {
			r1 = str[3] - str[0];
		} 		
		else {
			r1 = str[0] - str[3];
		}	
		if (str[1] < str[4]) {
			r = str[4] - str[1];
		}
		else {
			r = str[1] - str[4];
		}
		if ((str[1] < str[4]) && (r1 == r) && (str[0] < str[3]) && ((str[0] + 1) == str[3]) && ((str[1] + 1) == str[4])) {
			printf ("go\n");
			for (i = str[4],j = str[3]; i > str[1]; --i, --j) {
				if ((massiv[i][j].a != 2) && (massiv[i][j].a == a)) {
					printf ("%d%d\n",i,j);
					return a;
				}
			}
			if (massiv[str[4]][str[3]].a != a) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = massiv[str[1]][str[0]].a;
				massiv[str[1]][str[0]].a = 2;
				massiv[str[1]][str[0]].b = ' ';
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}
				return a;			
			}
		}
		else if ((str[1] < str[4]) && (r1 == r) && (str[0] > str[3]) && ((str[3] + 1) == str[0]) && ((str[1] + 1) == str[4])) {
			for (i = str[4], j = str[3]; i > str[1]; --i, ++j) {
				
				if ((massiv[i][j].a != 2) && (massiv[i][j].a == a)) {
					printf ("%d%d\n",i,j);
					return a;
				}
			}
			if (massiv[str[4]][str[3]].a != a) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = massiv[str[1]][str[0]].a;
				massiv[str[1]][str[0]].a = 2;
				massiv[str[1]][str[0]].b = ' ';
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}	
				return a;		
			}
		}
		else if ((str[1] > str[4]) && (r1 == r) && (str[0] > str[3]) && ((str[3] + 1) == str[0]) && ((str[4] + 1) == str[1])) {		
			for (i = str[4], j = str[3]; i > str[4] ;++i , ++j) {
				if ((massiv[i][j].a != 2) && (massiv[i][j].a == a)) {
					printf ("%d%d\n",i,j);
					return a;
				}
				printf ("%d\n",a);
			}
			if (massiv[str[4]][str[3]].a != a) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = massiv[str[1]][str[0]].a;
				massiv[str[1]][str[0]].a = 2;
				massiv[str[1]][str[0]].b = ' ';
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}	
				return a;		
			}
		}
		else if ((str[1] > str[4]) && (r1 == r) && (str[0] < str[3]) && ((str[0] + 1) == str[3]) && ((str[4] + 1) == str[1])) {	
			for (i = str[4], j = str[3]; i > str[4]; ++i, --j) {
				if ((massiv[i][j].a != 2) && (massiv[i][j].a == a)) {
					printf ("%d%d\n",i,j);
					return a;
				}
			}
			if (massiv[str[4]][str[3]].a != a) {
				massiv[str[4]][str[3]].b = massiv[str[1]][str[0]].b;
				massiv[str[4]][str[3]].a = massiv[str[1]][str[0]].a;
				massiv[str[1]][str[0]].a = 2;
				massiv[str[1]][str[0]].b = ' ';
				if (a == 1) {
					a = 0;
				}
				else {
					a = 1;
				}	
				return a;		
			}
		}
		return a;	
	}

	return a;
}




