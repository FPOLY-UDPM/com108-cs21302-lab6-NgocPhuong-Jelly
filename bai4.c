/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

#include <stdio.h>

int main() {
    int n, m;

    printf("Nhập số hàng n: ");
    scanf("%d", &n);
    printf("Nhập số cột m: ");
    scanf("%d", &m);

    int matrix[100][100];

    printf("Nhập các phần tử của ma trận:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMa trận gốc:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%6d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            matrix[i][j] = matrix[i][j] * matrix[i][j];
        }
    }

    printf("\nMa trận bình phương:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%6d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
