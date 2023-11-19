/*
C'de 
1 - Anahtar sözcükler (keywordler) isim olarak kullanılamaz.
2 - İsimler 63 karakterlik kümenin dışına çıkamaz.

A....Z - Bu aralık 26 karakter
a....z - Bu aralık da 26 karakter
0-9
_ (alt çizgi) 

Toplamda 63 karakter.

İsimler rakam karakterleri ile başlayamaz.
C, büyük/küçük harfe duyarlı bir dildir (case sensitive).

Örnek:
Sum, SUM, sum, SUm - Bunların hepsi farklı isimlerdir.

Birçok varlık için isim kullanılabilir:
- Değişkenler (variables)
- Fonksiyonlar (functions)
- Sabitler (constants)
- Etiketler (tags)
- Türler (types)

Operatörler:
C'de işlem yaptıran tokenlara operatör denir. C'de 45 adet operatör vardır.
sizeof, bir anahtar sözcük olmasına rağmen bir operatördür.

Tokenlar aşağıdakiler olabilir:
- Anahtar sözcükler (Keywords)
- Tanımlayıcılar (Identifiers)
- Sabitler (Constants/Literals)
- Operatörler (Operators)
- String sabitleri (String literals)
- Ayraçlar (Delimiters)

Örnek:
sum += 4; -> Burada 4 adet token vardır.

Kodun yazım şekline 'code layout' denir.

Bir ifade (statement) ile bir ifade (expression) farklı şeylerdir:
- Expression, isimlerin, operatörlerin ve sabitlerin oluşturduğu bir birimdir.
  Örnekler:
  x
  10
  x + 5 
  x + 5 > 10
  Yukarıdakiler birer ifadedir (expression).

- Expressionların 'değer kategorisi' (value category) vardır:
  - lvalue expression
  - rvalue expression

Nesne/Bellekte bir yer (Object/Memory space) ile ilgiliyse bu bir lvalue expressiondur.
Örneğin:
  - x, lvalue expression'dır.
  - 5, rvalue expression'dır.
  - x + 5, rvalue expression'dır.
  - x[4], lvalue expression'dır.

Constant expression:
- Derleme zamanında, derleyici ifadenin değerini tam olarak hesaplayabiliyorsa bu bir constant expression'dır.
  Örnek:
  10 + 80 - 40, bu bir constant expression'dır.
  Ancak, x + y değildir.

Nesne (Object):
int x = 10; gibi bir tanımlama varsa, bellekteki 1'ler ve 0'lar neyi ifade ediyor? Bunun cevabı nesnenin türüdür.

Diller, bu bağlamda ikiye ayrılır:
- Static type: C, C++, C#, Java gibi diller.
- Dynamic type: Python, PowerShell gibi diller.

Nesnenin türü, bellekte ne kadar yer kaplayacağını, 1'ler ve 0'ların nasıl yorumlanacağını ve nesnenin hangi işlemlere sokulabileceğini belirler.

Veri Tipleri (Data Types):
- Temel tipler (basic types)
- Kullanıcı tanımlı tipler (user-defined types)

Bildirim (Decleration) ile Deyim (Statement) farklıdır:
- Bildirimler, isimlerin ne anlama geldiğini anlatır.
- Deyimler, derleyicinin kod üretmesini sağlayacak cümlelerdir.

İfade deyimleri (expression statements), boş deyim (null statement), birleşik deyim (compound statement) ve kontrol deyimleri (control statements) vardır.

C'de kullanılmayan 3 karakter: @, $, `

Karakter tipleri:
- Görüntüsü olan karakterler (printable characters)
- Alfanümerik olmayan karakterler (non-alphanumeric characters, örneğin özel işaretler)
- Alfa karakterler (alpha characters): a - z ve A - Z arası
- Sayısal karakterler (numeric characters): 0-9 arasıLocal isim alanı, belirli bir blok (örneğin bir fonksiyon) içinde kalan alana denir. 

Tüm kaynak dosya ise global namespace olarak isimlendirilir.
Not: Global isim alanında kod yazılamaz, sadece bildirim (declaration) yapılabilir. 
Örneğin x = 10; geçerlidir ama x++; yazıldığında sentaks hatası verir.

Undefined behavior, büyük ölçüde derleyici optimizasyonundan kaynaklanır.
Statement, iş yapan expressionlardır. */
	
