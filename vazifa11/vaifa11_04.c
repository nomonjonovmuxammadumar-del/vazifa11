#include <stdio.h>

int main() {
    int a[3][4], q, o;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &q, &o);

    if (a[q - 1][o - 1] == 0)
        printf("%d-qator, %d-orindiq: Bosh\n", q, o);
    else
        printf("%d-qator, %d-orindiq: Band\n", q, o);
    return 0;
}