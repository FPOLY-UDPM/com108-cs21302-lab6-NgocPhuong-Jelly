/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

 //  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    
    int arr[n];

    srand(time(NULL));
    printf("Mảng gốc:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("arr[%d] = %d ", i, arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Mảng sắp xếp theo giảm dần:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d ", i, arr[i]);
    }
    printf("\n");
    
    return 0;
}
