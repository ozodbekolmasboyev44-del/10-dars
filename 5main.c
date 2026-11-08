    
    
    #include <stdio.h>
    
    int main() {
  int n;
    printf("Musbat butun son kiriting: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Faktorial faqat musbat son uchun hisoblanadi.\n");
    }
    
         int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }

    printf("%d! = %llu\n", n, f);
    return 0;
    }