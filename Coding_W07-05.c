#include <stdio.h>

int main() {
    int age;
    int VIP_level;
    float purchase_amount;
    int discount = 0; //ส่วนลดเริ่มต้นเป็น 0
    //รับข้อมูลจากผู้ใช้
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &VIP_level);

    printf("Enter purchase amount: ");
    scanf("%f", &purchase_amount);

    //ตรวจสอบเงื่อนไขการให้ส่วนลด
    if ((age > 60 ) || (VIP_level == 3 ) || (VIP_level == 4 )) {
        //ถ้าอายุเกิน 60 หรือ VIP ระดับ 3 หรือ 4 จะได้รับส่วนลด 20%
        discount = 20;
    } else if ((age >= 30 && age <= 40) && (purchase_amount > 2000)) {
        //ถ้าอายุระหว่าง 30-40 ปี และมียอดซื้อเกิน 2000 บาท จะได้รับส่วนลด 15%
        discount = 15;
    } else if ((age >= 18 && age <= 25) && (purchase_amount > 1000)) {
        //ถ้าอายุระหว่าง 18-25 ปี และมียอดซื้อเกิน 1000 บาท จะได้รับส่วนลด 10%
        discount = 10;
    } else if ((VIP_level == 5) || (purchase_amount > 50000)) {
        //ถ้าเป็น VIP ระดับ 5 หรือมียอดซื้อเกิน 50000 บาท จะได้รับส่วนลด 25%
        discount = 25;
    } else {
        discount = 0;
        printf("No discount applied\n");
    }
    //แสดงผลลัพธ์
    printf("\n---Customer Info---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, VIP_level, purchase_amount);
    printf("Discount received: %d%%\n", discount);
    printf("\nThank you for shopping with us!\n");
    return 0;

}