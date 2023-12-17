#include <stdio.h>
main()
{
    char nama[12], alamat[20], kota[12];
    printf("Masukkan Nama Anda = ");
    gets(nama);  /*gets untuk char*/
    printf("Masukkan Alamat Anda = ");
    gets(alamat);  /*gets untuk char*/
    printf("Masukkan Kota Anda = ");
    gets(kota);  /*gets untuk char*/
    printf("==================== \n");
    printf("Hasil Masukan \n");
    printf("Nama Anda Adalah = %s \n", nama); /*menampilkan dengan %s*/
    // tanda \n ke bawah
    printf("Alamat Anda Adalah = %s \n", alamat); /*menampilkan dengan %s*/
    // tanda \n ke bawah
    printf("Kota Anda Adalah = %s \n", kota); /*menampilkan dengan %s*/
    

}