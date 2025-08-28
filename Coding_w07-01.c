#include <stdio.h>

int main() {
    float score, final_score;

    // รับคะแนนจากผู้ใช้
    printf("Enter your midterm score: ");
    scanf("%f", &score);

    // ตรวจสอบและคำนวณคะแนนพิเศษ
    if (score >= 50) {
        final_score = score + (score * 0.05);  // เพิ่ม 5%
        printf("Original score: %.2f\n", score);
        printf("Bonus applied: +5%%\n");
        printf("Final score: %.2f\n", final_score);
    } else {
        final_score = score;
        printf("Score: %.2f\n", final_score);
    }

    printf("End of evaluation\n");
    return 0;
}
