

#include <stdio.h>

int main() {
    int n;

    for (int i = 1; i <= 10; i++) {
        printf("%d-sonni kiriting: ", i);
        scanf("%d", &n);

        if (n < 0) {
            break;
        }
        printf("Kiritilgan son: %d\n", n);
    }
    return 0;
}