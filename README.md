Struct-ve-Union-kullanarak-epoch-hesaplama

Bu proje, veri yapıları ve algoritmalar dersi kapsamında, struct ve union kullanarak epoch zaman farkı hesaplamayı amaçlayan bir C programıdır. Kullanıcıdan iki farklı tarih ve saat alınarak epoch zamanına çevrilir ve zaman farkı ekrana yazdırılır.


Seyahat Planlama - Epoch Zaman Farkı Hesaplama

Bu proje, struct ve union kullanarak iki tarih arasındaki zaman farkını hesaplar. Kullanıcıdan gidiş ve dönüş tarihleri alınarak epoch zamanına çevrilir ve fark gün, saat, dakika cinsinden gösterilir.

Kullanım;
Programı çalıştırmak için şu komutları kullanın:
   ```sh
   gcc main.c -o travel_time
   ./travel_time

Kullanıcıdan YYYY MM DD HH MM SS formatında tarih girişleri alınır.
Program, iki tarih arasındaki farkı gün, saat ve dakika olarak gösterir.

Kullanılan Bileşenler;
C Struct ve Union: Tarih ve saat bilgilerini saklamak için.
mktime() Fonksiyonu: Tarihi epoch zamanına çevirmek için.
difftime() Fonksiyonu: İki zaman arasındaki farkı hesaplamak için.

Örnek Çıktı Ekranı;
Gidiş tarihini gir (YYYY MM DD HH MM SS): 2025 02 10 08 30 00
Dönüş tarihini gir (YYYY MM DD HH MM SS): 2025 02 15 22 15 00

Seyahat Süresi: 5 gün, 13 saat, 45 dakika
Gidiş Tarihi (Epoch): 1739166600
Dönüş Tarihi (Epoch): 1739628900

Dosyalar;

main.c → C programının kaynak kodu.
README.md → Bu projenin açıklamalarını içerir.





