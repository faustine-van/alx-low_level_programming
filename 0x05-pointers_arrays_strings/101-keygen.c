#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <time.h>
/**
 *randomPasswordGeneration - generate random valid password
 *@N: to be tested
*/
void randomPasswordGeneration(int N)
{
	int i = 0;
	int randomizer = 0;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoprstuvwyxz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUYWVZX";
	char symbol[] = "!@#$^&*?";
	char password[N];

	randomizer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbol[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
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
