#include <stdio.h>
 
int main() {
    int level;
    // รับค่าจากผู้ใช้
    printf("Enter level (1-4): ");
    scanf("%d", &level);
    // ตรวจสอบระดับสมาชิกและแสดงผล
    switch (level) {
        case 1: printf("Silver Member: 5%% discount\n"); break;
        case 2: printf("Gold Member: 10%% discount + Reward points\n"); break;
        case 3: printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n"); break;
        case 4: printf("Diamond Member: All benefits + VIP events\n"); break;
        default: printf("Invalid membership level\n"); break;
    }
    return 0;
}
/* วิเคราะห์ : วิธีใดเหมาะสมกว่ากันระหว่าง if-else if กับ switch-case
 ในกณีนี้ เราต้องการตรวจสอบค่าตัวแปร level ที่มีค่าคงที่ (1-4) และแสดงผลลัพธ์ที่แตกต่างกันตามค่าที่ได้รับ 
การใช้ switch-case จะเหมาะสมกว่า if-else if เนื่องจากความซับซ้อนของเงื่อนไขน้อยกว่า และทำให้โค้ดดูเรียบง่ายขึ้น
*/