#include <stdio.h>
#include <stdlib.h>

#define USER1 'X'
#define USER2 'O'

void initialize(char *square);
void printboard(char *square);
void updateboard(char value, char *square, char marker);
int checkwin(char *square);
int checktie(char *square);
char getinput();
int main(int argc, char *argv[]) 
{	
	int player = 1;
	char choice;	
	char square[9];
	char marker = USER1;
	int result;

	initialize(square);
	for (;;)
	{
		printboard(square);
		choice =  getinput();
                if (choice == 'q')
                  break;
                else if (choice == '\n')
                  continue;
                else {
		  updateboard(choice, square, marker);
		  result =  checkwin(square);
		  if (result)
		  { 
		  	printf("%c wins\n", marker);
			initialize(square);
			continue;
		  }
		  result =  checktie(square);
		  if (result)
		  { 
		  	printf("Match was tied\n");
			initialize(square);
			continue;
		  }
		  if (marker == USER1)
		  	marker = USER2;
		  else
		  	marker = USER1;
		}
	}
	return 0;
}

int checkwin(char *square)
{
	int winner = 0;
	/*row 1*/
	if (square[0] == square[1] && square[1] == square[2])
		winner = 1;
	/*row 2*/
	else if (square[3] == square[4] && square[4] == square [5])
		winner = 1;
	/*row 3*/
	else if (square [6] == square[7] && square[7] == square[8])
		winner =  1;
	/*diagonal 1*/
	else if (square [0] == square[4] && square[4] == square[8])
		winner = 1;
	/*diagonal 2*/
	else if (square [2] == square[4] && square[4] == square[6])
		winner = 1;
	/*column 1*/
	else if (square [0] == square[3] && square [3] == square [6])
		winner = 1;
	/*column 2*/
	else if (square [1] == square [4] && square [4] == square [7])
		winner = 1;
	/*column 3*/
	else if (square [2] == square [5] && square [5] == square [8])
		winner = 1;
	/*otherwise*/
	else
		winner = 0;
	return winner;
}

int checktie(char *square)
{
	int count = 0;
	for(int i = 0; i<9; i++)
	{
		if(square[i] == USER1 || square[i] == USER2)
		{
			count++;
		} 
	}
	if (count == 9)
		return 1;
return 0;
}


void printboard(char *square)
{
        printf("\n");
	printf("%c %c %c\n", square[0], square[1], square[2]); 
	printf("%c %c %c\n", square[3], square[4], square[5]); 
	printf("%c %c %c\n", square[6], square[7], square[8]); 
}

void initialize(char *square)
{
	square[0] = '1';
	square[1] = '2';
	square[2] = '3';
	square[3] = '4';
	square[4] = '5';
	square[5] = '6';
	square[6] = '7';
	square[7] = '8';
	square[8] = '9';
	
}

char getinput()
{
	char value;
	printf("Enter a valid value or q to quit: \n");
	scanf("%c", &value);
	return value;
}

void updateboard(char value, char *square, char marker)
{
	printf("current marker is %c\n", marker);
	for(int i=0; i<9; i++)
	{
		if (square[i] == value){
			square[i] = marker;
			break;
		}
	}
}
