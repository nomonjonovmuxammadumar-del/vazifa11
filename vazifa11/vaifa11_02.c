#include <stdio.h>

int chegirma(int narx) {
    return narx * 90 / 100;
}

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);

    for (int i = 0; i < 5; i++) printf("%d ", chegirma(a[i]));
    printf("\n");
    return 0;
}