#include <stdio.h>

int main() {
    int age, vipLevel;
    double purchaseAmount, discount = 0.0;

    // รับข้อมูลจากผู้ใช้
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter VIP level (1-5): ");
    scanf("%d", &vipLevel);
    printf("Enter purchase amount: ");
    scanf("%lf", &purchaseAmount);

    // ตรวจสอบเงื่อนไขส่วนลด
    if (age > 60 || vipLevel >= 3) {
        discount = 0.20;
    }
    if (age >= 30 && age <= 40 && purchaseAmount > 2000) {
        discount = 0.15;
    }
    if (age >= 18 && age <= 25 && purchaseAmount > 1000) {
        discount = 0.10;
    }
    if (vipLevel == 5 || purchaseAmount > 50000) {
        discount = 0.25;
    }

    // คำนวณส่วนลด
    double discountAmount = purchaseAmount * discount;
    double finalAmount = purchaseAmount - discountAmount;

    // แสดงผล
    printf("\nCustomer Info:\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vipLevel, purchaseAmount);
    printf("Discount received: %.0f%%\n", discount * 100);
    printf("Final amount after discount: %.2f THB\n", finalAmount);

    return 0;
}
