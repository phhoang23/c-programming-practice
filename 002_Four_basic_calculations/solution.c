/*
 * Bai 002: Four basic calculations
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

    // Buoc 2: In tong, hieu va tich.
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);

    // Buoc 3: Chia thuc voi hai chu so thap phan.
    if (b != 0)
        printf("%.2f\n", (double)a / b);
    else
        printf("Undefined\n");

    return 0;
}
