/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 

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
    
    int tong = 0, dem = 0;
    printf("\nCác số chia hết cho 3: ");
    for(int i = 0; i < n; i++) {
        if(mang[i] % 3 == 0) {
            printf("%d ", mang[i]);
            tong += mang[i];
            dem++;
        }
    }
    
    if(dem > 0) {
        float trungBinh = (float)tong / dem;
        printf("\nTổng: %d", tong);
        printf("\nTrung bình: %.2f", trungBinh);
    } else {
        printf("\n Không có số nào chia hết cho 3!");
    }
    
    getch();
    return 0;
}

// conio.h để sd getch
