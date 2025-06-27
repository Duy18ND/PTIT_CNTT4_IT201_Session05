#include <stdio.h>

int printNumber(int firstNum, int secondNum);

int main(void) {
    int firstNum, secondNum;
    printf("Nhap so nguyen duong bat ky firstNum: ");
    scanf("%d", &firstNum);
    printf("Nhap so nguyen duong bat ky secondNum: ");
    scanf("%d", &secondNum);

    if(firstNum <= 0 || secondNum <= 0 || firstNum > secondNum){
    printf("So nguyen duong ban nhap khong hop le!");
    }else{
        int total = printNumber(firstNum, secondNum);
        printf("Tong cac so nguyen duong tren so nguyen %d va %d la %d", firstNum, secondNum, total);
    }
return 0;
}

int printNumber(int firstNum, int secondNum) {
    if(firstNum == secondNum) return firstNum;
    return firstNum + printNumber(firstNum + 1, secondNum);
}


