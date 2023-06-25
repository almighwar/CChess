  /*---------------------------------------*/
 /*           卂ㄥ爪丨Ꮆ卄山卂尺           */
/*---------------------------------------*/


#include <stdio.h>
#include <string.h>
#include "lib.h"

int main(void) {
    char x, p[4];
    int y, i;
	
	// input functions  to ignore
	void araa(){
		scanf(" %s", &p);
	}
	
	void ara(){
	y = getchar();
	fflush(stdin);
	y = getchar();
	}

    // Clear function 
    cl();

    // Display the menu options
    printf("Chess Game\n1: Start Game\n2: Option\n3: About Game\n4: Exit Game\nEnter your choice: ");
    scanf(" %c", &x);

    // The choice
    switch (x) {
    	// The Game
        case '1':
            cl();
            
            // Display the game
            puts("\033[1;33m!Important\033[0m : uppercase: Black peices & lowercase: White pieces");
            puts("\033[1;31m!Important\033[0m Read the section about game to learn how to put each move in the puzzle \n");
            puts("[░R][ N][░B][ Q][░K][ B][░N][ R]8");
            puts("[ P][░P][ P][░P][ P][░P][ P][░P]7");
            puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
            puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
            puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
            puts("[  ][░░][  ][░░][  ][░░][  ][░░]3");
            puts("[░p][ p][░p][ p][░p][ p][░p][ p]2");
            puts("[ r][░n][ b][░q][ k][░b][ n][░r]1");
            puts("-a---b---c---d---e---f---g---h--");
            printf("\nPuzzles:\n1:Mate in 1\n2:Mate in 2\nEnter: ");
            
            ara();
            
            switch(y){
           		case '1':
           			cl();
           			puts("[░░][  ][░░][ Q][░░][ R][░K][  ]8");
           			puts("[  ][░░][  ][░░][  ][░P][ B][░P]7");
           			puts("[░░][  ][░░][  ][░░][ q][░P][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[  ][░░][ b][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][ p][░p][ p]2");
           			puts("[  ][░░][  ][░░][  ][░░][ k][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");

           			
            			
            		// Loop mate in one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "qxg7")){
            				puts("Correct");
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            }
            break;
		
		// Option
        case '2':
            cl();
            
            // Display the menu of option menu
            printf("1: Controls\n2: Display\n3: Sound\nEnter a choice: ");

            // The choice
            // Another Solution :
            
            /*ch = getchar();
			fflush(stdin);
			ch = getchar(); */
			
			// To this
            while ((y = getchar()) != '\n' && y != EOF);
			y = getchar();
			
			// There's no choice
            switch (y) {
                case '1':
                    puts("There's no Option, This for exercise");
                    break;
                default:
                    puts("Also There's no Option, Just exercise");
                    break;
            }
            break;
		
		// About Game
        case '3':
            cl();

            // Information about the game
            printf("Exercise: Menu Game\nAuthor: almighwar\nAccounts:\n\tLichess: almighwar_1\n\tChess.com: almighwar\n\nAbout the game: 2D Chess Game to learn chess tikitaka and games and solve puzzles\n\tit'll take another dimensions\n");
            break;
            
		// Exit the game
        case '4':
            puts("Exiting...");
            break;
    }

    return 0;
}
