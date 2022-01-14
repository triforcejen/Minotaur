#include "Bool.h"
#include "Game_Loop.h"

// Game loop for the rest of the program.

int main(void){
	bool game_Running = true;
	
	while(game_Running) {
		game_Running = Game_Loop();
	}
	return 0;
}
