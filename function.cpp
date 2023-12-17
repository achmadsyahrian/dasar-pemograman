#include <stdio.h>

int hasiltambah(int x, int y, int z) {
   int penjumlahan;
   penjumlahan = x + y - z;
   return penjumlahan;
}

int hasilkurang(int x, int y, int z) {
   int pengurangan;
   pengurangan = x - y - z;
   return pengurangan;
}

main() {
   int a, b, c, hasil;
   a = 7; b = 4; c = 5;
   hasil = hasiltambah(a, b, c);
   printf("Hasil Penjumlahan = %d\n", hasil);

   hasil = hasilkurang(a, b, c);
   printf("Hasil Pengurangan = %d\n", hasil);
}