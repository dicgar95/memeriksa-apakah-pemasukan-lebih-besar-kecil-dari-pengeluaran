#include <stdio.h>

void main (){
  float a,b;
  printf("Memeriksa apakah pemasukan lebih besar/kecil dari pengeluaran\n");
  printf("pemasukan :");
  scanf("%i",&a );
  printf("pengeluaran :");
  scanf("%i",&b );

  if(a>b)
  printf("\npemasukan lebih besar dari pengeluaran\n\n");
  else if(a<b)
  printf("\npemasukan lebih kecil dari pengeluaran\n");
}
