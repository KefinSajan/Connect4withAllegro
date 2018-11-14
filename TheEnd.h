
#ifndef TheEnd
#define TheEnd


//Colors Used (RGB)
int blue = makecol(0, 0, 255);
int white = makecol(255, 255, 255);
int black = makecol(0, 0, 0);
int red = makecol(220, 20, 60);
int yellow = makecol(240, 230, 100);


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Outro text to indicate the end of the game 
void TheEnd(int user)
{
	srand(time(0));
	int x = rand() % 255;
	int white = makecol(255, 255, 255);
	int white2 = makecol(rand() % 255, rand() % 255, rand() % 255);
	int black = makecol(0, 0, 0);
	int exit = 0;
	
	if (user == 1){
		while (!key[KEY_ENTER]){
			srand(time(0));
			int white = makecol(rand() % 255, rand() % 255, rand() % 255);
			textprintf(screen, font, (SCREEN_W / 2 - 26), (SCREEN_H - 75), white, "Player 1 WON!", (SCREEN_W + 13), (SCREEN_H - 75));
			textprintf(screen, font, 1, 2, white, "A game by William Nash and Kefin Sajan", SCREEN_W, SCREEN_H);
		    textprintf(screen, font, SCREEN_W/2 - 80, SCREEN_H - 50, white, "Press the Escape Key to close", SCREEN_W/2 + 50, SCREEN_H - 50);
		
			
			 rectfill(screen,SCREEN_W,SCREEN_H,SCREEN_W,SCREEN_H,black);   
		}
		 //rectfill(screen,SCREEN_W,SCREEN_H,SCREEN_W,SCREEN_H,black);   
	}
	else if (user == 2){
		while (!key[KEY_ENTER]){
			srand(time(0));
			int white = makecol(rand() % 255, rand() % 255, rand() % 255);
			textprintf(screen, font, (SCREEN_W / 2 - 26), (SCREEN_H - 75), white, "Player 2 WON!", (SCREEN_W + 13), (SCREEN_H - 75));
			textprintf(screen, font, 1, 2, white, "A game by William Nash and Kefin Sajan", SCREEN_W, SCREEN_H);
			textprintf(screen, font, SCREEN_W/2 - 80, SCREEN_H - 50, white, "Press the Escape Key to close", SCREEN_W/2 + 50, SCREEN_H - 50);
            //If the player 2 wins and may want to reset the board	
             rectfill(screen,SCREEN_W,SCREEN_H,SCREEN_W,SCREEN_H,black);   
		}
		 //rectfill(screen,SCREEN_W,SCREEN_H,SCREEN_W,SCREEN_H,black);   
	}
	// rectfill(screen,SCREEN_W,SCREEN_H,SCREEN_W,SCREEN_H,black);   
}


#endif
