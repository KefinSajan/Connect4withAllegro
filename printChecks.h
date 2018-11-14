
#ifndef printChecks
#define printChecks

//Colors Used (RGB)
int blue = makecol(0, 0, 255);
int white = makecol(255, 255, 255);
int black = makecol(0, 0, 0);
int red = makecol(220, 20, 60);
int yellow = makecol(240, 230, 100);


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//To draw the circles on the boards relative to the information passed to it 
void printChecks(int col_x, int col_y, int radius, int usercol)
{
	int red = makecol(178, 34, 34);
	int red2 = makecol(220, 20, 60);
	int red3 = makecol(255, 0, 0);
    //Add effect to the red checker

	int yellow = makecol(240, 240, 0);
	int yellow2 = makecol(255, 255, 0);
	int yellow3 = makecol(255, 255, 153);
 //Add effect to the yellow checker
 
	int user = 2;
	
	//To switch between the colors
	if (usercol == 1)
		user = 1;
	else if (usercol == 2)
		user = 2;

	if (user == 1){
		circlefill(screen, col_x, col_y, radius, red);
		circlefill(screen, col_x, col_y, (radius - 5), red2);
		circlefill(screen, col_x, col_y, (radius - 10), red3);
		//Print the user color specified checker
	}
	else if (user == 2){
		circlefill(screen, col_x, col_y, radius, yellow);
		circlefill(screen, col_x, col_y, (radius - 5), yellow2);
		circlefill(screen, col_x, col_y, (radius - 10), yellow3);
			//Print the user color specified checker
	}
}


#endif
