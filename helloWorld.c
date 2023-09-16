/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main ()
{
    int x,y,t,c,ca,b;
    printf("1.sayiyi giriniz: ");
    scanf("%d",&x);
    printf("2.sayiyi giriniz: ");
    scanf("%d",&y);

    t=x+y;
    c=x-y;
    ca=x*y;
    b=x/y;

    printf("Toplam sonucu: %d\n",t);
    printf("Fark sonucu: %d\n",c);
    print("Carpim sonucu: %d\n",ca);
    printf("Bolumun sonucu: %d",b);

    
    return 0;
}
