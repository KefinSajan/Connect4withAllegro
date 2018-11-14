

#ifndef setupBoard
#define setupBoard

//Colors Used (RGB)
int blue = makecol(0, 0, 255);
int white = makecol(255, 255, 255);
int black = makecol(0, 0, 0);
int red = makecol(220, 20, 60);
int yellow = makecol(240, 230, 100);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Draws the blue board with black circles and number indication of the columns
void setupBoard()
{
	//Colors
	int blue = makecol(0, 100, 255);
	int white = makecol(255, 255, 255);
	int black = makecol(0, 0, 0);
	int red = makecol(220, 20, 60);
	int yellow = makecol(240, 230, 100);
	int blue2 = makecol(0, 0, 140);
	int blue3 = makecol(0, 0, 205);

	rect(screen, 0, 0, SCREEN_W - 1, SCREEN_H - 1, black);
	//Screen Boarder

	rectfill(screen, 80, 80, SCREEN_W - 80, SCREEN_H - 80, blue);
	//Board Border

	rectfill(screen, 100 * scale, 100 * scale, 800 * scale, 700 * scale, blue);
	//Board

	for (int v = 0; v<6; v++)
		for (int h = 0; h<7; h++)
		{
			circlefill(screen, 150 + 100 * (h), 150 + 100 * (v), 48, blue3);
			circlefill(screen, 150 + 100 * (h), 150 + 100 * (v), 46, blue2);
			//Board cut out to make it pretty
			textprintf(screen, font, 50 + 100 * (1), 65, white, "1", 50 + 100 * (1), 65);
			textprintf(screen, font, 50 + 100 * (2), 65, white, "2", 50 + 100 * (2), 65);
			textprintf(screen, font, 50 + 100 * (3), 65, white, "3", 50 + 100 * (3), 65);
			textprintf(screen, font, 50 + 100 * (4), 65, white, "4", 50 + 100 * (4), 65);
			textprintf(screen, font, 50 + 100 * (5), 65, white, "5", 50 + 100 * (5), 65);
			textprintf(screen, font, 50 + 100 * (6), 65, white, "6", 50 + 100 * (6), 65);
			textprintf(screen, font, 50 + 100 * (7), 65, white, "7", 50 + 100 * (7), 65);
			//Indicate the column number for ease to user to win the game
			circlefill(screen, 150 + 100 * (h), 150 + 100 * (v), 44, black);
			//Blank Checkers to be fill in 
		}
}


#endif
