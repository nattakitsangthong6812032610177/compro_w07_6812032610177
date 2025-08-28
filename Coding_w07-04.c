#include <stdio.h>

// ฟังก์ชันแสดงสิทธิประโยชน์ตามระดับสมาชิก โดยใช้ if-else if
void showBenefits_if_else(int level) {
    if (level == 1) {
        // กรณีสมาชิก Silver
        printf("Silver Member: 5%% discount\n");
    }
    else if (level == 2) {
        // กรณีสมาชิก Gold
        printf("Gold Member: 10%% discount + Reward points\n");
    }
    else if (level == 3) {
        // กรณีสมาชิก Platinum
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
    }
    else if (level == 4) {
        // กรณีสมาชิก Diamond
        printf("Diamond Member: All benefits + VIP events\n");
    }
    else {
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
    showBenefits_if_else(level);
    return 0;
}
