#include <stdio.h>
#include <iostream>

main()
{
   // Rumus Luas Lingkaran : π x r^2
   float pi, r, hasil;
   pi = 3.14;
   std::cout << "Masukkan jari jari lingkaran : ";
   std::cin >> r;
   hasil = pi * (r * r);
   std::cout << "Hasil : " << hasil << std::endl;
   
}