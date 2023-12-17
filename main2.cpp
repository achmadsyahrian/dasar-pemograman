#include <iostream>

main()
{
    int a, b, c;
    float hasil;
    printf("===========================\n");
    printf("Masukan nilai a = ");
    scanf("%d", &a);
    printf("Masukan nilai b = ");
    scanf("%d", &b);
    printf("Masukan nilai c = ");
    scanf("%d", &c);
    printf("\n");
    hasil = a % b;
    printf("====================================\n\n");
    printf("Hasil pengurangan: a - b = %d\n", a - b);
    printf("Hasil perkalian: b x c = %d\n", b * c);
    printf("Hasil pembagian: a : b = %d\n", a / c);
    printf("Hasil operasi: a + b * c = %d\n", a + b * c);

}