#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()                       //Pointer kullan�m� �rne�i 
{
   int index,*pt1,*pt2;
   
   index = 39;                       //herhangi bir de�er  
   pt1 = &index;                    //'index' in adresi    
   pt2 = pt1;
   printf("Deger simdi %d %d %d dir \n",index,*pt1,*pt2);
   *pt1 = 13;            //'index' in de�erine de�i�iklik yapal�m 
   printf("degistikten sonra ise %d %d %d \n",index,*pt1,*pt2);
   
   getch();
   return 0;
}
