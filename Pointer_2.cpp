#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()                       //Pointer kullanýmý örneði 
{
   int index,*pt1,*pt2;
   
   index = 39;                       //herhangi bir deðer  
   pt1 = &index;                    //'index' in adresi    
   pt2 = pt1;
   printf("Deger simdi %d %d %d dir \n",index,*pt1,*pt2);
   *pt1 = 13;            //'index' in deðerine deðiþiklik yapalým 
   printf("degistikten sonra ise %d %d %d \n",index,*pt1,*pt2);
   
   getch();
   return 0;
}
