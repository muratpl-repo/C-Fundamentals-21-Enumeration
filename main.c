#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define yazdir printf

enum hafta{Pazartesi,Sali,Carsamba,Persembe,Cuma,Cumartesi,Pazar};
enum aylar{Ocak=1,Mart=3,Haziran=6,Eylul=9};
enum mevsimler {Ilkbahar=1,Yaz,Sonbahar,Kis};
enum ogrenciOkulKaydi{Aktif,Donmus=1,Silinmis=1};
enum macSonucu {Kazandi=0, Kaybetti=1};

int main()
{
    setlocale(LC_ALL,"Turkish");
/*
    printf("%d\n",Persembe);
    printf("%d\n",Ocak);
    printf("%d\n",Mart);
    printf("%d\n",Haziran);
    printf("%d\n",Eylul);
*/
/*
    enum mevsimler mevsim;
    mevsim=Sonbahar;
    printf("%d",mevsim);
*/
/*
    enum ogrenciOkulKaydi kayit;
    kayit = Donmus;

    if(kayit==0) {
        printf("%s\n","Ogrenci derslere girebilir...");
    }
    else if (kayit==1) {
        printf("%s\n","Ogrenci derslere giremez");
    }
*/

    enum macSonucu sonuc;
    sonuc = Kazandi;
    (sonuc == Kazandi) ? yazdir("Kazandi...") : yazdir("Kaybetti...");

    return 0;
}
