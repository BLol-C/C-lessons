#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXSIZE 5

void sort_descending(int arr[], int n); // >
void sort_ascending(int arr[], int n);  // <

void main() {
    int random = 1200;
    int arr[MAXSIZE][MAXSIZE][MAXSIZE];
    int range;
    int i, j, k;
    int arr1D[MAXSIZE * MAXSIZE * MAXSIZE];
    int index = 0;

    srand(time(0)); // reset random

    do {
        printf("Please input range of Array 3D (1-5) : ");
        scanf("%d", &range);
        if (range < 1 || range > 5) {
            printf("Invalid input! Please enter a value between 1 and 5.\n");
        }
    } while (range < 1 || range > 5);

    printf("==Random number set to [0 - 1200]==\n");

    // สุ่มค่าใน array 3D และเก็บค่าใน array 1D
    for (i = 0; i < range; i++) {
        for (j = 0; j < range; j++) {
            for (k = 0; k < range; k++) {
                arr[i][j][k] = rand() % (random + 1);  // สุ่มค่าระหว่าง 0 ถึง 1200
                arr1D[index] = arr[i][j][k];            // เก็บค่าลงใน array 1D
                index++;
                printf("[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    // เรียงลำดับค่าจากมากไปน้อย
    sort_descending(arr1D, range * range * range);

    printf("===== After descending sort =====\n");

    index = 0; // รีเซ็ตค่า index
    // นำค่าที่เรียงแล้วกลับมาใส่ใน array 3D
    for (i = 0; i < range; i++) {
        for (j = 0; j < range; j++) {
            for (k = 0; k < range; k++) {
                arr[i][j][k] = arr1D[index++];
                printf("[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);  // แสดงค่าที่สุ่มและเรียงแล้ว
            }
        }
    }
}

void sort_descending(int arr[], int n) {
    int i, j, temp;

    // การเรียงลำดับจากมากไปน้อย (bubble sort)
    for (i = 0; i < n - 1; i++) {  // 0 - n-1 in array
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
