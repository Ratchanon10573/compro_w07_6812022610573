#include <stdio.h>

int main() {
    float score;
    float total;
    // รับคะแนนสอบกลางภาค
    printf("Please enter your midterm score: "); 
    scanf("%f", &score);

    if (score >= 50) { // ถ้าคะแนนสอบกลางภาคมากกว่าหรือเท่ากับ 50
        // เพิ่มคะแนน 5%
        total = score + (score * 0.05);
    }
    else { // ถ้าคะแนนสอบกลางภาคน้อยกว่า 50
        total = score; // คะแนนรวมเท่ากับคะแนนสอบกลางภาค
    }
    printf("Total bonus = %.2f\n", total);
    printf("End of evaluation\n");
    
    return 0;
}