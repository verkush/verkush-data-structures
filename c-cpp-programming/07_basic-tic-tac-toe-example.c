#include <stdio.h>
#include <stdlib.h>

char matrix[3][3]; /*Tic-Tac-Toe matrix*/

char check(void);
void init_matrix(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matrix(void);


int main()
{
	char done;
	printf("========== TIC-TAC-TOE ========\n");
	printf("You will play against computer\n");

	done = ' ';
	init_matrix();

	do {
		disp_matrix();
		get_player_move();
		done = check(); /* Check if winner */
		
		if(done != ' ') 
		{
			break;
		}

		get_computer_move();
		done = check(); /* Check if winner */

	} while(done == ' ');

	if(done == 'X')
	{
		printf("You Won!\n");
	}
	else {
		printf("I won!!\n");
	}
	disp_matrix(); /* Show final positions */

	return 0;
}

/*Initialize matrix*/
void init_matrix(void)
{
	int i, j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			matrix[i][j] = ' ';
		}
	}
}

/* Get a player's move */
void get_player_move(void)
{
	int x, y;
	printf("Enter X, Y coordinates for your move: ");
	scanf("%d%*c%d", &x, &y);

	x--, y--;
	if(matrix[x][y] != ' ')
	{
		printf("Invalid move, try again. \n");
		get_player_move();
	}
	else 
	{
		matrix[x][y] = 'X';
	}
}

/* Get a computer move*/
void get_computer_move(void)
{
	int i, j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(matrix[i][j] == ' ')
			{
				break;
			}
		}
		if(matrix[i][j] == ' ')
		{
			break;
		}
	}

	if(i * j == 9)
	{
		printf("Draw\n");
		exit(0);
	}
	else
	{
		matrix[i][j] = 'O';
	}
}

/* Display the matrix */
void disp_matrix(void)
{
	int t;
	for(t = 0; t < 3; t++)
	{
		printf(" %c | %c | %c ", matrix[t][0], matrix[t][1], matrix[t][2]);
		if(t != 2)
		{
			printf("\n--- | --- | ---\n");
		}
	}
	printf("\n");
}

/* Check if there is a winner */
char check(void)
{
	int i;

	for(i = 0; i < 3; i++) /*check rows*/
	{
		if(matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2])
		{
			return matrix[i][0];
		}
	}

	for(i = 0; i <  3; i++) /*check columns*/
	{
		if(matrix[0][i] == matrix[1][i] && matrix[0][i] == matrix[2][i])
		{
			return matrix[0][i];
		}
	}

	if(matrix[0][0] == matrix[1][1] && matrix[0][0] == matrix[2][2]) /*check diagonals*/
	{
		return matrix[0][0];
	}

	if(matrix[0][2] == matrix[1][1] && matrix[0][2] == matrix[2][0])
	{
		return matrix[0][2];
	}

	return ' ';
}