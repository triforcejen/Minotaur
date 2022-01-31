#include "bool.h"
#include "game_loop.h"

// Game loop for the rest of the program.

int main(void){
	bool quit = false;
	
	while(quit == false) {
		quit = Game_Loop();
	}
	return 0;
}
