#include <iostream>
#include <iomanip> // Untuk mengatur presisi desimal

using namespace std;

// Menggunakan fungsi dengan parameter untuk efisiensi (menghindari global variable jika tidak perlu)
float hitungBMI(float m, float kg) {
    return kg / (m * m); 
}

void prosesBMI() {
    float berat, tinggi, hasil;

    cout << "=== Kalkulator BMI ===" << endl;
    cout << "Masukkan Berat (kg): ";
    cin >> berat;
    cout << "Masukkan Tinggi (cm): ";
    cin >> tinggi;

    // Konversi cm ke meter langsung saat perhitungan
    tinggi = tinggi / 100;
    
    hasil = hitungBMI(tinggi, berat);

    // Menampilkan hasil dengan 2 angka di belakang koma
    cout << fixed << setprecision(2);
    cout << "\nHasil BMI Anda = " << hasil << endl;

    // Tambahan: Kategori BMI
    cout << "Kategori: ";
    if (hasil < 18.5) cout << "Kekurangan Berat Badan" << endl;
    else if (hasil < 24.9) cout << "Normal (Ideal)" << endl;
    else if (hasil < 29.9) cout << "Kelebihan Berat Badan" << endl;
    else cout << "Obesitas" << endl;
}

int main() {
    prosesBMI();
    return 0;
}