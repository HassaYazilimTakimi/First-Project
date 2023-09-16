/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// mehmet ali gok deneme commit.

int main ()
{
    int i=1,fak=1,sayi;
   
   printf("Faktoriyeli alinacak sayiyi giriniz: ");
   scanf("%d",&sayi);
   
   while(i<=sayi)
   {
   	
   	fak=fak*i;
   	i+=1;
   }
   printf("%d Sayisinin faktoriyeli: %d",sayi,fak);
    
    return 0;

    // Ramazanın yorumudur. 
}
