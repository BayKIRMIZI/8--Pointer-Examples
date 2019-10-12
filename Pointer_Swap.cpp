#include <stdio.h>
#include <conio.h>

void swap(int *q,int *p)
{
  int temp = *p;
  *p = *q; 
  *q = temp;
}

int main()
{
  int a = 10, b = 20, x = 30, y = 40;
  printf("a,b,x,y: %d,%d,%d,%d\n%x %x\n\n", a, b, x, y, &x, &y);
  swap(&x, &y);
  swap(&a, &b);
  printf("a,b,x,y: %d,%d,%d,%d\n", a, b, x, y);
  
  getch();
  return 0;
}



/* 
Burada da bir fonksiyona 2 pointer geçiriyor ve bu fonksiyon sayesinde iki deðiþkenin deðerlerini birbirleriyle deðiþtiriyoruz.
bu programýn da çýktýsý:
a,b,x,y: 10,2,3,5
a,b,x,y: 2,10,5,3
Þeklinde olacaktýr
*/
