//
// Created by OS on 6/25/2025.
//
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
};

int main() {
    struct Student students[] = {
        { .id = 1, .name = "Alice", .age = 20 },
        { .id = 2, .name = "Bob", .age = 21 },
        { .id = 3, .name = "Charlie", .age = 22 },
        { .id = 4, .name = "David", .age = 20 },
        { .id = 5, .name = "Eva", .age = 23 }
    };
    int numStudents = 5;
    int searchId;
    printf("Nhap ID sinh vien can tim: ");
    scanf("%d", &searchId);
    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == searchId) {
            printf("ID: %d\n", students[i].id);
            printf("Ten: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nKhong tim thay sinh vien co ID %d trong danh sach.\n", searchId);
    }
    return 0;
}