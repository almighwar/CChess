#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Clear console function
void cl() {
	system("clear");
}

void bengo(){
	int r = rand() % 4;
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
	}
}
