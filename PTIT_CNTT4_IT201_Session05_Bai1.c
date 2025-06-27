#include <stdio.h>

void printNumber(int n);
int main(void) {
    int n;
    printf("Nhap so nguyen duong bat ky: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong lon hon 0\n");
    }else {
        printNumber(n);
    }

    return 0;
}

void printNumber(int n) {
    if (n == 0) {
    //Dung dieu kien
        return;
    }

    printNumber(n - 1);
    printf("%d, ", n);
}