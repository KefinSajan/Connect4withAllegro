# Connect4withAllegro 
Created By William Nash and Kefin Sajan

Connect Four is a two-player puzzle game with billions of winning possibilities. This game is played on blue grid, 7 by 6 cells. 
Each player starts with a set of checkers, one red and one yellow. The objective is to place four of a player’s checkers in a row.
This can be done diagonally, vertically, or horizontally. The game is simple. You drop your color check into one of the column slots. Doing this will allow your checker to occupy one given cell. If a player drops a checker in a column that is already occupied, the checker will sit on top of the previously dropped checker, and they will continue to stack. Once four checkers are adjacent to one another, the game is over!    
Fun Fact: According to John Tromp from Online Encyclopedia of Integer Sequence, there are 4,531,985,219,092 positions depending on how many of the circles are filled with checkers.   ( https://oeis.org/A212693 )

# Main Functions 
 - ‘welCome()’ 
   - Intoduction screen before the game starts showing title and instructions  
 - ‘setupBoard()’ 
   - Draws the game board as well as the blank checkers 
 - ‘printChecks()’ 
   - Draws the user color specified checkers on the board 
 - ‘checkWinner()’ 
   - With four for loops, the program checks for any row of four of the same color 
 - ‘TheEnd()’ 
   - Shows the winner and end of game screen 

# Requirements
- Dev-C++ with Allegro Package 
 - Packages used (some are not required to function)
   - AllegroFont, Allegro, AllegroGL, AllegroOGG, binutils, Allegro supplement, 
   - Allegro5, Dev-C++ Map file, gcc-core, gcc-g++, GNU Debugger, glut, GNU Make, 
   - MinGW runtime, OpenGLUT, Windows32 API

# ScreenShots
 - Layout
![connect4 sample](https://user-images.githubusercontent.com/23088470/48498035-5269a000-e803-11e8-8ece-171d483c7c40.PNG)
 - Game Won Example
![connect4 sample game won](https://user-images.githubusercontent.com/23088470/48498036-5269a000-e803-11e8-8e09-f0da962c1def.PNG)
 - Game Start Screen 
![connect4 sample start screen](https://user-images.githubusercontent.com/23088470/48498037-5269a000-e803-11e8-8d40-cd790cdd1ca8.PNG)

