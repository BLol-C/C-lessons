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
    int available_times[5] = {0};  // 0 = FULL, 1 = FREE

    // กำหนดสถานะของเวลาในแต่ละห้อง
    if (room_choice == 1) {
        available_times[0] = 0;  // 9:00 - 10:00 AM [FULL]
        available_times[1] = 0;  // 10:00 - 11:00 AM [FULL]
        available_times[2] = 1;  // 11:00 - 12:00 AM [FREE]
        available_times[3] = 1;  // 12:00 - 13:00 AM [FREE]
        available_times[4] = 0;  // 13:00 - 14:00 AM [FULL]
    }
    else if (room_choice == 2) {
        available_times[0] = 0;  // 9:00 - 10:00 AM [FULL]
        available_times[1] = 1;  // 10:00 - 11:00 AM [FREE]
        available_times[2] = 0;  // 11:00 - 12:00 AM [FULL]
        available_times[3] = 1;  // 12:00 - 13:00 AM [FREE]
        available_times[4] = 0;  // 13:00 - 14:00 AM [FULL]
    }
    else if (room_choice == 3) {
        available_times[0] = 0;  // 9:00 - 10:00 AM [FULL]
        available_times[1] = 1;  // 10:00 - 11:00 AM [FREE]
        available_times[2] = 1;  // 11:00 - 12:00 AM [FREE]
        available_times[3] = 0;  // 12:00 - 13:00 AM [FULL]
        available_times[4] = 0;  // 13:00 - 14:00 AM [FULL]
    }

    printf("========== Please select time for ROOM %d ==========\n", room_choice);
    for (int i = 0; i < 5; i++) {
        if (available_times[i] == 1) {
            printf(" - option %d %d:00 - %d:00 AM [FREE]\n", i + 1, 9 + i, 10 + i);
        } else {
            printf(" - option %d %d:00 - %d:00 AM [FULL]\n", i + 1, 9 + i, 10 + i);
        }
    }
    printf(" - option 6 [RETURN TO ROOM SELECTION]\n");

    do {
        printf("Ans : ");
        scanf("%d", &choice_time);
        if (choice_time < 1 || choice_time > 6) {
            printf("Invalid input please choose (1-6)!\n");
        } else if (choice_time == 6) {
            select_room(); // กลับไปหน้าเลือกห้อง
            return; // ออกจากฟังก์ชัน time() เพื่อกลับไปเลือกห้อง
        } else if (available_times[choice_time - 1] == 0) {
            printf("The selected time is FULL. Please choose a different time.\n");
        } else {
            printf("Successful!\n");
            break;  // จองสำเร็จ
        }
    } while (choice_time < 1 || choice_time > 6 || available_times[choice_time - 1] == 0);
}

void info(){
    // ฟังก์ชันนี้สามารถใช้เพื่อแสดงข้อมูลเพิ่มเติม
}
