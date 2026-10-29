/*
 * Bai 086: Practice Problem 086
 * Trang thai: VI DU THUC HANH THEO CHU DE; CHUA XAC MINH VOI DE GOC
 *
 * Chu y:
 * Cac bai chua co de goc chi co vi du thuc hanh.
 * Khong coi vi du nay la dap an chinh thuc cua he thong cham.
 */
#include <stdio.h>

int main(void) {

    struct Student {
        char id[20];
        char name[100];
        float score;
    };

    struct Student student;

    // Nhap ma sinh vien.
    if (scanf("%19s", student.id) != 1)
        return 1;

    // Nhap ho ten co khoang trang.
    if (scanf(" %99[^\n]", student.name) != 1)
        return 1;

    // Nhap diem.
    if (scanf("%f", &student.score) != 1)
        return 1;

    printf("%s\n", student.id);
    printf("%s\n", student.name);
    printf("%.2f\n", student.score);

    return 0;
}
