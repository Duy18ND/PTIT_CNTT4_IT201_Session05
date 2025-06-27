#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);
int main(void) {
    int n;
    printf("Nhap so nguyen duong bat ky: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Input khong hop le!");
    }

    //khoi tao mang cap  phat bo nho dong
    int *arr = (int *)calloc(n, sizeof(int));

    //gan mang
    for (int i = 0; i < n; i++) {
        arr[i] = fibonacci(i);
    }

    //In
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i <= n -1) {
            printf(", ");
        }
    }}


int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}