#include <stdio.h>

int main() {
    float length, width;
    int area, tiles_needed, total_time, total_cost, total_labor_cost;

    // รับข้อมูลขนาดพื้นที่ล้อมรอบตึก
    printf("กรุณากรอกความยาวของพื้นที่ล้อมรอบตึก (เมตร): ");
    scanf("%f", &length);
    
    printf("กรุณากรอกความกว้างของพื้นที่ล้อมรอบตึก (เมตร): ");
    scanf("%f", &width);

    // คำนวณพื้นที่รวม
    area = (int)(length * width); // คำนวณพื้นที่ทั้งหมด

    // คำนวณจำนวนกระเบื้องที่ต้องใช้
    tiles_needed = (area + 3) / 4; // 1 แผ่นปูได้ 4 ตารางเมตร (เพิ่ม 3 เพื่อให้ปัดเศษไปข้างบน)

    // คำนวณเวลาที่ต้องใช้ในการปู
    total_time = tiles_needed * 2; // ใช้เวลา 2 นาทีต่อ 1 แผ่น

    // คำนวณราคากระเบื้องทั้งหมด
    total_cost = tiles_needed * 500; // ราคากระเบื้องแผ่นละ 500 บาท

    // คำนวณค่าแรงของช่าง
    total_labor_cost = tiles_needed * 100; // ค่าแรงแผ่นละ 100 บาท

    // แสดงผลลัพธ์
    printf("\n===== ผลลัพธ์ =====\n");
    printf("พื้นที่ทั้งหมด: %d ตารางเมตร\n", area);
    printf("จำนวนกระเบื้องที่ต้องใช้: %d แผ่น\n", tiles_needed);
    printf("เวลาที่ใช้ในการปู: %d นาที\n", total_time);
    printf("ราคากระเบื้องทั้งหมด: %d บาท\n", total_cost);
    printf("ค่าแรงช่างทั้งหมด: %d บาท\n", total_labor_cost);

    return 0;
}
