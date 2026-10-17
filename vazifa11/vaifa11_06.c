#include <stdio.h>

void sanash(int n) {
    if (n == 0) {
        printf("Xabar yuborildi!\n");
        return;
    }
    printf("%d\n", n);
    sanash(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    sanash(n);
    return 0;
}