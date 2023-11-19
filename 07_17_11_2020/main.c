#define _CRT_SECURE_NO_WARNINGS // Güvenlik uyarılarını devre dışı bırakmak için tanımlama
#include <stdio.h>

// İki sayı arasındaki maksimumu döndüren fonksiyon
int max(int a, int b) {
    return a > b ? a : b; // Koşullu ifade (ternary) operatörü kullanımı
}

// Ana fonksiyon
int main() {
    int x, y, z, t; // Kullanıcıdan alınacak dört tam sayı

    // Kullanıcıdan dört sayı girmesini isteyin
    printf("4 sayi giriniz\n");
    // Girilen sayıları değişkenlere atayın ve hata denetimi için (void) kullanın
    (void)scanf("%d%d%d%d", &x, &y, &z, &t);

    // Girilen dört sayıdan maksimum olanını bulun
    int ival = max(max(x, y), max(z, t));
    // Maksimum sayıyı yazdırın
    printf("En buyuk sayi = %d\n", ival);

    // Test amaçlı ek bir mesaj yazdırın
    printf("test\n");

    return 0; // Programın başarılı şekilde sonlandığını belirtin
}