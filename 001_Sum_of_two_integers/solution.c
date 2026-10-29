/*
 * Bai 001: Sum of two integers
 * Trang thai: MAU THEO MO TA DA CUNG CAP; CAN DOI CHIEU JUDGE
 *
 * Chu y:
 * Cac bai chua co de goc chi co vi du thuc hanh.
 * Khong coi vi du nay la dap an chinh thuc cua he thong cham.
 */
#include <stdio.h>

int main(void) {

    int a, b;

    // Buoc 1: Nhap hai so nguyen.
    if (scanf("%d %d", &a, &b) != 2)
        return 1;

    // Buoc 2: Tinh tong va in ket qua.
    printf("%d\n", a + b);

    return 0;
}
