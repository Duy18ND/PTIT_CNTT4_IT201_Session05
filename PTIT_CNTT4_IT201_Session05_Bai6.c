#include <stdio.h>
#include <stdlib.h>
int sumArray(int arr[], int size);
int main(void) {
    //Tinh tong de quy trong mang
        int size;
        printf("Nhap kich thuoc mang: ");
        scanf("%d", &size);
        if (size <=0 ) {
            printf("Kich thuoc mang khong hop le!");
            return 1;
        }
        int *arr = (int *)calloc(size, sizeof(int));
        if (arr == NULL) {
            printf("Khong the tao mang!");
            return 1;
        }

    //Them gia tri vao mang
        for (int i = 0; i < size; i++) {
            printf("arr[%d] = ",i);
            scanf("%d", &arr[i]);
        }

    int total = sumArray(arr, size);
    printf("Tong cac gia tri trong mang la: %d", total);

    free(arr);
    return 0;
}

int sumArray(int arr[], int size) {
    if (size == 0) return 0;
    return arr[size - 1] + sumArray(arr, size - 1);
}