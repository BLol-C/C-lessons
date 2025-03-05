#include <stdio.h>
#include <stdlib.h>


int choice = 0;
int redo = 0;
int info_check = 0;
int room_check = 0;
int time_check = 0;
int redo_check = 0;

void room();
void info();
void timer();

int main() {
    while(1) {
        printf("========== RESERVATION MENU ==========\n");
        printf(" [1] ROOM\n");
        printf(" [2] INFO\n");
        printf(" [3] EXIT\n");

        do {
            printf("Select : ");
            scanf("%d", &choice);

            if (choice == 1) {
                info_check = 1; // check if you are already reserved
                room();
                break; // do-while
            } else if (choice == 2) {
                info();
                break; // do-while
            } else if (choice == 3) {
                exit(0); // exit
            } else {
                printf("PLEASE SELECT BETWEEN 1-3!\n");
            }
        } while (choice < 1 || choice > 3);
    }
    return 0;
}

void room() {
    if (redo_check == 1) {
        printf("YOU ALREADY RESERVED!\n");
        return; // main();
    }

    while(1) {
        printf("========== ROOM MENU ==========\n");
        printf(" [1] ROOM 1\n");
        printf(" [2] ROOM 2\n");
        printf(" [3] ROOM 3\n");
        printf(" [4] BACK TO RESERVATION MENU\n");

        printf("Select : ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            info_check = 1;
            room_check = choice; // check room = n?
            timer();
            break; //while-loop goto main
        } else if (choice == 4) {
            choice = 0;
            info_check = 0;
            break; //while-loop goto main
        } else {
            printf("PLEASE SELECT BETWEEN 1-4!\n");
        }
    }
}

void timer() {
    while(1) {
		if(room_check == 1){
        	printf("========== SELECT TIME ROOM %d ==========\n", room_check);
        	printf(" [1] [FULL] 8:00 - 9:00\n");
        	printf(" [2] [FREE] 9:00 - 10:00\n");
        	printf(" [3] [FREE] 10:00 - 11:00\n");
        	printf(" [4] BACK TO ROOM MENU\n");

        	printf("Select : ");
        	scanf("%d", &choice);

        	if (choice == 1) {
        	    time_check = choice;
        	    printf("THIS TIME IS FULL PLEASE SELECT OTHERS! \n");
        	} else if (choice == 2 || choice == 3) {
        	    time_check = choice;
        	    printf("SUCCESS!\n");
        	    info();
        	    break; // main
        	} else if (choice == 4) {
        	    choice = 0;
        	    info_check = 0;
        	    room();
        	    break; // main
        	} else {
        	    printf("PLEASE SELECT BETWEEN 1-4!\n");
        	}
		}
		if(room_check == 2){
        	printf("========== SELECT TIME ROOM %d ==========\n", room_check);
        	printf(" [1] [FULL] 8:00 - 9:00\n");
        	printf(" [2] [FULL] 9:00 - 10:00\n");
        	printf(" [3] [FREE] 10:00 - 11:00\n");
        	printf(" [4] BACK TO ROOM MENU\n");

        	printf("Select : ");
        	scanf("%d", &choice);

        	if (choice == 1 || choice == 2) {
  				time_check = choice;
        	    printf("THIS TIME IS FULL PLEASE SELECT OTHERS! \n");
        	} else if (choice == 3){
				time_check = choice;
				printf("SUCCESS!\n");
				info();
				break; // main
			} else if (choice == 4) {
        	    choice = 0;
        	    info_check = 0;
        	   	room();
        	    break; // main
        	} else {
        	    printf("PLEASE SELECT BETWEEN 1-4!\n");
        	}
		}
		if(room_check == 3){
        	printf("========== SELECT TIME ROOM %d ==========\n", room_check);
        	printf(" [1] [FREE] 8:00 - 9:00\n");
        	printf(" [2] [FREE] 9:00 - 10:00\n");
        	printf(" [3] [FREE] 10:00 - 11:00\n");
        	printf(" [4] BACK TO ROOM MENU\n");

        	printf("Select : ");
        	scanf("%d", &choice);

        	if (choice == 1 || choice == 2 || choice == 3) {
				time_check = choice;
				printf("SUCCESS!\n");
				info();
				break; // main
        	}else if (choice == 4) {
        	    choice = 0;
        	    info_check = 0;
        	    room();
        	    break; // main
        	} else {
        	    printf("PLEASE SELECT BETWEEN 1-4!\n");
        	}
		}
    }
}

void info() {
    if (info_check == 0) { // check
        printf("PLEASE SELECT ROOM FIRST!\n");
        return;
    }

    printf("========== INFO ==========\n");
    printf("[ROOM %d]\n", room_check);

    if (time_check == 1)
        printf("[TIME 8:00 - 9:00]\n");
    else if (time_check == 2)
        printf("[TIME 9:00 - 10:00]\n");
    else if (time_check == 3)
        printf("[TIME 10:00 - 11:00]\n");

    printf("========== SUCCESSFUL ==========\n");
    printf("DO YOU WANT TO REDO THE RESERVATION\n");
    printf(" [1] YES\n");
    printf(" [2] NO\n");

    do {
        printf("Select : ");
        scanf("%d", &redo);
    } while (redo < 1 || redo > 2);

    if (redo == 1) {
        redo_check = 0;
        info_check = 0;
    } else if (redo == 2) {
        redo_check = 1;
    }
}