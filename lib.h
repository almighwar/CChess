#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "chess.h"

#define CBL_N  "\033[0m"
#define BLD  "\033[1m"
#define CLR_B  "\033[1;34m"
#define CLR_Y  "\033[1;33m"
#define CLR_R  "\033[1;31m"
#define ANM_BRED  "\033[1;5;31m"
#define CLR_BB  "\033[1;34m"

// Clear console function
void cl() {
	system("clear");
}

void bengo(){
	int r = rand() % 6;
	switch (r) {
		case 1:
			puts("Bengo\n");
			break;
		case 2:
			puts("Correct\n");
			break;
		case 3:
			puts("right\n");
			break;
		case 4:
			puts("Let's go\n");
			break;
		case 5:
			puts("Check mate\n");
			break;
		case 6:
			puts("Victory\n");
			break;
	}
}
