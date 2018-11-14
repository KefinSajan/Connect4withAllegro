
#ifndef welCome
#define welCome


//Colors Used (RGB)
int blue = makecol(0, 0, 255);
int white = makecol(255, 255, 255);
int black = makecol(0, 0, 0);
int red = makecol(220, 20, 60);
int yellow = makecol(240, 230, 100);


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Welcome screen before the game begins 
void welCome()
{
	srand(time(0));
	int x = rand() % 255;
	int white = makecol(x, x, x);
	int white2 = makecol(255, 255, 255);
	int black = makecol(0, 0, 0);
	
	while (!key[KEY_ENTER]){

		textprintf(screen, font, (SCREEN_W / 2 - 50), (SCREEN_H / 2 - 12), white2, "Welcome to C0NNECT4!", (SCREEN_W / 2 + 10), (SCREEN_H / 2));
		textprintf(screen, font, (SCREEN_W / 2 - 70), (SCREEN_H / 2), white2, "Press ENTER to continue ", (SCREEN_W / 2 + 12), (SCREEN_H / 2 + 12));
		textprintf(screen, font, (SCREEN_W / 2 - 52), (SCREEN_H / 2 + 12), white2, "Press ESC to escape ", (SCREEN_W / 2 + 12), (SCREEN_H / 2 + 24));
		textprintf(screen, font, (SCREEN_W / 2 - 52), (SCREEN_H / 2 + 32), white2, "A few instructions:", (SCREEN_W / 2 + 12), (SCREEN_H / 2 + 24));
		textprintf(screen, font, (SCREEN_W / 2 - 200), (SCREEN_H / 2 + 40), white2, "Select the column number you want to place the checkers with the keyboard", (SCREEN_W / 2 + 12), (SCREEN_H / 2 + 24));
			textprintf(screen, font, (SCREEN_W / 2 - 100), (SCREEN_H / 2 + 48), white2, "First player to have four checkers in a row wins", (SCREEN_W / 2 + 12), (SCREEN_H / 2 + 24));
		textprintf(screen, font, 1, 2, white2, "A game by William Nash and Kefin Sajan", SCREEN_W, SCREEN_H);
		//Title and info for players 
		if (key[KEY_ESC])
			break;
	}

	rectfill(screen, 80, 80, SCREEN_W - 80, SCREEN_H - 80, black);
	textprintf(screen, font, 1, 2, makecol(rand() % 255, 255, rand() % 255), "A game by William Nash and Kefin Sajan", SCREEN_W, SCREEN_H);
	textprintf(screen, font, SCREEN_W/2 - 75, SCREEN_H - 30, white, "Press the Enter Key to reset", SCREEN_W/2-75, SCREEN_H - 30);
	textprintf(screen, font, (SCREEN_W / 2 - 50), 30, white, "C0NNECT4!", (SCREEN_W / 2 + 10), 30);

}



#endif
