#include <stdio.h>
#include <conio.h>

int main()
 {
 	int deneSay, *pointerDS,*sayi;
    
 	deneSay = 100;
	pointerDS = &deneSay;
    
	printf("deneSay degiskeninin degeri = %d\n",deneSay);
	printf("deneSay degiskeninin adresi = %x\n",pointerDS);
	printf("deneSay degiskeninin degeri = %d\n",*pointerDS);
	printf("deneSay degiskeninin adresi = %x\n",&deneSay);
	*pointerDS=150;
	
	printf("%d\n",deneSay);
	printf("%x\n",&deneSay);
	printf("%d",*pointerDS);
	
	
	getch();
	return 0;
 }
