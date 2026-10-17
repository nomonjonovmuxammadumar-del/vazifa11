#include <stdio.h>

struct Mahsulot {
    char nomi[50];
    int narxi;
    int miqdori;
};

int main() {
    struct Mahsulot m;
    scanf("%s %d %d", m.nomi, &m.narxi, &m.miqdori);

    printf("Mahsulot: %s\n", m.nomi);
    printf("Narxi: %d\n", m.narxi);
    printf("Miqdori: %d\n", m.miqdori);
    printf("Ombor qiymati: %d\n", m.narxi * m.miqdori);
    return 0;
}