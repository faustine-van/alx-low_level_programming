#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <time.h>
#define SIZE 200
/**
 *randomPasswordGeneration - generate random valid password
 *@N: to be tested
*/
void randomPasswordGeneration(int N)
{
	int i = 0;
	int randomizer = 0;
	/*char numbers[] = "0123456789";*/
	/*char letter[] = "abcdefghijklmnoprstuvwyxz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUYWVZX";
	char symbol[] = "!@#$^&*?";*/
	char pass[200] = "Tada! Congrats";

	srand((unsigned int)(time(NULL)));

	randomizer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 0)
		{
			printf("%c", pass[i]);
		}
		/*
		else if (randomizer == 2)
		{
			pass[i] = symbol[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", pass[i]);
		}
		else if (randomizer == 3)
		{
			pass[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", pass[i]);
		}
		else
		{
			pass[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", pass[i]);
		}*/
	}
	printf("\n");
}
/**
 *main - print randow number password
 *Return: 0;
*/
int main(void)
{
	int N = 10;

	randomPasswordGeneration(N);
	return (0);
}
