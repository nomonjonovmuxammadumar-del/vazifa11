#include <stdio.h>

struct Xodim {
    char ism[50];
    int soat;
};

int main() {
    FILE *f = fopen("xodimlar.txt", "r");
    if (f == NULL) {
        printf("Faylni ochib bo'lmadi.\n");
        return 1;
    }

    int n;
    fscanf(f, "%d", &n);

    struct Xodim x[100];
    for (int i = 0; i < n; i++) {
        fscanf(f, "%s %d", x[i].ism, &x[i].soat);
    }
    fclose(f);

    for (int i = 0; i < n; i++) {
        printf("%s: %d som\n", x[i].ism, x[i].soat * 15000);
    }
    return 0;
}