#include <stdio.h>

int mainn() {
    int n;
    int arr[100];

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d :", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    }
    printf("Vi tri so be nhat la %d: ", index);
}