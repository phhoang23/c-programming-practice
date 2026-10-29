/*
 * Bai 010: Practice Problem 010
 * Trang thai: VI DU THUC HANH THEO CHU DE; CHUA XAC MINH VOI DE GOC
 *
 * Chu y:
 * Cac bai chua co de goc chi co vi du thuc hanh.
 * Khong coi vi du nay la dap an chinh thuc cua he thong cham.
 */
#include <stdio.h>

int main(void) {

    int n;

    // Nhap so nguyen va kiem tra chan/le.
    if (scanf("%d", &n) != 1) return 1;

    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
