#include <stdio.h>
int main() {
    float urunTutari;
    float odenenPara;
    float paraUstu;
    int paraUstuKurus;
    int adet200;
    int adet100;
    int adet50;
    int adet20;
int adet10;
int adet5;
int adet1;
int adet50Kurus;
int adet25Kurus;
int adet10Kurus;
int adet5Kurus;
int adet1Kurus;

int toplamKupur;
   

    printf("Urun tutarini giriniz: ");
    scanf("%f", &urunTutari);

    printf("Odenen parayi giriniz: ");
    scanf("%f", &odenenPara);
    paraUstu = odenenPara - urunTutari;
    
    paraUstuKurus = (int)(paraUstu * 100 + 0.5f);
    
    printf("Para Ustu: %.2f\n", paraUstu);
    printf("Para Ustu (kurus): %d\n", paraUstuKurus);

    adet200= paraUstuKurus / 20000;
    paraUstuKurus = paraUstuKurus % 20000;

    adet100= paraUstuKurus / 10000;
    paraUstuKurus = paraUstuKurus % 10000;

    adet50= paraUstuKurus / 5000;
    paraUstuKurus = paraUstuKurus % 5000;

adet20 = paraUstuKurus / 2000;
paraUstuKurus = paraUstuKurus % 2000;

adet10 = paraUstuKurus / 1000;
paraUstuKurus = paraUstuKurus % 1000;

adet5 = paraUstuKurus / 500;
paraUstuKurus = paraUstuKurus % 500;

adet1 = paraUstuKurus / 100;
paraUstuKurus = paraUstuKurus % 100;

    

    adet50Kurus = paraUstuKurus / 50;
    paraUstuKurus = paraUstuKurus % 50;

    adet25Kurus = paraUstuKurus / 25;
    paraUstuKurus = paraUstuKurus % 25;

    adet10Kurus = paraUstuKurus / 10;
    paraUstuKurus = paraUstuKurus % 10;

    adet5Kurus = paraUstuKurus / 5;
    paraUstuKurus = paraUstuKurus % 5;

adet1Kurus = paraUstuKurus;

toplamKupur = adet200 + adet100 + adet50 + adet20 +
              adet10 + adet5 + adet1 +
              adet50Kurus + adet25Kurus +
              adet10Kurus + adet5Kurus + adet1Kurus;
printf("\n--- Para Ustu Dagilimi ---\n");

printf("200 TL: %d\n", adet200);
printf("100 TL: %d\n", adet100);
printf("50 TL: %d\n", adet50);
printf("20 TL: %d\n", adet20);
printf("10 TL: %d\n", adet10);
printf("5 TL: %d\n", adet5);
printf("1 TL: %d\n", adet1);

printf("50 Kurus: %d\n", adet50Kurus);
printf("25 Kurus: %d\n", adet25Kurus);
printf("10 Kurus: %d\n", adet10Kurus);
printf("5 Kurus: %d\n", adet5Kurus);
printf("1 Kurus: %d\n", adet1Kurus);

printf("Toplam kupur sayisi: %d\n", toplamKupur);
   
    return 0;
}
