/*
*****************************************************************************
<assessment name example: Workshop - #7 (Part-1)>
Full Name : Soni Dev Alpeshbhai
Student ID#: 130759210
Email : dasoni4@myseneca.ca
Section : NOO
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXIMUM_PATH 70

struct PlayerInfo
{
	int n_lives;
	char char_symbol;
	int n_treasure;
	int p[MAXIMUM_PATH];
};

struct GameInfor
{
	int maxnum_move;
	int p_length;
	int b[MAXIMUM_PATH];
	int t[MAXIMUM_PATH];
};

int main()
{
	struct PlayerInfo player;				
	struct GameInfor gm;
	printf("================================\n");
	printf("         Treasure Hunt!\n");
	printf("================================\n\n");
	printf("PLAYER Configuration\n");

	printf("--------------------\n");
	printf("Enter a single character to represent the player: ");
	scanf(" %c", &player.char_symbol);

	do
	{
		printf("Set the number of lives: ");
		scanf("%d", &player.n_lives);

		if (player.n_lives < 1 || player.n_lives > 10)
		{
			printf("     Must be between 1 and 10!\n");
		}
	} while (player.n_lives < 1 || player.n_lives > 10);

	printf("Player configuration set-up is complete\n\n");
	printf("GAME Configuration\n");
	printf("------------------\n");

	do
	{
		printf("Set the path length (a multiple of 5 between 10-70): ");
		scanf("%d", &gm.p_length);

		if (gm.p_length < 10 || gm.p_length > 70 || gm.p_length % 5 != 0)
		{
			printf("     Must be a multiple of 5 and between 10-70!!!\n");
		}
	} while (gm.p_length < 10 || gm.p_length > 70 || gm.p_length % 5 != 0);

	do
	{
		printf("Set the limit for number of moves allowed: ");
		scanf("%d", &gm.maxnum_move);

		if (gm.maxnum_move < 3 || gm.maxnum_move > 26)
		{
			printf("    Value must be between 3 and 26\n");
		}
	} while (gm.maxnum_move < 3 || gm.maxnum_move > 26);

	printf("\nBOMB Placement");
	printf("\n--------------\n");
	printf("Enter the bomb positions in sets of 5 where a value\n");
	printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", gm.p_length);

	int i;
	for (i = 0; i < gm.p_length; i += 5)
	{
		printf("   Positions [%2d-%2d]: ", i + 1, i + 5);

		int j;
		for (j = i; j < i + 5; j++)
		{
			scanf("%d", &gm.b[j]);

		}
	}
	printf("BOMB placement set\n");
	//
	printf("\nTREASURE Placement");
	printf("\n------------------\n");
	printf("Enter the treasure placements in sets of 5 where a value\n");
	printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", gm.p_length);

	for (i = 0; i < gm.p_length; i += 5)
	{
		printf("   Positions [%2d-%2d]: ", i + 1, i + 5);

		int j;
		for (j = i; j < i + 5; j++)
		{
			scanf("%d", &gm.t[j]);

		}
	}

	printf("TREASURE placement set\n\n");
	printf("GAME configuration set-up is complete...\n\n");
	printf("------------------------------------\n");
	printf("TREASURE HUNT Configuration Settings\n");
	printf("------------------------------------\n");
	printf("Player:\n");
	printf("   Symbol     : %c\n", player.char_symbol);
	printf("   Lives      : %d\n", player.n_lives);
	printf("   Treasure   : [ready for gameplay]\n");
	printf("   History    : [ready for gameplay]\n");

	printf("\nGame:\n");
	printf("   Path Length: %d\n", gm.p_length);
	printf("   Bombs      : ");

	for (i = 0; i < gm.p_length; i++)
	{
		printf("%d", gm.b[i]);
	}

	printf("\n   Treasure   : ");
	for (i = 0; i < gm.p_length; i++)
	{
		printf("%d", gm.t[i]);
	}

	printf("\n\n====================================\n");
	printf("~ Get ready to play TREASURE HUNT! ~\n");
	printf("====================================\n");
	return 0;
}