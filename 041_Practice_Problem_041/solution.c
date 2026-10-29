/*
 * Bai 041: Practice Problem 041
 * Trang thai: VI DU THUC HANH THEO CHU DE; CHUA XAC MINH VOI DE GOC
 *
 * Chu y:
 * Cac bai chua co de goc chi co vi du thuc hanh.
 * Khong coi vi du nay la dap an chinh thuc cua he thong cham.
 */
#include <stdio.h>

int main(void) {

    int n;
    int a[1000];

    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000)
        return 1;

    // Nhap cac phan tu mang.
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }

    // Tim phan tu lon nhat.
    int maxValue = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > maxValue)
            maxValue = a[i];
    }

    printf("%d\n", maxValue);

    return 0;
}
