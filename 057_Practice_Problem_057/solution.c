/*
 * Bai 057: Practice Problem 057
 * Trang thai: VI DU THUC HANH THEO CHU DE; CHUA XAC MINH VOI DE GOC
 *
 * Chu y:
 * Cac bai chua co de goc chi co vi du thuc hanh.
 * Khong coi vi du nay la dap an chinh thuc cua he thong cham.
 */
#include <stdio.h>

int main(void) {

    int rows, cols;
    int a[100][100];
    long long sum = 0;

    if (scanf("%d %d", &rows, &cols) != 2)
        return 1;

    if (rows <= 0 || cols <= 0 ||
        rows > 100 || cols > 100)
        return 1;

    // Nhap ma tran va tinh tong phan tu.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &a[i][j]) != 1)
                return 1;

            sum += a[i][j];
        }
    }

    printf("%lld\n", sum);

    return 0;
}
