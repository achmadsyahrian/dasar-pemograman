// LATIHAN RUMUS PERSEGI PANJANG
#include <stdio.h>
#include <iostream>

main() 
{
   // Rumus = P x L
   // Deklarasi Variabel
   // int ;
   float panjang,lebar, hasil;
   // Buat Inputnya
   std::cout << "Masukkan Panjang : ";
   std::cin >> panjang;
   std::cout << "Masukkan Lebar : ";
   std::cin >> lebar;
   // Hitung Hasil
   hasil = panjang * lebar;
   // Tampilkan Hasil
   std::cout << "Hasil Persegi Panjang : " << hasil << "cm" << std::endl;


   // Kondisi Percabangan
   if (hasil <= 20) {
      std::cout << "Persegi Panjang Sangat Pendek";
   } else if (hasil <= 50) {
      std::cout << "Persegi Panjang Berukuran Normal";
   } else {
      std::cout << "Persegi Panjang Terlalu Panjang :)";
   }
   
   
}