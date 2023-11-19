#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// buffer boşaltma için fonksyon
// ikinci scanf in çalışması için std input boş olmalı yoksa arka arkaya bufferdaki değeri alır.beklemez.

void clear_buffer()
{
    int c;

    c = getchar();
    while ((c = getchar()) != '\n' && c != EOF)
        ;

}

int main()
{
    int x, y;
    printf("sayi gir :");
    scanf("%d", &x);

    // clear_buffer(); bunu kaldırıp ilk scanf te 12 asd girip denenebilir.

    printf("Bir sayi daha gir : ");
    scanf("%d", &y);

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    //////////////////////////////

    int a = 12, b = 6;
    printf("%d\n", a++);
    printf("%d\n", a);

    printf("%d\n",++b);

     /*
     Operator öncelik seviyeleri
     
     1    () [] . ->
     2    + - ! ~ & * sizeof (type cast) ++ --        sağdan sola (sağdan sola parantezlemeye başlıyoruz)
     3    * % /                                        3 tanesi hariç diğerleri soldan sağa
     4    + -
     5    >> <<
     6    < <= > >=
     7    == !=
     8    &
     9    ^
     10   |
     11   &&
     12   ||
     13   ? :                                         sağdan sola
     14   = += -= *= /= %= >>= <<= &= ^= |=