//
//  main.c
//  seyahat planlaması
//
//  Created by Selin Avcı on 7.02.2025.
//

#include <stdio.h>
#include <time.h>

// Tarih ve saat bilgisini saklamak için struct
struct DateTime {
    int year, month, day, hour, minute, second;
};

// Struct'ı epoch zamanına çeviren fonksiyon
time_t convertToEpoch(struct DateTime dt) {
    struct tm timeinfo = {0};

    timeinfo.tm_year = dt.year - 1900;  // Yıl 1900'den başlar
    timeinfo.tm_mon = dt.month - 1;     // Aylar 0'dan başlar
    timeinfo.tm_mday = dt.day;
    timeinfo.tm_hour = dt.hour;
    timeinfo.tm_min = dt.minute;
    timeinfo.tm_sec = dt.second;

    return mktime(&timeinfo);
}

int main() {
    struct DateTime departure, arrival;
    time_t epoch_departure, epoch_arrival;
    double seconds_diff;
    int days, hours, minutes;

    // Kullanıcıdan giriş al
    printf("Gidiş tarihini gir (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &departure.year, &departure.month, &departure.day,
          &departure.hour, &departure.minute, &departure.second);

    printf("Dönüş tarihini gir (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &arrival.year, &arrival.month, &arrival.day,
          &arrival.hour, &arrival.minute, &arrival.second);

    // Epoch zamanına çevir
    epoch_departure = convertToEpoch(departure);
    epoch_arrival = convertToEpoch(arrival);

    // Zaman farkını hesapla
    seconds_diff = difftime(epoch_arrival, epoch_departure);

    days = seconds_diff / (24 * 3600);
    seconds_diff = (int)seconds_diff % (24 * 3600);
    hours = seconds_diff / 3600;
    seconds_diff = (int)seconds_diff % 3600;
    minutes = seconds_diff / 60;

    // Sonuçları ekrana yazdır
    printf("\nSeyahat Süresi: %d gün, %d saat, %d dakika\n", days, hours, minutes);
    printf("Gidiş Tarihi (Epoch): %ld\n", epoch_departure);
    printf("Dönüş Tarihi (Epoch): %ld\n", epoch_arrival);

    return 0;
}
