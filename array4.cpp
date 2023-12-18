#include <stdio.h>
#include <conio.h>

void main() {
   int i,j;
   float x[3][4]= {12, 25, 17, 18, 15, 18, 11, 55, 43, 17, 62, 13};
   for (i = 0; i < 3; i++)
   {
      for ( j = 0; j < 4; j++)
      {
         printf("%8.2f", x[i][j]);
         printf("\n");
      }
      printf("\n");
      getch();
   }
   
}