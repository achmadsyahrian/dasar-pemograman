#include <iostream>

int main() {
    int a, b;

    std::cout << "Masukkan angka pertama: ";
    std::cin >> a;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> b;

    // Operator penambahan (+)
    int hasilPenambahan = a + b;
    std::cout << "Hasil Penambahan: " << hasilPenambahan << std::endl;

    // Operator pengurangan (-)
    int hasilPengurangan = a - b;
    std::cout << "Hasil Pengurangan: " << hasilPengurangan << std::endl;

    return 0;
}
