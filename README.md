Struct-ve-Union-kullanarak-epoch-hesaplama

Proje Açıklaması:Bu proje, veri yapıları ve algoritmalar dersi kapsamında, struct ve union kullanarak epoch zaman farkı hesaplamayı amaçlayan bir C programıdır. 
Kullanıcıdan iki farklı tarih ve saat alınarak epoch zamanına çevrilir ve zaman farkı ekrana yazdırılır.
Program, seyahat planlaması gibi günlük hayatta zaman farklarını hesaplamada kullanılabilir.

Seyahat Planlama - Epoch Zaman Farkı Hesaplama
Bu proje, struct ve union kullanarak iki tarih arasındaki zaman farkını hesaplar. 
Kullanıcıdan gidiş ve dönüş tarihleri alınarak epoch zamanına çevrilir ve fark gün, saat, dakika cinsinden gösterilir.
Kullanıcıdan YYYY MM DD HH MM SS formatında tarih girişleri alınır.
Program, iki tarih arasındaki farkı gün, saat ve dakika olarak gösterir.

Kullanılan Bileşenler;
stdio.h: Giriş ve çıkış işlemleri için kullanılır.
time.h: Tarih ve saat hesaplamaları için kullanılır.
struct DateTime: Tarih ve saat bilgisini saklamak için özel olarak tanımlanmış bir yapı.
C Struct ve Union: Tarih ve saat bilgilerini saklamak için.
mktime() Fonksiyonu: Tarihi epoch zamanına çevirmek için.
difftime() Fonksiyonu: İki zaman arasındaki farkı hesaplamak için.

Nasıl Çalışır?
Kullanıcı Girişi: Program, kullanıcıdan seyahat için gidiş ve dönüş tarihlerini ve saatlerini alır.
Epoch Zamanı Dönüşümü: Kullanıcıdan alınan tarih ve saat bilgileri Unix Epoch zamanına dönüştürülür.
Zaman Farkı Hesaplama: Gidiş ve dönüş zamanı arasındaki fark saniye cinsinden hesaplanır ve ardından gün, saat, dakika cinsine çevrilir.
Sonuçlar: Seyahat süresi ve her iki tarihin epoch zamanı ekrana yazdırılır.

Örnek Çıktı Ekranı;
Gidiş tarihini gir (YYYY MM DD HH MM SS): 2025 02 10 08 30 00
Dönüş tarihini gir (YYYY MM DD HH MM SS): 2025 02 15 22 15 00

Seyahat Süresi: 5 gün, 13 saat, 45 dakika
Gidiş Tarihi (Epoch): 1739166600
Dönüş Tarihi (Epoch): 1739628900

Dosyalar;
main.c → C programının kaynak kodu.
README.md → Bu projenin açıklamalarını içerir.

Bu projeye katkıda bulunmak isterseniz, aşağıdaki adımları takip edebilirsiniz:

Projeyi forklayın ve bilgisayarınıza indirin.
Yapmak istediğiniz değişiklikleri gerçekleştirin.
Değişikliklerinizi bir pull request ile gönderin.
Lisans

Bu proje, MIT Lisansı ile lisanslanmıştır.



