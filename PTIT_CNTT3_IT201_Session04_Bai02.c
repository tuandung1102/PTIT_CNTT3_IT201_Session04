#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    printf("Vi tri so lon nhat la: %d", index);
}