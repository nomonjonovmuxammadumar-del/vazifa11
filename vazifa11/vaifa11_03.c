#include <stdio.h>

void almashtir(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    almashtir(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}