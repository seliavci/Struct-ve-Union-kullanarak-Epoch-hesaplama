//
//  main.c
//  spor salonunda geçirilen süre hesaplanması
//
//  Created by Selin Avcı on 7.02.2025.
//

#include <stdio.h>
#include <time.h>

// Tarih ve saat bilgisini saklamak için struct
struct TarihSaat {
    int yil, ay, gun, saat, dakika, saniye;
};

// Struct'ı epoch zamanına çeviren fonksiyon
time_t tariheDonustur(struct TarihSaat ts) {
    struct tm zamanBilgisi = {0};
    
    zamanBilgisi.tm_year = ts.yil - 1900;
    zamanBilgisi.tm_mon = ts.ay - 1;
    zamanBilgisi.tm_mday = ts.gun;
    zamanBilgisi.tm_hour = ts.saat;
    zamanBilgisi.tm_min = ts.dakika;
    zamanBilgisi.tm_sec = ts.saniye;
    
    return mktime(&zamanBilgisi);
}

int main() {
    struct TarihSaat giris, cikis;
    time_t epoch_giris, epoch_cikis;
    double saniye_farki;
    int saat, dakika;
    
    // Kullanıcıdan giriş al
    printf("Spor salonuna giriş tarihini gir (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &giris.yil, &giris.ay, &giris.gun,
          &giris.saat, &giris.dakika, &giris.saniye);
    
    printf("Spor salonundan çıkış tarihini gir (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &cikis.yil, &cikis.ay, &cikis.gun,
          &cikis.saat, &cikis.dakika, &cikis.saniye);
    
    // Epoch zamanına çevir
    epoch_giris = tariheDonustur(giris);
    epoch_cikis = tariheDonustur(cikis);
    
    // Zaman farkını hesapla
    saniye_farki = difftime(epoch_cikis, epoch_giris);
    saat = saniye_farki / 3600;
    saniye_farki = (int)saniye_farki % 3600;
    dakika = saniye_farki / 60;
    
    // Sonuçları ekrana yazdır
    printf("\nSpor salonunda geçirilen süre: %d saat, %d dakika\n", saat, dakika);
    printf("Giriş Zamanı (Epoch): %ld\n", epoch_giris);
    printf("Çıkış Zamanı (Epoch): %ld\n", epoch_cikis);


    return 0;
}
