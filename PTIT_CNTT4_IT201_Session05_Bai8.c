#include <ctype.h>
#include <stdio.h>
#include <string.h>

int checkNumber(char n[]);

int stringIsNumber(char n[], int len);
int main(void) {
    char n[100];
    printf("Nhap chuoi ky tu so bat ky");
    scanf("%s", n);

        if (!checkNumber(n)) {
        printf("Input khong hop le!");
            return 1;
        }

        //Bo so 0 neu co
        int i = 0;
        while (n[i] == '0') {
            i++;
        }

        int result = stringIsNumber(n + i, strlen(n) - i);
        printf("So nguyen duong la: %d", result);
    return 0;
}
int checkNumber(char n[]) {
    int len = strlen(n);
    if (len == 0) return 0;// Chuoi k hop le

    for (int i = 0; i < len; i++) {
        if (!isdigit(n[i])) return 0;//Chuoi k hop le
    }

    return 1;//chuoi hop le
}

int stringIsNumber(char n[], int len) {
    if (len == 0) return 0;

    return stringIsNumber(n, len - 1) * 10 + n[len -1] - '0';
}