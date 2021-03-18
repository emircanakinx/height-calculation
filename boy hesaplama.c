
#include <stdio.h>
#include <stdlib.h>

//Erkek Cocuk: 1.75 Ortalama
//Kiz Cocuk: 1.63 Ortalama
//Erkek Hesaplama : (anne boy+baba boy+13)/2
//Kiz Hesaplama : (anne boy+baba boy-13)/2

int main() {
 system("COLOR c");
 int bababoy,anneboy;
 char cinsiyyet;
 float hedefboy;

 printf("Hedef Boy Hesaplama:\n\n");

 printf("Bebegin Cinsiyyetini Girin:\n");
 printf("Erkek-1\n");
 printf("Kiz-2\n");

 printf("Secim: ");
 scanf("%s",&cinsiyyet);

 if(cinsiyyet=='1')
 {
  system("CLS");
  printf("Babanin Boyunu Girin: ");
  scanf("%d",&bababoy);

  printf("Annenin Boyunu Girin: ");
  scanf("%d",&anneboy);

  hedefboy=(anneboy+bababoy+13)/2;

  printf("Hedef Boy: %.2f\n",hedefboy);

   if(hedefboy>175)
   {
    printf("Turkiye Ortalamasindan Buyuktur: ");
   }
   else if(hedefboy<175)
   {
    printf("Turkiye Ortalamasindan Kucuktur: ");
   }
   else
   {
    printf("Turkiye Ortalamasina Esittir: ");
   }

 }

  if(cinsiyyet=='2')
 {
  system("CLS");
  printf("Babanin Boyunu Girin: ");
  scanf("%d",&bababoy);

  printf("Annenin Boyunu Girin: ");
  scanf("%d",&anneboy);

  hedefboy=(anneboy+bababoy-13)/2;

  printf("Hedef Boy: %.2f\n",hedefboy);

   if(hedefboy>165)
   {
    printf("Turkiye Ortalamasindan Buyuktur: ");
   }
   else if(hedefboy<169)
   {
    printf("Turkiye Ortalamasindan Kucuktur: ");
   }
   else
   {
    printf("Turkiye Ortalamasina Esittir: ");
   }

 }

 if(cinsiyyet> '2')
 {
  system("CLS");
  printf("Hatali Giris Yaptiniz: ");
 }

}

