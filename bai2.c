/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    printf("Nhập số phần tử n: ");
    scanf("%d", &n);
    
    int mang[n];
    printf("Nhập mảng %d phần tử:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Phần tử %d: ", i+1);
        scanf("%d", &mang[i]);
    }

    int max = mang[0];
    int min = mang[0];

    for(int i = 1; i < n; i++) {
        if(mang[i] > max) {
            max = mang[i];
        }
        if(mang[i] < min) {
            min = mang[i];
        }
    }
    
    printf("\n=== KẾT QUẢ ===");
    printf("\nGiá trị lớn nhất: %d", max);
    printf("\nGiá trị nhỏ nhất: %d", min);
    
    getch();
    return 0;
}


