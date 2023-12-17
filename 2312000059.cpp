#include <stdio.h>
#include <iostream>

main() 
{
   int nilai;
   std::cout << "Masukkan Nilai Anda : ";
   std:: cin >> nilai;

   if (nilai >= 85){
      std::cout << "Anda Dapat Nilai A ";
   } else if (nilai >= 70) {
      std::cout << "Anda Dapat Nilai B ";
   } else if (nilai >= 60) {
      std::cout << "Anda Dapat Nilai C ";
   } else {
      std::cout << "Anda Dapat Nilai D ";
   }
   
}