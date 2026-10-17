#include <stdio.h>

int binary_search(int a[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int books[12] = {
        102, 115, 128, 143,
        157, 169, 184, 201,
        218, 235, 249, 270
    };
    int id;
    scanf("%d", &id);

    int idx = binary_search(books, 12, id);

    if (idx == -1) {
        printf("Kitob topilmadi\n");
    } else {
        printf("Kitob topildi!\n");
        printf("Indeks: %d\n", idx);
    }
    return 0;
}