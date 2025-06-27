#include <stdio.h>

int printNumber(int n);

int main(void) {
        //Su dung de quy tinh tong tu 1 den n
    int n;
    printf("Nhap so nguyen duong bat ky: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So nguyen duong khong hop le!");
    }else {
        int sum = printNumber(n);
        printf("Tong cac so nguyen duong tren so nguyen %d la %d", n, sum);
    }
    return 0;
}

int printNumber(int n) {
    if (n == 0) {
        //Dung dieu kien
        return 0;
    }
    return n + printNumber(n - 1);
}