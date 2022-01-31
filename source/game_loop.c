#include "game_loop.h"
#include <stdio.h>

void Debug(void){
	printf("Game running... \n");
}

void Print_Menu(void){
	printf(" Q: Fight.\t W: Rest.\t E: Sacrifice.\t R: Pray.\t T: Stats.\t Y: Quit\t");
	printf("\n");
}

void Fight(void){
	printf("You fight an intruder.\n");
}

void Rest(void){
	printf("You rest for now.\n");
}

void Sacrifice(void){
	printf("You sacrifice a fallen enemy to your deity.\n");
}
void Pray(){
	printf("You pray to your deity.\n");
}

void Stats(){
	printf("\t LEVEL: ");
	printf("\t HP: ");
	printf("\t ATTACK:");
	printf("\t DEFENCE: ");
	printf("\n");
}

bool Process_Input(char input){
	bool quit = false;
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
		case 'y':
		case 'Y':
			quit = true;
			break;
		default:
			printf("Invalid input. \n");
			break;
	}
	return quit; 
}

bool Game_Loop(void){
	//Debug();
	char player_Input;
	//Set menu loop variable.
	bool quit = false;
	
	//Start menu loop.
	while(quit == false){
		//Print menu options.
		Print_Menu();
		
		//Print status.
		Stats();
		printf("\n");
	
		//Read player input.
		scanf(" %c", &player_Input);
		
		//Process player input.
		quit = Process_Input(player_Input);

		//Update game status.
	}
	//End menu loop.
	return true;
}
