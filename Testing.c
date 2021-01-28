#include <stdio.h>
void printGrid(char *a)
{
	printf("%c | %c | %c \n", a[0], a[1], a[2]);
	printf("%c | %c | %c \n", a[3], a[4], a[5]);
	printf("%c | %c | %c \n", a[6], a[7], a[8]);
}

int main()
{
	int x;
	char a[9];
	char ch;
	for (int i = 0; i < 9; i++)
	{
		a[i] = ' ';
	}
	int count = 0;
	while (1 > 0)
	{

		scanf("%d", &x);
		if (a[x - 1] == ' ')
		{
			if (count % 2 == 0)
			{
				ch = 'x';
			}
			else
			{
				ch = 'o';
			}
			a[x - 1] = ch;
		}
		else
		{
			printf("invalid entry, Please enter again \n");
			continue;
		}

		printGrid(a);
		if (a[0] == ch && a[1] == ch && a[2] == ch)
		{
			printGrid(a);
			printf("%c is the winner", ch);
			break;
		}

		else if (a[3] == ch && a[4] == ch && a[5] == ch)
		{
			printGrid(a);
			printf("%c is the winner", ch);
			break;
		}

		else if (a[6] == ch && a[7] == ch && a[8] == ch)
		{
			printGrid(a);
			printf("%c is the winner", ch);
			break;
		}

		else if (a[0] == ch && a[3] == ch && a[6] == ch)
		{
			printGrid(a);
			printf("%c is the winner", ch);
			break;
		}

		else if (a[1] == ch && a[4] == ch && a[7] == ch)
		{
			printGrid(a);
			printf("%c is the winner", ch);
			break;
		}

		else if (a[2] == ch && a[5] == ch && a[8] == ch)
		{
			printGrid(a);
			printf("%c is the winner", ch);
			break;
		}

		else if (a[0] == ch && a[4] == ch && a[8] == ch)
		{
			printGrid(a);
			printf("%c is the winner", ch);
			break;
		}

		else if (a[2] == ch && a[4] == ch && a[6] == ch)
		{
			printGrid(a);
			printf("%d is the winner", ch);
			break;
		}
		
		count++;
	}

	return 0;
}
