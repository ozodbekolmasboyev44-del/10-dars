

#include <stdio.h>

int main() {
   int maxfiy = 7;      // maxfiy son
    int num;
    int count = 0;     // topildimi yoki yo'qmi

    for (int i = 1; i <= 5; i++) {
        printf("%d-urinish. Sonni kiriting: ", i);
        scanf("%d", &num);

        if (num == maxfiy) {
            printf("Tabriklaymiz, topdingiz!\n");
           count = 1;
            break;
        }
        printf("Noto'g'ri, qayta urinib ko'ring\n");
    }

    if (!count) {
        printf("Maxfiy son: %d\n", maxfiy);
    }
    return 0;
}