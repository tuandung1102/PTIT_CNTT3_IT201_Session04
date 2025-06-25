#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int number;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d : ", i + 1 );
        scanf("%d", &arr[i]);
    }

    printf("Nhap so can tim: ");
    scanf("%d", &number);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            found = 1;
            printf("Vi tri so can tim la: %d", i);
            return 0;
        }
    }
    if (!found) {
        printf("Khong co phan tu trong mang");
    }
}