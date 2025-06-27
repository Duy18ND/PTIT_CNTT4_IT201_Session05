#include <stdio.h>
#include <string.h>
#include <ctype.h>
//Ham loai bo khoang trang va chuyen tat ca ve chu thuong
void cleanInput(char input[], char cleaned[]);

int  checkString(char cleaned[], int left, int right);
int main(void) {
        char input[100];
        char cleaned[100];

        printf("Moi ban nhap chuoi ky tu bat ky");
        fgets(input, 100, stdin);

        //Xoa ky tu newlike neu co
        input[strcspn(input, "\n")] = '\0';

        //Goi ham xoa khoang trang va chuyen all ve chu thuong
        cleanInput(input, cleaned);

        int check = checkString(cleaned, 0, strlen(cleaned) - 1);
        if (check) {
            printf("Palindrome valid");
        }else {
            printf("Palindrome invalid");
        }
    return 0;
}

void cleanInput(char input[], char cleaned[]) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalnum(input[i])) {
            cleaned[j++] = tolower(input[i]);
        }
    }
    cleaned[j] = '\0';
}

int checkString(char cleaned[], int left, int right) {
    if (left >= right) {
        return 1;
    }
    if (cleaned[left] != cleaned[right]) {
        return 0;
    }

    return checkString(cleaned, left + 1, right - 1);
}