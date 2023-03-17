#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct yarismaciBilgiler{

char isim[10],soyad[10];
float puan[10],performans;

};

float puanHesap(struct yarismaciBilgiler pat)
{
    int i;
    float sonuc=0;
    float max=0.0;
    float min=6.0;
    for(i=0;i<10;i++)
    {
        if(pat.puan[i]>max)
        {
            max=pat.puan[i];
        }
        if(pat.puan[i]<min)
        {
            min=pat.puan[i];
        }

        sonuc +=pat.puan[i];
    }

    sonuc=(sonuc-max-min)/8;
    return(sonuc);
}



int main()
{
    /*Bir buz pateni karşılaşmasında,bir yarışmacının performansı 6.00 üzerinden puanlanarak 10 hakem tarafından
    değerlendirilmektedir.Yarışmacının performans puanı ise hakemlerin vermiş olduğu en düşük ve en yüksek puan
    atılıp,geri kalan puanların aritmetik ortlaması alınarak bulunmaktadır.Yazacağınız programda yarışmacının
    adı,soyadı performans puanını hesaplayıp ekranda görüntüleyiniz.Performans hesaplamasını tek parametreli
    bir fonksiyonda yapınız.Bu fonksiyon yarışmacıya ait yapıyı parametre olarak almalı ve performans puanını
    hesaplayarak geri döndürmelidir.*/
    int i;
    struct yarismaciBilgiler patenci;

    printf("Yarismacinin adi\n");
    gets(patenci.isim);

    printf("Soyadi\n");
    gets(patenci.soyad);

    printf("Hakem puani\n");

    for(i=0;i<10;i++)
    {
        scanf("%f",&patenci.puan[i]);
    }

    patenci.performans=puanHesap(patenci);

    printf("Performans puani = %f",patenci.performans);
    return 0;
}
