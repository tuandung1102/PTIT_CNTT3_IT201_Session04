#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return 1;
        }
        if (arr[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return 0;
}

int main() {
    int n;
    int arr[100];
    int x;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
    printf("Mang sau khi sap xep la: [");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i<n - 1) {
            printf(",");
        }
    }
    printf("]\n");

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    if (binarySearch(arr, 0, n - 1, x)) {
        printf("Phan tu co trong mang");
    } else {
        printf("Phan tu k co trong mang");
    }
    return 0;
}