#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int number;
    int index = 0;
    printf("Nhap so can tim la: ");
    scanf("%d", &number);
    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            index = i;
        }
    }
    printf("Vi tri cuoi cung cua so can tim la %d : ", index);
}