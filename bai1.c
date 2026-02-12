/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    
    int arr[n];
    
    srand(time(NULL));
    printf("Mảng ngẫu nhiên đã được tạo:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("arr[%d] = %d ", i, arr[i]);
    }
    printf("\n");

    int sum = 0;
    int count = 0;
    
    printf("Các số chia hết cho 3: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
            count++;
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    if (count > 0) {
        double average = (double)sum / count;
        printf("Tổng: %d\n", sum);
        printf("Số lượng: %d\n", count);
        printf("Trung bình: %.2f\n", average);
    } else {
        printf("Không có số nào chia hết cho 3!\n");
    }
    
    return 0;
}
