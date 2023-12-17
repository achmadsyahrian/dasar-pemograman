// #include <stdio.h>

// main() {
//     int umur;
//     printf("Masukkan Umur Anda : "); scanf("%d", &umur);
//     if (umur >= 17) {
//         printf("Anda sudah dewasa");
//     } else {
//         printf("Anda belum dewasa");
//     }
// }

#include <stdio.h>
#include <iostream>

main() {
    int umur;
    printf("Masukkan umur anda : ");
    std::cin >> umur;

    if (umur >= 17 && umur < 50) {
        printf("Anda Dewasa Hehe");
    } else if (umur >= 50) {
        printf("Anda Bau Tanah");
    } else {
        printf("Masih Bocil");
    }
    
}