#include <stdio.h>

// Toplama işlemi yapan fonksiyon
int sum(int x, int y) {
    return x + y;
}

// Üç sayı arasından en büyüğünü döndüren fonksiyon
int max(int a, int b, int c) {
    int max_val = a;  // En büyük değeri saklamak için

    if (b > max_val) {
        max_val = b;
    }

    if (c > max_val) {
        max_val = c;
    }

    return max_val;
}

// Mutlak değer döndüren fonksiyon
int abs(int a) {
    if (a < 0) {  // Negatif kontrolü
        return -a;
    }

    return a;
}

// Bir sayının kaç basamaklı olduğunu hesaplayan fonksiyon
int ndigit(int x) {
    int digit_count = 0;  // Basamak sayısını tutacak değişken

    // Sıfır kontrolü
    if (x == 0) {
        return 1;
    }

    // Basamakları say
    while (x != 0) {
        digit_count++;
        x /= 10;
    }

    return digit_count;
}

// Ana fonksiyon
int main() {
    // Fonksiyonların test edilmesi
    printf("%d\n", sum(5,6));        // 5 + 6 = 11
    printf("%d\n", max(5, 6, 9));    // 5, 6, 9 arasında en büyük 9
    printf("%d\n", abs(-2));         // |-2| = 2
    printf("%d\n", abs(3));          // |3| = 3
    printf("%d", ndigit(2579));      // 2579 kaç basamaklı? Cevap: 4

    return 0;
}