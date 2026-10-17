#include <stdio.h>

int main() {
    int a[10], n;
    for (int i = 0; i < 10; i++) scanf("%d", &a[i]);
    scanf("%d", &n);

    if (a[n - 1] == 0) printf("Joy mavjud\n");
    else printf("Joy band\n");
    return 0;
}