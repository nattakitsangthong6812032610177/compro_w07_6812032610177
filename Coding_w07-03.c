#include <stdio.h>

int main() {
    int level;

    printf("Enter level (-4, 0, 1, 2, 3, 4, 100): ");
    scanf("%d", &level);

    // เช็คเงื่อนไขแจ้งเตือนก่อน switch
    if (level < 1) {
        printf("The level below 1 is not allowed\n");
    } else if (level > 4) {
        printf("The level above 4 is not allowed\n");
    } else {
        // ถ้าอยู่ในช่วง 1-4 ให้แสดงผลตาม switch-case
        switch (level) {
            case 1:
                printf("Beginner\n");
                break;
            case 2:
                printf("Intermediate\n");
                break;
            case 3:
                printf("Advanced\n");
                break;
            case 4:
                printf("Expert\n");
                break;
            default:
                printf("Invalid level\n");
        }
    }

    return 0;
}
