/*
 * Bai 003: Multiplication table
 * Trang thai: MAU THEO MO TA DA CUNG CAP; CAN DOI CHIEU JUDGE
 *
 * Chu y:
 * Cac bai chua co de goc chi co vi du thuc hanh.
 * Khong coi vi du nay la dap an chinh thuc cua he thong cham.
 */
#include <stdio.h>

int main(void) {

    int n;

    // Buoc 1: Nhap so can in bang nhan.
    if (scanf("%d", &n) != 1)
        return 1;

    // Buoc 2: In bang nhan tu 1 den 10.
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
