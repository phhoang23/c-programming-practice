/*
 * Bai 033: Practice Problem 033
 * Trang thai: VI DU THUC HANH THEO CHU DE; CHUA XAC MINH VOI DE GOC
 *
 * Chu y:
 * Cac bai chua co de goc chi co vi du thuc hanh.
 * Khong coi vi du nay la dap an chinh thuc cua he thong cham.
 */
#include <stdio.h>

int main(void) {

    int n;
    unsigned long long factorial = 1;

    if (scanf("%d", &n) != 1) return 1;

    // Tinh giai thua n! voi n trong [0, 20].
    if (n < 0 || n > 20) {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= (unsigned long long)i;
    }

    printf("%llu\n", factorial);

    return 0;
}
