#include <stdio.h>
#include <stdlib.h>

struct adresBilgi{
    char il[20];
    char ilce[30];
    char mahalle[30];
};
struct ogrenciBilgi{
	char adSoyad[50];
	int ogrenciNo;
	char mail[50];
	float donemOrt;
	struct adresBilgi adres;
};


int main() {
    struct ogrenciBilgi ogrenci1,ogrenci2,ogrenci3,ogrenci4,ogrenci5;

    strcpy(ogrenci1.adSoyad,"Elif Barlik");
    ogrenci1.ogrenciNo=1220505020;
    strcpy(ogrenci1.mail,"elifbarlik4@gmail.com");
    ogrenci1.donemOrt=3.47;
    strcpy(ogrenci1.adres.il,"Istanbul");
    strcpy(ogrenci1.adres.ilce,"Esenyurt");
    strcpy(ogrenci1.adres.mahalle,"Mehtercesme");

	strcpy(ogrenci2.adSoyad,"Zumra Barlik");
    ogrenci2.ogrenciNo=1220505081;
    strcpy(ogrenci2.mail,"zumraa8@gmail.com");
    ogrenci2.donemOrt=3.34;
    strcpy(ogrenci2.adres.il,"Manisa");
    strcpy(ogrenci2.adres.ilce,"Akhisar");
    strcpy(ogrenci2.adres.mahalle,"Efendi");
    
    strcpy(ogrenci3.adSoyad,"Sevin Sarac");
    ogrenci3.ogrenciNo=1220505074;
    strcpy(ogrenci3.mail,"sevvin7@gmail.com");
    ogrenci3.donemOrt=2.96;
    strcpy(ogrenci3.adres.il,"Istanbul");
    strcpy(ogrenci3.adres.ilce,"Buyukcekmece");
    strcpy(ogrenci3.adres.mahalle,"Ataturk");
    
    strcpy(ogrenci4.adSoyad,"Berfin Saygili");
    ogrenci4.ogrenciNo=1220505147;
    strcpy(ogrenci4.mail,"berfinn9@gmail.com");
    ogrenci4.donemOrt=3.55;
    strcpy(ogrenci4.adres.il,"Sakarya");
    strcpy(ogrenci4.adres.ilce,"Adapazari");
    strcpy(ogrenci4.adres.mahalle,"Akincilar");
    
    strcpy(ogrenci5.adSoyad,"Melike Aydogdu");
    ogrenci5.ogrenciNo=1220504569;
    strcpy(ogrenci5.mail,"melike14@gmail.com");
    ogrenci5.donemOrt=2.51;
    strcpy(ogrenci5.adres.il,"Balikesir");
    strcpy(ogrenci5.adres.ilce,"Altieylul");
    strcpy(ogrenci5.adres.mahalle,"Akarsu");
    
    
    
    
    printf("Isim-Soyisim: %s\nOgrenci Numarasi: %d\nMail: %s\nDonem Ortalamasi: %.2f\n",ogrenci1.adSoyad,ogrenci1.ogrenciNo,ogrenci1.mail,ogrenci1.donemOrt);
    printf("Il: %s\nIlce: %s\nMahalle: %s\n\n\n",ogrenci1.adres.il,ogrenci1.adres.ilce,ogrenci1.adres.mahalle);
    
	printf("Isim-Soyisim: %s\nOgrenci Numarasi: %d\nMail: %s\nDonem Ortalamasi: %.2f\n",ogrenci2.adSoyad,ogrenci2.ogrenciNo,ogrenci2.mail,ogrenci2.donemOrt);
    printf("Il: %s\nIlce: %s\nMahalle: %s\n\n\n",ogrenci2.adres.il,ogrenci2.adres.ilce,ogrenci2.adres.mahalle);
    
	printf("Isim-Soyisim: %s\nOgrenci Numarasi: %d\nMail: %s\nDonem Ortalamasi: %.2f\n",ogrenci3.adSoyad,ogrenci3.ogrenciNo,ogrenci3.mail,ogrenci3.donemOrt);
    printf("Il: %s\nIlce: %s\nMahalle: %s\n\n\n",ogrenci3.adres.il,ogrenci3.adres.ilce,ogrenci3.adres.mahalle);
    
    printf("Isim-Soyisim: %s\nOgrenci Numarasi: %d\nMail: %s\nDonem Ortalamasi: %.2f\n",ogrenci4.adSoyad,ogrenci4.ogrenciNo,ogrenci4.mail,ogrenci4.donemOrt);
	printf("Il: %s\nIlce: %s\nMahalle: %s\n\n\n",ogrenci4.adres.il,ogrenci4.adres.ilce,ogrenci4.adres.mahalle);

	printf("Isim-Soyisim: %s\nOgrenci Numarasi: %d\nMail: %s\nDonem Ortalamasi: %.2f\n",ogrenci5.adSoyad,ogrenci5.ogrenciNo,ogrenci5.mail,ogrenci5.donemOrt);
    printf("Il: %s\nIlce: %s\nMahalle: %s",ogrenci5.adres.il,ogrenci5.adres.ilce,ogrenci5.adres.mahalle);
    
    
return 0;
}

