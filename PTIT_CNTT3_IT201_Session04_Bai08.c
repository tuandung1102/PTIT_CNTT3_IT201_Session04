#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int number;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap so can tim: ");
    scanf("%d", &number);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay phan tu\n");
    } else {
        printf("\n");
    }

    return 0;
}