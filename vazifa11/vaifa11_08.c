#include <stdio.h>

int main() {
    FILE *f = fopen("xaridlar.txt", "r");
    if (f == NULL) {
        printf("Faylni ochib bo'lmadi.\n");
        return 1;
    }

    int x, soni = 0;
    for (int i = 0; i < 5; i++) {
        fscanf(f, "%d", &x);
        if (x > 50000) soni++;
    }
    fclose(f);

    printf("Katta xaridlar soni: %d\n", soni);
    return 0;
}