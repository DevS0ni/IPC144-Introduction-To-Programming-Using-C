#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int option;
	char ch;

	////////////////////////////////////////////////////////
	// standard integer based switch with default
	////////////////////////////////////////////////////////
	printf("Enter an option from the menu\n");
	printf("1 - to say hello\n");
	printf("2 - to say goodbye\n");
	printf("3 - for coffee\n");
	scanf("%d", &option);
	switch (option)
	{
	case 1:
		printf("Hi there\n");
		break;
	case 2:
		printf("bye bye\n");
		break;
	case 3:
		printf("can I have a coffee please?\n");
		break;
	default:
		printf("%d is not a valid option\n", option);
	}

	////////////////////////////////////////////////////////
	// char based switch with fall-through logic
	////////////////////////////////////////////////////////
	scanf("%*c"); // discard newline from end of previous input
	printf("Enter a lower case letter or number: ");
	scanf("%c", &ch);
	switch (ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("That's a vowel\n");
		break;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		printf("That's a digit\n");
		break;
	default:
		printf("That's a consonant\n");
		break;
	}


	return 0;
}