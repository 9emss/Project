#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iomanip.h>
#define co cout
#define ci cin
#define mulai() main()
#define en endl
#define hapus() clrscr()
#define tahan() getch()
#define enter() gethe()

garis2(){
   co << "----------------------------------------------------------------------------------------\n";
}

garisSd2(){
 	co << "========================================================================================\n";
}

heder2(){
	co << "\t\t\t\t   * TOKO KOMPUTER *\n";
   co << "\t\t\t\t  ** TEKNO KOMPUTER **\n";
   co << "\t\t\t *** Jl. Maju Mundur No. 69, Bekasi ***\n";
}

garisSd(){
	co << "==========================================================\n";
}

garis(){
	co << "----------------------------------------------------------\n";
}

heder(){
	co << "\t\t    *  TOKO KOMPUTER *\n";
   co << "\t\t   ** TEKNO KOMPUTER **\n";
   co << "\t  *** Jl. Maju Mundur No. 69, Bekasi ***\n";
}

int hitung_pajak(int a){
	return a*0.1;
}

int uang_balik(int a, int b){
   return a - b ;
}

int totalHarga(int jmlh, int hrg){
	return (jmlh * hrg);
}
