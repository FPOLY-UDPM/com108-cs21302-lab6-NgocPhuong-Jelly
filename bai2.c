/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

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
    
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Giá trị nhỏ nhất: %d\n", min);
    printf("Giá trị lớn nhất: %d\n", max);
    
    return 0;
}



