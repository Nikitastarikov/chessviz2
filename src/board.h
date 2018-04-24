#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int a;
	char b;
} stroke;

int check_free (stroke massiv[9][9], int game);
void print_chess (stroke massiv [9][9]);
int check_two (stroke massiv[9][9], char str[],int a);
int check_one (char str[]);
void inicialithation_chess (stroke massiv [9][9]);
