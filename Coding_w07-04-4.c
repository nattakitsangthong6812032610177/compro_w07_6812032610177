#include <stdio.h>

// ฟังก์ชันแสดงสิทธิประโยชน์ตามระดับสมาชิก โดยใช้ switch-case
void showBenefits_switch(int level) {
    switch(level) {
        case 1:
            // กรณีสมาชิก Silver
            printf("Silver Member: 5%% discount\n");
            break;
        case 2:
            // กรณีสมาชิก Gold
            printf("Gold Member: 10%% discount + Reward points\n");
            break;
        case 3:
            // กรณีสมาชิก Platinum
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            // กรณีสมาชิก Diamond
            printf("Diamond Member: All benefits + VIP events\n");
            break;
        default:
            // กรณีที่กรอกระดับสมาชิกไม่ถูกต้อง
            printf("Invalid membership level\n");
    }
}

int main() {
    int level;
    // รับค่าระดับสมาชิกจากผู้ใช้
    printf("Enter membership level (1-4): ");
    scanf("%d", &level);
    // เรียกฟังก์ชันแสดงสิทธิประโยชน์
    showBenefits_switch(level);
    return 0;
}
//เหตุผลที่ใช้ switch-case:ความเหมาะสมกับกรณีที่ต้องตรวจสอบค่าคงที่หลายๆ ค่าswitch-case เหมาะกับการตรวจสอบตัวแปรที่มีค่าคงที่จำนวนจำกัด 
//เช่น กรณีนี้ที่สมาชิกมีระดับแค่ 4 ระดับ (1-4)ซึ่ง switch-case ทำให้โค้ดดูสะอาดและอ่านง่ายกว่าการเขียน if-else if ที่ต้องเขียนหลายบรรทัด
//โครงสร้างที่ชัดเจนและง่ายต่อการบำรุงรักษา
//การเพิ่มหรือลดระดับสมาชิกในอนาคตจะทำได้ง่าย เพราะแต่ละ case แยกกันชัดเจน ต่างจาก if-else if ที่อาจดูยุ่งเหยิง

//ประสิทธิภาพที่ดีกว่า (ในบางภาษาและกรณี)
//บางภาษาโปรแกรมอาจมีการ optimize การทำงานของ switch-case ให้รวดเร็วกว่า if-else if ในการตรวจสอบค่าจำนวนมาก