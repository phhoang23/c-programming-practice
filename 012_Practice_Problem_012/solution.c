/*
 * Bai 012: Practice Problem 012
 * Trang thai: VI DU THUC HANH THEO CHU DE; CHUA XAC MINH VOI DE GOC
 *
 * Chu y:
 * Cac bai chua co de goc chi co vi du thuc hanh.
 * Khong coi vi du nay la dap an chinh thuc cua he thong cham.
 */
#include <stdio.h>

int main(void) {

    int choice, a, b;

    // Nhap lua chon, a va b.
    if (scanf("%d %d %d", &choice, &a, &b) != 3)
        return 1;

    // Thuc hien phep tinh theo lua chon.
    switch (choice) {
        case 1:
            printf("%d\n", a + b);
            break;
        case 2:
            printf("%d\n", a - b);
            break;
        case 3:
            printf("%d\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("%.2f\n", (double)a / b);
            else
                printf("Cannot divide by zero\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
