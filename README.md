# Taban-Donusturme

2 ile 16 arasındaki tabanları birbirine dönüştüren program.

# Pseudo Code

1-Başla
2- "0123456789ABCDEF" den oluşan değişken tanımla

3- Girilecek tabanı, donusturulecek tabanı ve sayiyi parametre olarak alan fonksiyonu tanımla

4- Girilen taban ve sayiyi parametre olarak alan ve sayiyi ondalık tabana çeviren foksiyonu tanımla

5- Dönüştürülecek taban ve ondalık tabandaki sayıyı parametre olarak alan fonksiyonu tanımla

6- Girilen taban, donusturelecek taban ve sayı değişkenlerini tanımla

7- Sonsuz while döngüsünün içerisnde girilen taban, dönüştürülecek tabanı ve sayi al 

8- Aldığını kontol fonksiyonuna parametre olarak gönder ve eğer kontrol 1 ise onluk tabanda fonksiyonunu daha sonra istenilen tabanda fonksiyonunu çalıştır eğer 0 ise tekrar while döngüsünün başına adım 7ye git
 
9- kontrol fonkisyonu:

    -Eğer girilen taban ve dönüştürelecek taban 2 ile 16 arasında değil ise uyarı mesajı gösterir ve 0 döndürür
    -Daha sonra  sayidaki her indexteki harfi veya sayıyı rakam dizisindeki değerin indexine bakar eğer bu index girilen taban değişkeninden büyük ise uyarı mesajı verir ve 0 döndürür
    -Tüm adımları başarıyla geçerse 1 döndürür.

10- Onluk tabana dönüştüren fonksiyon:

    -Sayi ters çevrilir
    -Sayidaki her bir elamanı rakamdaki elemanla karşılaştırılır eğer birbirine eşitse elamanın sayi değişkenindeki indexi alınıp girilen taban üzeri elemanın kaçıncı sırada olduğuyla çarpılır ve onluk tabanda adlı değikene eklenir
    -En son onluk tabanda değişkeni döndürülür

11- İstenilen taban dönüştürme ve yazdırma fonksiyonu:

    -Kalan ve c adlı değişkenler tanımlanır
    -onluk sayi dönüştürülecek tabandan büyük ve eşit olduğu sürece bir while döngüsü içerisinde 
    -kalan=onluk_sayi%don_taban
    -onluk_sayi=onluk_sayi/don_taban
    -rakam dizisindeki kalan'ıncı indexteki sayi yeni sayi dizisine eklenir
    -en son while döngüsünden sonra son uncu rakamda yukardaki yöntemle eklenir
    -sayi ters çevrilir ve yazdırılır
    
12-Bitir
	
	
