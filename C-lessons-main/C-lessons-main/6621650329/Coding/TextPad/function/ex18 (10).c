#include <stdio.h>
#define MAX 3

void time(int room_choice);  // ปรับฟังก์ชันเวลาให้รับตัวเลือกห้อง
void room();
void info();
void select_room();

int choice_room;
int choice_time;

int main(){
    char char1;

    printf("Please log in username [a-z]\n");
    printf("Ans : ");
    scanf("%c", &char1);
    getchar();  // Clear the newline character left in the buffer

    // เรียกฟังก์ชันเลือกห้อง
    select_room();

    return 0;
}

void select_room() {
    printf("========== Please select room to reservation ==========\n");
    printf(" - option 1 [ROOM 1]\n");
    printf(" - option 2 [ROOM 2]\n");
    printf(" - option 3 [ROOM 3]\n");
    printf(" - option 4 [EXIT]\n");

    do {
        printf("Ans : ");
        scanf("%d", &choice_room);
        if (choice_room < 1 || choice_room > 4) {
            printf("Invalid input please choose (1-4)!\n");
        } else if (choice_room == 4) {
            printf("Exiting...\n");
            return; // Exit program
        }
    } while (choice_room < 1 || choice_room > 4);

    // เรียกฟังก์ชันห้องที่เลือก
    time(choice_room);
}

void time(int room_choice) {
    if (room_choice == 1) {

        printf("========== Please select time for ROOM 1 ==========\n");
        printf(" - option 1  9:00 - 10:00  AM [FULL]\n");
        printf(" - option 2 10:00 - 11:00  AM [FULL]\n");
        printf(" - option 3 11:00 - 12:00  AM [FREE]\n");
        printf(" - option 4 12:00 - 13:00  AM [FREE]\n");
        printf(" - option 5 13:00 - 14:00  AM [FULL]\n");
        printf(" - option 6 [RETURN TO ROOM SELECTION]\n");
        do {
    		do {
        		printf("Ans : ");
        		scanf("%d", &choice_time);
        		if (choice_time < 1 || choice_time > 6) {
        		    printf("Invalid input please choose (1-6)!\n");
        		} else if (choice_time == 6) {
        		    select_room(); // กลับไปหน้าเลือกห้อง
        		}
    		} while (choice_time < 1 || choice_time > 6);
    			if(choice_time == 1) printf("Full! choos others \n");
    			else if (choice_time == 2) printf("Full!\n");
    			else if (choice_time == 3){
					printf("Successful!\n");
					break;
    			}
    			else if (choice_time == 4) {
					printf("Successful!\n");
					break;
    			}
    			else if (choice_time == 5) printf("Full! choos others!\n");
			} while (choice_time > 1 || choice_time < 5);


    }
    else if (room_choice == 2) {
        printf("========== Please select time for ROOM 2 ==========\n");
        printf(" - option 1  9:00 - 10:00  AM [FULL]\n");
        printf(" - option 2 10:00 - 11:00  AM [FREE]\n");
        printf(" - option 3 11:00 - 12:00  AM [FULL]\n");
        printf(" - option 4 12:00 - 13:00  AM [FREE]\n");
        printf(" - option 5 13:00 - 14:00  AM [FULL]\n");
        printf(" - option 6 [RETURN TO ROOM SELECTION]\n");
        do {
    		do {
        		printf("Ans : ");
        		scanf("%d", &choice_time);
        		if (choice_time < 1 || choice_time > 6) {
        		    printf("Invalid input please choose (1-6)!\n");
        		} else if (choice_time == 6) {
        		    select_room(); // กลับไปหน้าเลือกห้อง
        		}
    		} while (choice_time < 1 || choice_time > 6);
    			if(choice_time == 1) printf("Full! choos others \n");
    			else if (choice_time == 2) printf("Full!\n");
    			else if (choice_time == 3){
					printf("Successful!\n");
					break;
    			}
    			else if (choice_time == 4) {
					printf("Successful!\n");
					break;
    			}
    			else if (choice_time == 5) printf("Full! choos others!\n");
			} while (choice_time > 1 || choice_time < 5);
    }
    else if (room_choice == 3) {
        printf("========== Please select time for ROOM 3 ==========\n");
        printf(" - option 1  9:00 - 10:00  AM [FULL]\n");
        printf(" - option 2 10:00 - 11:00  AM [FREE]\n");
        printf(" - option 3 11:00 - 12:00  AM [FREE]\n");
        printf(" - option 4 12:00 - 13:00  AM [FULL]\n");
        printf(" - option 5 13:00 - 14:00  AM [FULL]\n");
        printf(" - option 6 [RETURN TO ROOM SELECTION]\n");
        do {
    		do {
        		printf("Ans : ");
        		scanf("%d", &choice_time);
        		if (choice_time < 1 || choice_time > 6) {
        		    printf("Invalid input please choose (1-6)!\n");
        		} else if (choice_time == 6) {
        		    select_room(); // กลับไปหน้าเลือกห้อง
        		}
    		} while (choice_time < 1 || choice_time > 6);
    			if(choice_time == 1) printf("Full! choos others \n");
    			else if (choice_time == 2) printf("Full!\n");
    			else if (choice_time == 3){
					printf("Successful!\n");
					break;
    			}
    			else if (choice_time == 4) {
					printf("Successful!\n");
					break;
    			}
    			else if (choice_time == 5) printf("Full! choos others!\n");
			} while (choice_time > 1 || choice_time < 5);
    }
}

void info(){
    // ฟังก์ชันนี้สามารถใช้เพื่อแสดงข้อมูลเพิ่มเติม
}
