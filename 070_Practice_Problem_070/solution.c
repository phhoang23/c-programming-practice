/*
 * Bai 070: Practice Problem 070
 * Trang thai: VI DU THUC HANH THEO CHU DE; CHUA XAC MINH VOI DE GOC
 *
 * Chu y:
 * Cac bai chua co de goc chi co vi du thuc hanh.
 * Khong coi vi du nay la dap an chinh thuc cua he thong cham.
 */
#include <stdio.h>

int main(void) {

    char s[1001];
    int count = 0;

    // Doc mot dong van ban, co the co khoang trang.
    if (fgets(s, sizeof(s), stdin) == NULL)
        return 1;

    // Dem nguyen am tieng Anh, khong phan biet hoa/thuong.
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = s[i];

        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';

        if (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
