#include <stdio.h>
#include <conio.h>
void dortgen(int *a, int b, int *alan, int *cevresi)
{
  *alan = *a * b;
  *cevresi = 2 * (*a + b);
}

int main()
{
  int kenar1, kenar2;
  int alan, cevresi;
  
  printf("Dikdortgen kenar-1 ve kenar-2 degerlerini giriniz: " );
  scanf("%d %d", &kenar1, &kenar2);
  
  dortgen(&kenar1, kenar2, &alan, &cevresi);
  printf("Alani %d ve cevresi %d dir\n", alan, cevresi);
  getch();
  return 0;
}
/*
void dortgen(int *a,int b, int *alan,int *cevresi)
{
  *alan = *a * b;
  *cevresi = 2 * (*a + b);
}
*/
