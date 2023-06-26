  /*---------------------------------------*/
 /*            卂ㄥ爪丨Ꮆ卄山卂尺            */
/*---------------------------------------*/

#include "lib.h"


int main(void) {
    char x, p[4];
    int y, i;
    int n = 0;
	
	// input functions  to ignore
	void araa(){
		scanf(" %19s", p);
	}
	
	void ara(){
	y = getchar();
	fflush(stdin);
	y = getchar();
	}
	
	void pn(){
	for(;;){n++; break;}
	printf(CLR_B "Puzzle:" CBL_N "%d\n", n);
	}

    // Clear function 
    cl();

    // Display the menu options
    chesstext();
	printf(BLD "Chess Game\n" CBL_N "1: Start Game\n2: Option\n3: About Game\n4: Exit Game\nEnter your choice: ");
    scanf(" %c", &x);

    // The choice
    switch (x) {
    	// The Game
        case '1':
            cl();
            
            // Display the game
            puts(CLR_R "!Important" CBL_N ": uppercase: Black peices & lowercase: White pieces");
            puts(CLR_Y "!Important" CBL_N ": Read the section about game to learn how to put each move in the puzzle \n");
            puts("[░R][ N][░B][ Q][░K][ B][░N][ R]8");
            puts("[ P][░P][ P][░P][ P][░P][ P][░P]7");
            puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
            puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
            puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
            puts("[  ][░░][  ][░░][  ][░░][  ][░░]3");
            puts("[░p][ p][░p][ p][░p][ p][░p][ p]2");
            puts("[ r][░n][ b][░q][ k][░b][ n][░r]1");
            puts("-a---b---c---d---e---f---g---h--");
            printf("\nPuzzles:\n1:Mate\n\nEnter: ");
            
            ara();
            
            switch(y){
           		case '1':
           			cl();
           			
           			// Puzzle mate in one
           			pn();
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
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		// Puzzle mate in one
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░R][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░K]7");
           			puts("[░░][  ][░P][  ][░P][ p][░P][  ]6");
           			puts("[  ][░░][  ][░P][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[  ][░r][  ][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][ p][░p][ p]2");
           			puts("[  ][░░][  ][░░][  ][░k][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop mate in one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "rh3")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		// Puzzle mate in one
            		pn();
           			puts("[░░][  ][░R][  ][░░][ R][░K][  ]8");
           			puts("[  ][░░][ Q][░░][  ][░P][  ][░P]7");
           			puts("[░░][  ][░░][  ][░░][  ][░P][ q]6");
           			puts("[  ][░░][  ][░░][ p][░░][ n][░░]5");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]3");
           			puts("[░p][ p][░p][  ][░░][  ][░░][  ]2");
           			puts("[  ][░░][ k][░r][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop mate in one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "qxh7")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		// Puzzle mate in one
            		pn();
           			puts("[░░][ R][░░][  ][░░][  ][░K][  ]8");
           			puts("[  ][░Q][  ][░░][  ][░P][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][ b][░P][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]3");
           			puts("[░p][ p][░░][  ][░░][  ][░░][  ]2");
           			puts("[  ][░k][  ][░░][  ][░░][  ][░r]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop mate in one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "rh8")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		// Puzzle mate in one
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][ r][░░][  ]6");
           			puts("[  ][░k][  ][░K][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[  ][░░][  ][░░][  ][░p][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][  ][░b][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][ b][░r]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop mate in one
            		for(i=0;;){
            			printf("\nremember the move of pawn like that e5 or xd6\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "f4")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		// Puzzle mate in one
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][ r][░░]5");
           			puts("[░░][  ][░░][  ][░K][  ][░░][  ]4");
           			puts("[  ][░░][ k][░n][  ][░R][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop mate in one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "re5")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		// Puzzle mate in one
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░r]5");
           			puts("[░░][  ][░░][ K][░░][  ][░░][  ]4");
           			puts("[  ][░k][ r][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][ p][░░][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][ b][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop mate in one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "f3")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		// Puzzle mate in one
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][ K][░R][  ][░░][  ]4");
           			puts("[  ][░k][  ][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][ p][░░][  ][░░][ q]2");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop mate in one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "qd6")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		// Puzzle mate in one
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░p][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][ K][░░][  ]6");
           			puts("[  ][░░][  ][░░][  ][░b][  ][░░]5");
           			puts("[░░][  ][░░][  ][░░][ k][░░][  ]4");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop mate in one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "f8=q")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		// Puzzle mate in one
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░r][  ][░░][  ][░░][  ][░░][  ]6");
           			puts("[  ][░░][  ][░K][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][ p][░n][  ][░░][  ]4");
           			puts("[  ][░░][ k][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop mate in one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "nf6")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		// Puzzle mate in two
            		pn();
           			puts("[░░][ q][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[ K][░░][  ][░k][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop move one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "kc3")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		/* Move 2 */
            		pn();
           			puts("[░░][ q][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
           			puts("[░K][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[  ][░░][ k][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop move two
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "qb4")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		// End
            		
            		// Puzzle mate in two
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop move one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "rh8")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		/* Move 2 */
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop move two
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "rh8")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		// End
            		
            		// Puzzle mate in two
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop move one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "rh8")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		/* Move 2 */
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop move two
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "rh8")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		// End
            		
            		// Puzzle mate in two
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop move one
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "rh8")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		
            		/* Move 2 */
            		pn();
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]8");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]7");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]6");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]5");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]4");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]3");
           			puts("[░░][  ][░░][  ][░░][  ][░░][  ]2");
           			puts("[  ][░░][  ][░░][  ][░░][  ][░░]1");
           			puts("-a---b---c---d---e---f---g---h--");
           			
           			// Loop move two
            		for(i=0;;){
            			printf("\nWhat's the move: ");
            			araa();
            			if(!strcmp(p, "rh8")){
            				bengo();
            				break;
            			}
            			else{
            				i++;
            				continue;
            			}
            		}
            		// End
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
