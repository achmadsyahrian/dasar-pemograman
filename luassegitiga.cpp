#include <stdio.h>
main()
{
    int alas, tinggi;
    float luas;
    printf("Inputan Alas Segitiga : ");
    scanf("%d", &alas);
    printf("Inputan Tinggi Segitiga : ");
    scanf("%d", &tinggi);
    luas=0.5*alas*tinggi;
    printf("Luas Segitiga = %.2f\n", luas);
    
}