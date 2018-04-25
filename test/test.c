#include <board.h>
#include <ctest.h>


CTEST(move_suite, izmena) // Проверка на возможность атаки на свои же фигуры
{
//GIVEN
stroke mass [9][9];
printf ("\n");
inicialithation_chess (mass);

//WHEN
char str[5] = {"A2-B1"};
int check = check_two(mass,str,0);

//THEN
const int expected = 0;

ASSERT_EQUAL(expected, check);
}

CTEST(move_suite, move_pawn) // Ход пешки 
{
	//GIVEN
	stroke mass [9][9];
	printf ("\n");
	inicialithation_chess (mass);
	char str[5] = {"A2-A3"};
	//WHEN
	int check1 = check_two(mass,str,0); //вперёд
	str[0] = 'A';
	str[1] = '7';
	str[2] = '-';
	str[3] = 'B';
	str[4] = '6';
	int check2 = check_two(mass,str,1); //по диагонали
	str[0] = 'A';
	str[1] = '7';
	str[2] = '-';
	str[3] = 'A';
	str[4] = '6';
	check_two (mass,str,1);
	str[0] = 'A';
	str[1] = '3';
	str[2] = '-';
	str[3] = 'A';
	str[4] = '2';
	int check3 = check_two(mass,str,0); //назад
	str[0] = 'A';
	str[1] = '3';
	str[2] = '-';
	str[3] = 'A';
	str[4] = '4';
	check_two(mass,str,0);
	str[0] = 'D';
	str[1] = '7';
	str[2] = '-';
	str[3] = 'D';
	str[4] = '5';
	check_two (mass,str,1);
	str[0] = 'E';
	str[1] = '2';
	str[2] = '-';
	str[3] = 'E';
	str[4] = '4';
	check_two (mass,str,0);
	str[0] = 'D';
	str[1] = '5';
	str[2] = '-';
	str[3] = 'E';
	str[4] = '4';
	 //проверка на возможность рубить пешкой
	int check4 = check_two(mass,str,1);
	print_chess (mass);

	//THEN
	const int expected1 = 1;
	const int expected2 = 1;
	const int expected3 = 0;
	const int expected4 = 0;

	ASSERT_EQUAL(expected1, check1);
	ASSERT_EQUAL(expected2, check2);
	ASSERT_EQUAL(expected3, check3);
	ASSERT_EQUAL(expected4, check4);
}

CTEST(move_suite, move_slon) // Ход слона
{
	//GIVEN
	stroke mass[9][9];
	printf ("\n");
	inicialithation_chess (mass);
	char str[5] = {"G2-G3"};

	//WHEN
	check_two(mass,str,0);
	str[0] = 'E';
	str[1] = '7';
	str[2] = '-';
	str[3] = 'E';
	str[4] = '6';
	check_two (mass,str,1);
	
	str[0] = 'F';
	str[1] = '1';
	str[2] = '-';
	str[3] = 'H';
	str[4] = '3';
	int check1 = check_two (mass,str,0); //Ход по диагонале
	str[0] = 'A';
	str[1] = '7';
	str[2] = '-';
	str[3] = 'A';
	str[4] = '6';
	check_two (mass,str,1);
	str[0] = 'H';
	str[1] = '3';
	str[2] = '-';
	str[3] = 'E';
	str[4] = '6';
	
	int check2 = check_two(mass, str,0); //Атака
	print_chess (mass);
	
	//THEN
	const int expected1 = 1;
	const int expected2 = 1;

	ASSERT_EQUAL(expected1, check1);
	ASSERT_EQUAL(expected2, check2);
	
}

CTEST(move_suite, move_hourse) // Ход коня
{
	//GIVEN
	stroke mass[9][9];
	printf ("\n");
	inicialithation_chess (mass);
	char str[5] = {"G1-H3"};

	//WHEN
	int check1 = check_two (mass,str,0); //ход
	str[0] = 'H';
	str[1] = '3';
	str[2] = '-';
	str[3] = 'F';
	str[4] = '4';
	int check2 = check_two (mass,str, 0); //ход
	str[0] = 'E';
	str[1] = '7';
	str[2] = '-';
	str[3] = 'E';
	str[4] = '6';
	check_two (mass, str,1);
	str[0] = 'F';
	str[1] = '4';
	str[2] = '-';
	str[3] = 'E';
	str[4] = '6';
	int check3 = check_two (mass,str,0); //атака

	//THEN
	const int expected1 = 1;
	const int expected2 = 1;
	const int expected3 = 1;
	ASSERT_EQUAL(expected1, check1);
	ASSERT_EQUAL(expected2, check2);
	ASSERT_EQUAL(expected3, check3);
}

CTEST(move_suite, move_ladya) // Ход ладья
{
	//GIVEN
	stroke mass[9][9];
	printf ("\n");
	inicialithation_chess (mass);
	char str[5] = {"H2-H4"};

	//WHEN
	check_two (mass,str,0);
	str[0] = 'H';
	str[1] = '1';
	str[2] = '-';
	str[3] = 'H';
	str[4] = '3';
	int check1 = check_two (mass,str,0); //ход вперёд
	str[0] = 'H';
	str[1] = '3';
	str[2] = '-';
	str[3] = 'G';
	str[4] = '4';
	int check2 = check_two (mass, str, 0); //по диагонали
	str[0] = 'H';
	str[1] = '3';
	str[2] = '-';
	str[3] = 'G';
	str[4] = '3';
	check_two (mass,str,0);
	str[0] = 'G';
	str[1] = '3';
	str[2] = '-';
	str[3] = 'G';
	str[4] = '7';
	int check3 = check_two (mass,str,0); //атака

	//THEN
	const int expected1 = 1;
	const int expected2 = 0;
	const int expected3 = 1;

	ASSERT_EQUAL(expected1, check1);
	ASSERT_EQUAL(expected2, check2);
	ASSERT_EQUAL(expected3, check3);

}
