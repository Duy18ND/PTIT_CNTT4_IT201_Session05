#include <stdio.h>

int printNumber(int n);

int main(void) {
        //Tinh giai thua
    int n;
    printf("Nhap so nguyen duong bat ky: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So nguyen duong khong hop le!");
    }else {
        int total = printNumber(n);
        printf("giai thua %d = %d",n,total);
    }
    return 0;
}

int printNumber(int n) {
    if (n == 0) return 1;

    return n * printNumber(n - 1);
}