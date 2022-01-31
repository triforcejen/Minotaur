#include "game_loop.h"
#include <stdio.h>

void Debug(void){
	printf("Game running... \n");
}

void Print_Menu(void){
	printf(" Q: Fight.\t W: Rest.\t E: Sacrifice.\t R: Pray.\t T: Stats.\n");
}

void Fight(void){}
void Rest(void){}
void Sacrifice(void){}
void Pray(){}

void Stats(){
	printf("\t LEVEL: ");
	printf("\t HP: ");
	printf("\t ATTACK:");
	printf("\t DEFENCE: ");
}

void Process_Input(char input){
	
	switch(input){
		case 'q':
		case 'Q':
			Fight();
			break;
		case 'w':
		case 'W':
			Rest();
			break;
		case 'e':
		case 'E':
			Sacrifice();
			break;
		case 'r':
		case 'R':
			Pray();
			break;
		case 't':
		case 'T':
			Stats();
			break;
		default:
			printf("Invalid input. \n");
			break;
	} 
}

bool Game_Loop(void){
	//Debug();

	//Set menu loop variable.

	//Start menu loop.

		//Print menu options.
		Print_Menu();
		
		//Print status.
		Stats();
		printf("\n");
	
		//Read player input.
		char player_Input = getchar();
		
		//Process player input.
		Process_Input(player_Input);

		//Update game status.

	//End menu loop.
	return false;
}
