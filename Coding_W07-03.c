#include <stdio.h>

int main() {
    int level;
    // รับค่าจากผู้ใช้
    printf("Enter level (1-4): ");
    scanf("%d", &level);
    // ตรวจสอบเงื่อนไขการแสดงผล
    if (level <= 0) {
        printf("The level 1 is not allowed.\n");} 
    else if (level > 4) {
        printf("The level 4 is not allowed.\n"); }
    // ตรวจสอบระดับและแสดงผล
    switch (level) {
        case 1: printf("Beginner\n"); break;
        case 2: printf("Intermediate\n"); break;
        case 3: printf("Advanced\n"); break;
        case 4: printf("Expert\n"); break;
        default: printf("Invalid level\n"); break;}
    return 0;
}
/* วิเคราะห์ผลลัพธ์แต่ละกรณี
1. กรณีที่ผู้ใช้ป้อนค่า level เป็น 1:
   - โปรแกรมจะแสดงข้อความ "Beginner" เนื่องจาก level อยู่ในช่วงที่กำหนด (1-4) และไม่มีการแสดงข้อความเตือน
2. กรณีที่ผู้ใช้ป้อนค่า level เป็น 2:
   - โปรแกรมจะแสดงข้อความ "Intermediate" เนื่องจาก level อยู่ในช่วงที่กำหนด (1-4) และไม่มีการแสดงข้อความเตือน
3. กรณีที่ผู้ใช้ป้อนค่า level เป็น 3:
   - โปรแกรมจะแสดงข้อความ "Advanced" เนื่องจาก level อยู่ในช่วงที่กำหนด (1-4) และไม่มีการแสดงข้อความเตือน
4. กรณีที่ผู้ใช้ป้อนค่า level เป็น 4:
   - โปรแกรมจะแสดงข้อความ "Expert" เนื่องจาก level อยู่ในช่วงที่กำหนด (1-4) และไม่มีการแสดงข้อความเตือน
5. กรณีที่ผู้ใช้ป้อนค่า level เป็น 0:
   - โปรแกรมจะแสดงข้อความ "The level 1 is not allowed." เนื่องจาก level น้อยกว่าหรือเท่ากับ 0 และจะแสดงข้อความ "Invalid level" เนื่องจากไม่มี case ที่ตรงกับค่า 0 ใน switch-case
6. กรณีที่ผู้ใช้ป้อนค่า level เป็น 5 หรือมากกว่า:
   - โปรแกรมจะแสดงข้อความ "The level 4 is not allowed." เนื่องจาก level มากกว่า 4 และจะแสดงข้อความ "Invalid level" เนื่องจากไม่มี case ที่ตรงกับค่า 5 ใน switch-case
*/