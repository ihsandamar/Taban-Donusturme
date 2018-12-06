#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 50  
/*2 ile 16 Arasýndaki Tabanlarý Birbirine Dönüþtürebilen Program*/
char rakam[16]="0123456789ABCDEF";  //burada rakam adlý deðiþken ve diðer fonkisyonlarý tanýmlý
int kontrol(int gir_taban,int don_taban,char sayi[MAX]);
int onluk_tabanda(int gir_taban,char sayi[MAX]);
void istenilen_tabanda(int don_taban,int onluk_sayi);

int main(void) {
	int gir_taban,don_taban;
	char sayi[MAX]="";
	while(1)
	{
		printf("Hangi tabandan donustureceksiniz\n   -->"); scanf("%d",&gir_taban);  // kulannýcýdan sayýyý, hangi tabaný ve hangi tabana cevrileceði alýnýyor
		printf("Hangi tabana donustureceksiniz\n   -->");  scanf("%d",&don_taban);
		printf("Lutfen Sayiyi Giriniz -->"); scanf("%s",&sayi);
		int c;
		if(kontrol(gir_taban,don_taban,sayi)==1) //burada girilen deðerler kontrol ediliyor ve yanlýþsa hesaplanmadan baþa döner
		{
			c=onluk_tabanda(gir_taban,sayi); //c deðiþkenine hesapladýðý onluk tabandaki deðeri atýyor
			istenilen_tabanda(don_taban,c);//onluk tabandaki c sayýsýný istenilen tabana çeviriyor 
		}	
		getch();
		system("CLS");	
	}
			
	return 0;
}

int kontrol(int gir_taban,int don_taban,char sayi[MAX])
{
	int i,j;
	if(gir_taban<2 || gir_taban>16 || don_taban<2 || don_taban>16)//buradaki if taban deðerlerini kontrol ediyor
		{
			printf("UYARI! Yalnizca 1 ile 17 Sayilari Taban Olarak Kullanabilirsiniz");
			return 0;
		}
	for(i=0;i<strlen(sayi);i++)
	{
		for(j=0;j<16;j++)
		{
			if(sayi[i]==rakam[j]) // eðer ikiside eþit ise taban üssü sayýnýn index çarpý rakamýn indexi iþlemini yapýyor
				{

					if(j>=gir_taban)//Eðer kullanýcý olmayan rakam girdiyse en sana genderip deðerler sýfýrlanýyor
					{
						printf("UYARI! Yanlis bir rakam girdiniz!");
						return 0;
					}
						
				}	
		}
	}
	return 1;	
}

int onluk_tabanda(int gir_taban,char sayi[MAX])
{
	int i,j,onluk_taban;
	strrev(sayi);
	for(i=0;i<strlen(sayi);i++)//ilk for döngüsü sayidaki elemanlara bakýyor
	{
		for(j=0;j<16;j++)// ikinci for döngüsü rakamdaki elemanlara bakýyor
		{
			if(sayi[i]==rakam[j]) // eðer ikiside eþit ise taban üssü sayýnýn index çarpý rakamýn indexi iþlemini yapýyor
			{
				onluk_taban+=j*pow(gir_taban,i);
			}
		}
	}
	return onluk_taban;
}


void istenilen_tabanda(int don_taban,int onluk_sayi)
{
	int kalan=0,c=0;
	char yeni_sayi[MAX];
	while(onluk_sayi >= don_taban) //burada onluk tabandaki sayi istenilen tabana sürekli bölünerek çevriliyor
	{	
		kalan=onluk_sayi%don_taban;
		onluk_sayi=onluk_sayi/don_taban;
		yeni_sayi[c]=rakam[kalan];
		c++;
	}yeni_sayi[c]=rakam[onluk_sayi];
	strrev(yeni_sayi);
	printf("\n\nGirdiginiz Sayi %d tabaninda %s \n\n",don_taban,yeni_sayi);
}


