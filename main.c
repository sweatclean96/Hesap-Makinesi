#include <stdio.h>
#include <conio.h>

int carp (int a, int b) 

{return a*b;}

int main() 

{
int sayi1=0;
int sayi2=0;

printf("Ilk sayiyi giriniz: ", sayi1);
scanf("%d", &sayi1);

printf("Ikinci sayiyi giriniz: ", sayi2);
scanf("%d", &sayi2);

int c = carp(sayi1,sayi2);

printf("%d", c);
scanf("%d", &sayi1);

return 0;

}
