/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...:1
**				ÖĞRENCİ ADI...............:Javid Ahmadzada
**				ÖĞRENCİ NUMARASI.:B231210560
**				DERS GRUBU…………:1 ogretim B grubu
****************************************************************************/

#include <iostream>
#include<time.h>
#include <string>
#include <cmath>
using namespace std;
//Ogrenci yapisi 
struct Ogrenciler
{
	string isim[22] = { "Abad","Abadin","Abakay","Abay","Omer","Muhammed","Abaza","Bahir","Bahtiyar","Bakanay","Balaturk","Baldemir","Cabbar","Calp","Canberk","Duran","Danyal","Daras","Nihat","Ferhat","Firuz","Gezgin" };
	string soyisim[22] = { "Ahmadov","Yusifov","Abalioglu","Adal","Abay","Adan","Avni","Aydan","Ayhan","Yavuz","Selvi","Ozdemir","Aksel","Uyanik","Selvi","Ozturk","Kulaksiz","Eroglu","Karamanli","Oktay","MetiNeren","Bozkurt" };
	double vize, odev1, odev2, KisaSinav1, KisaSinav2, Yil_Sonu_Not, Final, Yil_Ici_Not;

};
int main()
{
	//öğrencilerin ödev ve sınav ağırlıklarını giriniz 
	int harfnotu;
	int sinifortalama = 0;
	int standartSapma;
	int karelertoplam = 0;
	setlocale(LC_ALL, "Turkey");
	srand(time(NULL));

	Ogrenciler ogrenci;
	int OgrenciSayi, OdevAgirligi, GecmeNotu, Kisasinavagirligi, Vizeagirligi, FinalAgirligi;
	cout << "Ogrenci sayina giriniz:";
	cin >> OgrenciSayi;
	cout << "Yil icindeki odev agirliklarini yaziniz(%):";
	cin >> OdevAgirligi;
	cout << "Kisa Sinavlarin agirliklarini yaziniz(%):";
	cin >> Kisasinavagirligi;
	cout << "Vize agirligini giriniz(%):";
	cin >> Vizeagirligi;
	cout << "Gecme notunu yaziniz:";
	cin >> GecmeNotu;
	cout << "Final not agirligini yaziniz(%):";
	cin >> FinalAgirligi;
	cout << endl;

	//öğrenciler hakkında puan bilgileri
	int a = 0;
	int b = 0;
	int c = 0;
	float max = 0;
	float min = 100;
	int deger1 = 0, deger2 = 0, deger3 = 0, deger4 = 0, deger5 = 0, deger6 = 0, deger7 = 0, deger8 = 0,deger9=0;


	for (int x = 1;x <= OgrenciSayi;x++)
	{
		cout << x << ".Isim:" << ogrenci.isim[rand() % 22] << endl << "soyisim:" << ogrenci.soyisim[rand() % 22] << endl;


		if (a < OgrenciSayi * 0.2) //öğrencilerin 20% 80-100 puan aralığında olsun
		{

			ogrenci.vize = rand() % 21 + 80;
			ogrenci.odev1 = rand() % 21 + 80;
			ogrenci.odev2 = rand() % 21 + 80;
			ogrenci.KisaSinav1 = rand() % 21 + 80;
			ogrenci.KisaSinav2 = rand() % 21 + 80;
			ogrenci.Final = rand() % 21 + 80;
			cout << "Vize notu:" << ogrenci.vize << endl;
			cout << "Odev 1 notu:" << ogrenci.odev1 << endl;
			cout << "Odev 2 notu:" << ogrenci.odev2 << endl;
			cout << "Kisa Sinav 1 notu:" << ogrenci.KisaSinav1 << endl;
			cout << "Kisa Sinav 2 notu:" << ogrenci.KisaSinav2 << endl;
			a++;

		}


		else if (c < OgrenciSayi * 0.3) //öğrencilerin 30% 0-50 puan aralığında olsun

		{
			ogrenci.vize = rand() % 50;
			ogrenci.odev1 = rand() % 50;
			ogrenci.odev2 = rand() % 50;
			ogrenci.KisaSinav1 = rand() % 50;
			ogrenci.KisaSinav2 = rand() % 50;
			ogrenci.Final = rand() % 50;
			cout << "Vize notu:" << ogrenci.vize << endl;
			cout << "Odev 1 notu:" << ogrenci.odev1 << endl;
			cout << "Odev 2 notu:" << ogrenci.odev2 << endl;
			cout << "Kisa Sinav 1 notu:" << ogrenci.KisaSinav1 << endl;
			cout << "Kisa Sinav 2 notu:" << ogrenci.KisaSinav2 << endl;
			c++;

		}




		else if (b < OgrenciSayi * 0.5) //öğrencilerin 50% 50-80 puan aralığında olsun
		{
			ogrenci.vize = rand() % 31 + 50;
			ogrenci.odev1 = rand() % 31 + 50;
			ogrenci.odev2 = rand() % 31 + 50;
			ogrenci.KisaSinav1 = rand() % 31 + 50;
			ogrenci.KisaSinav2 = rand() % 31 + 50;
			ogrenci.Final = rand() % 31 + 50;
			cout << "Vize notu:" << ogrenci.vize << endl;
			cout << "Odev 1 notu:" << ogrenci.odev1 << endl;
			cout << "Odev 2 notu:" << ogrenci.odev2 << endl;
			cout << "Kisa Sinav 1 notu:" << ogrenci.KisaSinav1 << endl;
			cout << "Kisa Sinav 2 notu:" << ogrenci.KisaSinav2 << endl;
			b++;
		}



		ogrenci.Yil_Sonu_Not = (ogrenci.KisaSinav1 + ogrenci.KisaSinav2) * (Kisasinavagirligi / 100) + ogrenci.vize * (Vizeagirligi / 100) + (ogrenci.odev1 + ogrenci.odev2) * OdevAgirligi / 100 + ogrenci.Final * FinalAgirligi / 100;
		//her harf notundan kac ogrenci oldugunu bulan kod
		if (ogrenci.Yil_Sonu_Not >= 90) {

			deger1++;

		}
		else if (ogrenci.Yil_Sonu_Not >= 85) {
			deger2++;

		}

		else if (ogrenci.Yil_Sonu_Not >= 80) {

			deger3++;

		}
		else if (ogrenci.Yil_Sonu_Not >= 75) {

			deger4++;


		}
		else if (ogrenci.Yil_Sonu_Not >= 65) {

			deger5++;


		}
		else if (ogrenci.Yil_Sonu_Not >= 58) {

			deger6++;


		}
		else if (ogrenci.Yil_Sonu_Not >= 50) {

			deger7++;


		}
		else if (ogrenci.Yil_Ici_Not>=40){

			deger8++;

		}
		else {
			deger9++;
		}

		//Min ve Max ogrenci yillik notlarini bulunuz
		for (int x = 0;x < OgrenciSayi;x++) {
			if (min > ogrenci.Yil_Sonu_Not) {
				min = ogrenci.Yil_Sonu_Not;
			}
			if (max < ogrenci.Yil_Sonu_Not) {
				max = ogrenci.Yil_Sonu_Not;
			}
		}





		//Ogrenci Yil sonunda  notlari 
		cout << "Ogrenci yil sonu notu:" << ogrenci.Yil_Sonu_Not << endl;

		//Ogrenci yillik notlari harf karsiliginda
		if (ogrenci.Yil_Sonu_Not >= 90)
		{
			cout << "Harf Notu: AA PEKIYI" << endl << endl;
		}
		else if (ogrenci.Yil_Sonu_Not >= 85)
		{
			cout << "Harf Notu: BA IYI-PEKIYI" << endl << endl;
		}
		else if (ogrenci.Yil_Sonu_Not >= 80)
		{
			cout << "Harf Notu: BB IYI" << endl << endl;
		}
		else if (ogrenci.Yil_Sonu_Not >= 75)
		{
			cout << "Harf Notu: CB ORTA-IYI" << endl << endl;
		}
		else if (ogrenci.Yil_Sonu_Not >= 65)
		{
			cout << "Harf Notu: CC ORTA" << endl << endl;
		}
		else if (ogrenci.Yil_Sonu_Not >= 58)
		{
			cout << "Harf Notu: DC ZAYIF-ORTA" << endl << endl;
		}
		else if (ogrenci.Yil_Sonu_Not >= 50)
		{
			cout << "Harf Notu: DD ZAYIF" << endl << endl;
		}
		else if (ogrenci.Yil_Ici_Not >= 40) {
			cout << "Harf Notu: FD BASARISIZ" << endl << endl;
		}
		else
		{
			cout << "Harf Notu: FF BASARISIZ" << endl << endl;
		}






		sinifortalama += ogrenci.Yil_Sonu_Not / OgrenciSayi; // sinifortalamasini bulan kod

		//standart sapma 
		karelertoplam += pow(ogrenci.Yil_Sonu_Not - sinifortalama, 2);


	}




	standartSapma = sqrt(karelertoplam / OgrenciSayi);//standart sapma hesaplama 
	cout << "___________________" << endl << "Sinif ortalamasi:" << sinifortalama << endl; //sinif ortalamasini ekrana yazdirin
	cout << "Standart sapma: " << standartSapma << endl;
	cout << "Max ogrenci yil sonu notu:" << max << endl;
	cout << "Min ogrenci yil sonu notu:" << min << endl;
	cout << "AA alan ogrenci sayisi:" << deger1 << endl;
	cout << "BA alan ogrenci sayisi:" << deger2 << endl;
	cout << "BB alan ogrenci sayisi:" << deger3 << endl;
	cout << "CB alan ogrenci sayisi:" << deger4 << endl;
	cout << "CC alan ogrenci sayisi:" << deger5 << endl;
	cout << "DC alan ogrenci sayisi:" << deger6 << endl;
	cout << "DD alan ogrenci sayisi:" << deger7 << endl;
	cout << "FD alan ogrenci sayisi:" << deger8 << endl;
	cout << "FF  alan ogrenci sayisi:" << deger9 << endl << endl;

	
	//sinif yuzdesini hesaplamak icin:
	float percent1 = (deger1) * 100 / OgrenciSayi;
	float percent2 = (deger2) * 100 / OgrenciSayi;
	float percent3 = (deger3) * 100 / OgrenciSayi;
	float percent4 = (deger4) * 100 / OgrenciSayi;
	float percent5 = (deger5) * 100 / OgrenciSayi;
	float percent6 = (deger6) * 100 / OgrenciSayi;
	float percent7 = (deger7) * 100 / OgrenciSayi;
	float percent8 = (deger8) * 100 / OgrenciSayi;
	float percent9 = (deger9) * 100 / OgrenciSayi;

	cout << "_______________________" << endl;
	cout << "AA alan ogrenci orani:" << percent1 << "%" << endl;
	cout << "BA alan ogrenci orani:" << percent2 << "%" << endl;
	cout << "BB alan ogrenci orani:" << percent3 << "%" << endl;
	cout << "CB alan ogrenci orani:" << percent4 << "%" << endl;
	cout << "CC alan ogrenci orani:" << percent5 << "%" << endl;
	cout << "DC alan ogrenci orani:" << percent6 << "%" << endl;
	cout << "DD alan ogrenci orani:" << percent7 << "%" << endl;
	cout << "FD alan ogrenci orani:" << percent8 << "%" << endl;
	cout << "FF alan ogrenci orani:" << percent9 << "%" << endl;
	return 0;
}









