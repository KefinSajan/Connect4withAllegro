
#include <allegro.h>
#include <iostream>
#include <time.h>
#include <"setupBoard.h">
#include <"checkWinner.h">
#include <"TheEnd.h">
#include <"printChecks.h">
#include <"welCome.h">


void init();
void deinit();
void setuplayout();
int scale = 1;
int gameover = 0;
bool reset = 1;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Colors Used (RGB)
int blue = makecol(0, 0, 255);
int white = makecol(255, 255, 255);
int black = makecol(0, 0, 0);
int red = makecol(220, 20, 60);
int yellow = makecol(240, 230, 100);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//initial Setup

setupBoard();

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
	init();
	welcome();

	int user = 1;
		//Default is set to user one
		int blue = makecol(0, 0, 255);
		int black = makecol(0, 0, 0);
		int red = makecol(200, 0, 40);
		int yellow = makecol(240, 230, 100);
        //Colors used in the game
	do
    {
            
		int col1_y = 650;
		int col2_y = 650;
		int col3_y = 650;
		int col4_y = 650;
		int col5_y = 650;
		int col6_y = 650;
		int col7_y = 650;

		int col1_x = 150;
		int col2_x = 250;
		int col3_x = 350;
		int col4_x = 450;
		int col5_x = 550;
		int col6_x = 650;
		int col7_x = 750;
     //Column positions for the game to start
              //Column positions are decreased by 100 each time a checker is placed on that column
              
              
        rectfill(screen,SCREEN_W,SCREEN_H,SCREEN_W,SCREEN_H,black);        
		int usercol;
        //Int passed to printchecker function to indicate the color
        
		
		setupboard();
		//To draw the board and checker places
		
        int Filledin[7][6];
        //To keep track of what has been filled in
        
        
		for (int i = 0; i < 7; i++){
			for (int j = 0; j < 6; j++)
			{
				Filledin[i][j] = 0;
			}
		}
		//Set everything to 0
        
		int gameover = 0;
		//Variable to let the program know that the game has ended
		
        srand(time(0));
        
		while (gameover == 0){

			srand(time(0));
			int x = rand() % 255;
			
			for(int i=0;i<10;i++){
			int white = makecol(rand() % 255, rand() % 255, rand() % 255);
			textprintf(screen, font, 1, 2, white, "A game by William Nash and Kefin Sajan", SCREEN_W, SCREEN_H);
			textprintf(screen, font, (SCREEN_W / 2 - 50), 30, white, "C0NNECT4!", (SCREEN_W / 2 + 10), 30);
			rectfill(screen,0, SCREEN_H - 79,SCREEN_W, SCREEN_H -79,black);
			//Title and credits
            }
            
			if (user == 1){
				rectfill(screen, 1, SCREEN_H - 20, SCREEN_W, SCREEN_H, black);
				textprintf(screen, font, 1, SCREEN_H - 20, red, "Player 2's turn (RED)", SCREEN_W, SCREEN_H);
				usercol = 1;
			}
			else  if (user == 2){
				rectfill(screen, 1, SCREEN_H - 20, SCREEN_W, SCREEN_H, black);
				textprintf(screen, font, 1, SCREEN_H - 20, yellow, "Player 1's turn (YELLOW)", SCREEN_W, SCREEN_H);
				usercol = 2;
			}
            //Indicate which user's turn it is, changes color based on player

			int val;
			val = readkey();
			//To get the user keystroke
			
			int ROW = 0;
			//Reset the user selection

			if (key[KEY_1])
			{   if (col1_y<=149)
                continue;
				printchecks(col1_x, col1_y, 45, usercol);
				//To display the checker on the screen 
				ROW = (col1_y - 50) / 100;
				Filledin[ROW][1] = usercol;
				//Mark the filled into the system 
				col1_y -= 100;
				//Update the column position
			}

			if (key[KEY_2])
			{  
               if (col2_y<=149)
                continue;
				ROW = (col2_y - 50) / 100;
				Filledin[ROW][2] = usercol;
				printchecks(col2_x, col2_y, 45, usercol);
				col2_y -= 100;
			}

			if (key[KEY_3])
			{   if (col3_y<=149)
                continue;
				ROW = (col3_y - 50) / 100;
				Filledin[ROW][3] = usercol;
				printchecks(col3_x, col3_y, 45, usercol);
				col3_y -= 100;
			}

			if (key[KEY_4])
			{   if (col4_y<=149)
                continue;
				ROW = (col4_y - 50) / 100;
				Filledin[ROW][4] = usercol;
				printchecks(col4_x, col4_y, 45, usercol);
				col4_y -= 100;
			}

			if (key[KEY_5])
			{   if (col5_y<=149)
                continue;
				ROW = (col5_y - 50) / 100;
				Filledin[ROW][5] = usercol;
				printchecks(col5_x, col5_y, 45, usercol);
				col5_y -= 100;
			}

			if (key[KEY_6])
			{   if (col6_y<=149)
                continue;
				ROW = (col6_y - 50) / 100;
				Filledin[ROW][6] = usercol;
				printchecks(col6_x, col6_y, 45, usercol);
				col6_y -= 100;
			}

			if (key[KEY_7])
			{   if (col7_y<=149)
                continue;
				ROW = (col7_y - 50) / 100;
				Filledin[ROW][7] = usercol;
				printchecks(col7_x, col7_y, 45, usercol);
				col7_y -= 100;
			}

			gameover = checkwinner(Filledin);
			//To check if the players have won the game

			if (user == 2&&ROW>1)
				user = 1;
			else if (user == 1&&ROW>1)
				user = 2;
			//To switch the players after a turn 

			if (gameover == 1)
				TheEnd(user);
				//TO display the outro if players want to quit

			if (key[KEY_DEL])
				reset = 0;
				
          
            if (key[KEY_ENTER]&&reset==1)
            gameover = 1;
            //To reset the board
            
			if (key[KEY_ESC]){
				gameover = 1;
				reset = 0;
            }
			//To exit the game
		}
	} while (reset ==1);
	//If the user want to play again #do-while loop
	
	deinit();
	return 0;
}
END_OF_MAIN()

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 900 * scale, 800 * scale, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
}

void deinit() {
	clear_keybuf();

}






