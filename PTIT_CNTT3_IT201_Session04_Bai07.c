//
// Created by OS on 6/25/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0.\n");
        return 1;
    }
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Nhap tung phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nCac phan tu doi xung trong mang la:\n");
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - 1 - i]) {
            printf("(%d, %d)\n", arr[i], arr[n - 1 - i]);
        }
    }
    if (n % 2 != 0) {
        printf("Phan tu chinh giua (%d) khong co cap doi xung.\n", arr[n / 2]);
    }
    free(arr);
    arr = NULL;
    return 0;
}