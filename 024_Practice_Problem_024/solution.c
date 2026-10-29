/*
 * Bai 024: Practice Problem 024
 * Trang thai: VI DU THUC HANH THEO CHU DE; CHUA XAC MINH VOI DE GOC
 *
 * Chu y:
 * Cac bai chua co de goc chi co vi du thuc hanh.
 * Khong coi vi du nay la dap an chinh thuc cua he thong cham.
 */
#include <stdio.h>

int main(void) {

    int n;
    long long sum = 0;

    if (scanf("%d", &n) != 1) return 1;

    // Cong cac so tu 1 den n.
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("%lld\n", sum);

    return 0;
}
