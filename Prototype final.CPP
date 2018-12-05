#include "yourmom.h"

int hitung_pajak(int a);
int uang_balik(int a, int b);
int totalHarga(int jmlh, int hrg);

mulai(){
   int ban = 0;
	struct{
   	int sub, subw, banyak, jenis[30], harga[100], banyAk[30], pajak, pajek, total[50], jumlah, bayar, pot, kembali, tot_har;
   	char pilih[6], ulang, kode[10][10], merk[100][100], merek[10];

   }input;
   char bar[15] = "--------------";

   balik:
   input.jumlah = 0;
   hapus();
	heder();        // Memanggil Fungsi yang telah di buat di file header yourmom
   garisSd();      //
   co << en;
	co << "\tSelamat Berbelanja Di Toko Kami\n";
   co << "\tMenu Utama : \n";
   co << "\t\t1. List Barang Dan Daftar Harga\n";
   co << "\t\t2. Belanja\n";
   co << "\t\t3. Keluar\n";
   co << en;
   garis();
   co << en;
   co << "\tMasukan Pilihan : "; ci >> input.pilih;
   if((strcmp(input.pilih, "1") == 0)){// Proses percabangan ke - 1
   	hapus();
      heder2();
      garis2();
      co << "|\t\t\t\t  LIST DAN HARGA BARANG\t\t\t\t       |\n";
      garisSd2();
      co << "| NO.     Jenis         Merk        Kode      Tipe                       Harga\t       |\n";
      garis2();
      co << "|  1.     Processor                    \t\t\t\t\t\t       |\n";
      co << "|                       INTEL          \t\t\t\t\t\t       |\n";
      co << "|                                   I9KBLXE   INTEL Core i9 7980XE       Rp. 31000000  |\n";
      co << "|                                   I9KBL     INTEL Core i9 7900         Rp. 13000000  |\n";
      co << "|                                   I7CFL     INTEL Core i7 8700K        Rp. 6500000   |\n";
      co << "|                                   I7KBL     INTEL Core i7 7700K        Rp. 5000000   |\n";
      co << "|                                   I7SKL     INTEL Core i7 6700K        Rp. 4800000   |\n";
      co << "|                                   I5KBL     INTEL Core i5 8600K        Rp. 4400000   |\n";
      co << "|                                   I5KBL     INTEL Core i5 7400         Rp. 2650000   |\n";
      co << "|                                   I5KBL     INTEL Core i5 6400         Rp. 2400000   |\n";
      co << "|                       AMD            \t\t\t\t\t\t       |\n";
      co << "|                                   RHT29     Ryzen Threadripper 2990WX  Rp. 28250000  |\n";
      co << "|                                   RHT19     Ryzen Threadripper 1950X   Rp. 12000000  |\n";
      co << "|                                   R727      Ryzen 7 2700X              Rp. 5200000   |\n";
      co << "|                                   R717      Ryzen 7 1700X              Rp. 4500000   |\n";
      co << "|                                   R526      Ryzen 5 2600X              Rp. 3600000   |\n";
      co << "|                                   R516      Ryzen 5 1600X              Rp. 3000000   |\n";
      co << "|                                   R322      Ryzen 3 2200G              Rp. 1500000   |\n";
      co << "|                                   R312      Ryzen 3 1200               Rp. 1400000   |\n";
      co << "|  2.     RAM                          \t\t\t\t\t\t       |\n";
      co << "|                       CORSAIR        \t\t\t\t\t\t       |\n";
      co << "|                                   CSR16     Vengeance 16 Gb            Rp. 2200000   |\n";
      co << "|                                   CSR8      Vengeance 8  Gb            Rp. 1300000   |\n";
      co << "|                       GSKILL         \t\t\t\t\t\t       |\n";
      co << "|                                   GSL16     RipjawsV  16 Gb            Rp. 1275000   |\n";
      co << "|                                   GSL8      RipjawsV  8  Gb            Rp. 775000    |\n";
      co << "|  3.     PSU                          \t\t\t\t\t\t       |\n";
      co << "|                       CORSAIR        \t\t\t\t\t\t       |\n";
      co << "|                                   750       Corsair CX750M 80+ Bronze  Rp. 1600000   |\n";
      co << "|                                   600       Corsair CX600 80+ Bronze   Rp. 900000    |\n";
      co << "|                                   450       Corsair VS450 80+ Bronze   Rp. 550000    |\n";
      garisSd2();
      co << "| Note :\t\t\t\t\t\t\t\t\t       |\n";
      co << "|\t1. Setiap Pembelian Berjumlah 3 atau Lebih Akan Mendapat Potongan 15%\t       |\n";
      co << "|\t2. Setiap Pembelian Mendapatkan PPN 10%\t\t\t\t\t       |\n";
      garis2();
      co << "Lanjut Ke Belanja ? [Y/T]: "; ci >> input.ulang;
      if(input.ulang == 'Y' || input.ulang == 'y'){
      	goto lanjut;
      }else if(input.ulang == 'T' || input.ulang == 't'){
      	return 0;
      }

   }else if((strcmp(input.pilih, "2") == 0)){// Proses percabangan ke - 1
   	lanjut:
      hapus();
      heder();
      garisSd();
      co << en;
      co << "\tSub Menu : \n";
      co << "\t\t1. Processor\n";
      co << "\t\t2. RAM\n";
      co << "\t\t3. PSU\n";
      co << "\t\t4. Kembali\n";
      co << en;
      garis();
      co << en;
      co << "\tMasukan Pilihan : "; ci >> input.pilih;
      if((strcmp(input.pilih, "1") == 0)){// Proses percabangan ke - 2
         strcpy(input.merek, "PROCESSOR");
         hapus();
         heder2();
         garisSd2();
         		co << "\tJenis Barang        : " << input.merek << en;
      			co << "\tBanyak Tipe         : "; ci >> input.banyak;
      	if(input.banyak <=4){
      		for(int x = 1; x <= input.banyak; x++){
         		co << "\tTipe Ke - " << x << en;
         		co << "\tMasukan Kode Merk   : "; ci >> input.kode[x];
   				if((strcmp(input.kode[x], "I9KBLXE") == 0) || (strcmp(input.kode[x], "i9kblxe") == 0)){
            		strcpy(input.merk[x], "INTEL Core i9 7980XE      ");
               	input.harga[x] = 31000000;
            	}else if((strcmp(input.kode[x], "I9KBL") == 0) || (strcmp(input.kode[x], "i9kbl") == 0)){
            		strcpy(input.merk[x], "INTEL Core i9 7900        ");
               	input.harga[x] = 13000000;
            	}else if((strcmp(input.kode[x], "I7CFL") == 0) || (strcmp(input.kode[x], "i7cfl") == 0)){
            		strcpy(input.merk[x], "INTEL Core i7 8700K       ");
               	input.harga[x] = 6500000;
            	}else if((strcmp(input.kode[x], "I7KBL") == 0) || (strcmp(input.kode[x], "i7kbl") == 0)){
            		strcpy(input.merk[x], "INTEL Core i7 7700K       ");
               	input.harga[x] = 5000000;
            	}else if((strcmp(input.kode[x], "I7SKL") == 0) || (strcmp(input.kode[x], "i7skl") == 0)){
            		strcpy(input.merk[x], "INTEL Core i7 6700K       ");
               	input.harga[x] = 4800000;
            	}else if((strcmp(input.kode[x], "I5CFL") == 0) || (strcmp(input.kode[x], "i5cfl") == 0)){
            		strcpy(input.merk[x], "INTEL Core i5 8600K       ");
               	input.harga[x] = 4400000;
            	}else if((strcmp(input.kode[x], "I5KBL") == 0) || (strcmp(input.kode[x], "i5kbl") == 0)){
            		strcpy(input.merk[x], "INTEL Core i5 7400        ");
               	input.harga[x] = 2650000;
            	}else if((strcmp(input.kode[x], "I5SKL") == 0) || (strcmp(input.kode[x], "i5skl") == 0)){
            		strcpy(input.merk[x], "INTEL Core i5 6400        ");
               	input.harga[x] = 2400000;
            	}else if((strcmp(input.kode[x], "RHT19") == 0) || (strcmp(input.kode[x], "rht19") == 0)){
            		strcpy(input.merk[x], "Ryzen Threadripper 1950X  ");
               	input.harga[x] = 12000000;
            	}else if((strcmp(input.kode[x], "RHT29") == 0) || (strcmp(input.kode[x], "rht29") == 0)){
            		strcpy(input.merk[x], "Ryzen Threadripper 2990WX ");
               	input.harga[x] = 28250000;
            	}else if((strcmp(input.kode[x], "R727") == 0) || (strcmp(input.kode[x], "r727") == 0)){
            		strcpy(input.merk[x], "Ryzen 7 2700X             ");
               	input.harga[x] = 5200000;
            	}else if((strcmp(input.kode[x], "R717") == 0) || (strcmp(input.kode[x], "r717") == 0)){
            		strcpy(input.merk[x], "Ryzen 7 1700X             ");
               	input.harga[x] = 4500000;
            	}else if((strcmp(input.kode[x], "R526") == 0) || (strcmp(input.kode[x], "r526") == 0)){
            		strcpy(input.merk[x], "Ryzen 5 2600X             ");
               	input.harga[x] = 3600000;
            	}else if((strcmp(input.kode[x], "R516") == 0) || (strcmp(input.kode[x], "r516") == 0)){
            		strcpy(input.merk[x], "Ryzen 5 1600X             ");
               	input.harga[x] = 3000000;
            	}else if((strcmp(input.kode[x], "R322") == 0) || (strcmp(input.kode[x], "r322") == 0)){
            		strcpy(input.merk[x], "Ryzen 3 2200G             ");
               	input.harga[x] = 1500000;
            	}else if((strcmp(input.kode[x], "R312") == 0) || (strcmp(input.kode[x], "r312") == 0)){
            		strcpy(input.merk[x], "Ryzen 3 1200              ");
               	input.harga[x] = 1400000;
            	}else{
            		strcpy(input.merk[x], " - ");
               	input.harga[x] = 0;
            	}
               co << "\tBanyak yang di beli : "; ci >> input.banyAk[x];

         	}
         	garis2();
 				co << "No.   Merek dan Tipe Barang          Banyak      Harga                    Subtotal" << en;
            co << "                                     Barang      Satuan                           " << en;
 				garis2();
            //proses untuk menampilkan data yang telah di pilih dalam bentuk tabel
 				for(int x = 1; x <= input.banyak; x++){
 					co << setiosflags(ios::left) << setw(6) << x;
 					co << setiosflags(ios::left) << setw(13) << input.merk[x];
               co << setiosflags(ios::right) << setw(6) << input.banyAk[x];
               co << setiosflags(ios::left) << setw(6) << "\t         ";
               co << setiosflags(ios::left) << setw(25) << input.harga[x];
               //Menghitung Total Barang
               ban = ban + input.banyAk[x];
               //Menghitung Subtotal
               //totalHarga(input.harga[x], input.banyAk[x])
               co << setiosflags(ios::left) << setw(16) << totalHarga(input.harga[x], input.banyAk[x]);
					co << endl;
               //Menghitung Jumlah Harga
               input.jumlah = input.jumlah + totalHarga(input.harga[x], input.banyAk[x]);
				}
            // proses menghitung jumlah harga, potongan, pajak
				garis2();
            co << setiosflags(ios::right) << setw(74) << "Total Barang    :     ";
            co << setiosflags(ios::left) << setw(9) << ban << en;
            if(ban >= 3){
            	// Menghitung Besarnya Potongan
            	input.pot = 0.15 * input.jumlah + 1;
            }else{
            	input.pot = 0;
            }
            co << setiosflags(ios::right) << setw(74) << "Jumlah Harga    : Rp. ";
            co << setiosflags(ios::left) << setw(9) << input.jumlah << en;
            co << setiosflags(ios::right) << setw(74) << "PPN             : Rp. ";
            //Menghitung Pajak
            //hitung_pajak(input.jumlah);
            co << setiosflags(ios::left) << setw(9) << hitung_pajak(input.jumlah) << en;
            co << setiosflags(ios::right) << setw(74) << "Potongan        : Rp. ";
            co << setiosflags(ios::left) << setw(9) << input.pot << en;
            co << setiosflags(ios::right) << setw(74) << "----------------------";
            co << setiosflags(ios::left) << setw(0) << bar << en;
            //Menghitung Total Harga
            input.tot_har = input.jumlah + hitung_pajak(input.jumlah) - input.pot;
            co << setiosflags(ios::right) << setw(74) << "Total Harga     : Rp. ";
            co << setiosflags(ios::left) << setw(9) << input.tot_har << en;
            co << setiosflags(ios::right) << setw(74) << "Jumlah Bayar    : Rp. "; ci >> input.bayar;
            co << setiosflags(ios::right) << setw(74) << "Kembali         : Rp. ";
            co << setiosflags(ios::left) << setw(9) << uang_balik(input.bayar, input.tot_har) << en;
            garis2();
            co << en;
            co << setiosflags(ios::right) << setw(74) << "Cetak ? [Y/T]  :     "; ci >> input.ulang;
            if(input.ulang == 'Y' || input.ulang == 'y'){
            	goto cetak;
            }else{
            	hapus();
               co << "\tData Tidak Tercetak\n";
            }
      	}else{
      		co << "\tAnda Melebihi Kapasitas Pembelian!\n";
      	}
      }else if((strcmp(input.pilih, "2") == 0)){// Proses percabangan ke - 2
      	strcpy(input.merek, "RAM");
      	hapus();
         heder2();
         garisSd2();
         		co << "\tJenis Barang        : " << input.merek << en;
      			co << "\tBanyak Tipe         : "; ci >> input.banyak;
      	if(input.banyak <=4){
      		for(int x = 1; x <= input.banyak; x++){
         		co << "\tTipe Ke - " << x << en;
         		co << "\tMasukan Kode Merk   : "; ci >> input.kode[x];
   				if((strcmp(input.kode[x], "CSR16") == 0) || (strcmp(input.kode[x], "csr16") == 0)){
            		strcpy(input.merk[x], "Vengeance 16 Gb           ");
               	input.harga[x] = 2200000;
            	}else if((strcmp(input.kode[x], "CSR8") == 0) || (strcmp(input.kode[x], "csr8") == 0)){
            		strcpy(input.merk[x], "Vengeance 8  Gb           ");
               	input.harga[x] = 1300000;
            	}else if((strcmp(input.kode[x], "GSL16") == 0) || (strcmp(input.kode[x], "gsl16") == 0)){
            		strcpy(input.merk[x], "RipjawsV  16 Gb           ");
               	input.harga[x] = 1275000;
            	}else if((strcmp(input.kode[x], "GSL8") == 0) || (strcmp(input.kode[x], "gsl8") == 0)){
            		strcpy(input.merk[x], "RipjawsV  8  Gb           ");
               	input.harga[x] = 775000;
            	}else{
                  strcpy(input.merk[x], " - ");
                  input.harga[x] = 0;
               }
               co << "\tBanyak yang di beli : "; ci >> input.banyAk[x];

         	}
         	garis2();
 				co << "No.   Merek dan Tipe Barang          Banyak      Harga                    Subtotal" << en;
            co << "                                     Barang      Satuan                           " << en;
 				garis2();
            //proses untuk menampilkan data yang telah di pilih dalam bentuk tabel
 				for(int x = 1; x <= input.banyak; x++){
 					co << setiosflags(ios::left) << setw(6) << x;
 					co << setiosflags(ios::left) << setw(13) << input.merk[x];
               co << setiosflags(ios::right) << setw(6) << input.banyAk[x];
               co << setiosflags(ios::left) << setw(6) << "\t         ";
               co << setiosflags(ios::left) << setw(25) << input.harga[x];
               //Menghitung Total Barang
               ban = ban + input.banyAk[x];
               //Menghitung Subtotal
               //totalHarga(input.harga[x], input.banyAk[x])
               co << setiosflags(ios::left) << setw(16) << totalHarga(input.harga[x], input.banyAk[x]);
					co << endl;
               //Menghitung Jumlah Harga
               input.jumlah = input.jumlah + totalHarga(input.harga[x], input.banyAk[x]);
				}
            // proses menghitung jumlah harga, potongan, pajak
				garis2();
            co << setiosflags(ios::right) << setw(74) << "Total Barang    :     ";
            co << setiosflags(ios::left) << setw(9) << ban << en;
            if(ban >= 3){
            	// Menghitung Besarnya Potongan
            	input.pot = 0.15 * input.jumlah + 1;
            }else{
            	input.pot = 0;
            }
            co << setiosflags(ios::right) << setw(74) << "Jumlah Harga    : Rp. ";
            co << setiosflags(ios::left) << setw(9) << input.jumlah << en;
            co << setiosflags(ios::right) << setw(74) << "PPN             : Rp. ";
            //Menghitung Pajak
            //hitung_pajak(input.jumlah);
            co << setiosflags(ios::left) << setw(9) << hitung_pajak(input.jumlah) << en;
            co << setiosflags(ios::right) << setw(74) << "Potongan        : Rp. ";
            co << setiosflags(ios::left) << setw(9) << input.pot << en;
            co << setiosflags(ios::right) << setw(74) << "----------------------";
            co << setiosflags(ios::left) << setw(0) << bar << en;
            //Menghitung Total Harga
            input.tot_har = input.jumlah + hitung_pajak(input.jumlah) - input.pot;
            co << setiosflags(ios::right) << setw(74) << "Total Harga     : Rp. ";
            co << setiosflags(ios::left) << setw(9) << input.tot_har << en;
            co << setiosflags(ios::right) << setw(74) << "Jumlah Bayar    : Rp. "; ci >> input.bayar;
            co << setiosflags(ios::right) << setw(74) << "Kembali         : Rp. ";
            co << setiosflags(ios::left) << setw(9) << uang_balik(input.bayar, input.tot_har) << en;
            garis2();
            co << en;
            co << setiosflags(ios::right) << setw(74) << "Cetak ? [Y/T]  :     "; ci >> input.ulang;
            if(input.ulang == 'Y' || input.ulang == 'y'){
            	goto cetak;
            }else if(input.ulang == 'T' || input.ulang == 't'){
            	hapus();
               co << "\tData Tidak Tercetak\n";
            }
         }else{
      		co << "\tAnda Melebihi Kapasitas Pembelian!\n";
      	}
      }else if((strcmp(input.pilih, "3") == 0)){// Proses percabangan ke - 2
      	strcpy(input.merek, "PSU");
      	hapus();
         heder2();
         garisSd2();
         		co << "\tJenis Barang        : " << input.merek << en;
      			co << "\tBanyak Tipe         : "; ci >> input.banyak;
      	if(input.banyak <=4){
      		for(int x = 1; x <= input.banyak; x++){
         		co << "\tTipe Ke - " << x << en;
         		co << "\tMasukan Kode Merk   : "; ci >> input.kode[x];
   				if((strcmp(input.kode[x], "750") == 0)){
            		strcpy(input.merk[x], "Corsair CX750M 80 Plus    ");
               	input.harga[x] = 1600000;
            	}else if((strcmp(input.kode[x], "600") == 0)){
            		strcpy(input.merk[x], "Corsair CX600 80 Plus     ");
               	input.harga[x] = 900000;
            	}else if((strcmp(input.kode[x], "450") == 0)){
            		strcpy(input.merk[x], "Corsair VS450 80 Plus     ");
               	input.harga[x] = 550000;
            	}else{
                  strcpy(input.merk[x], " - ");
               	input.harga[x] = 0;
               }
               co << "\tBanyak yang di beli : "; ci >> input.banyAk[x];

         	}
         	garis2();
 				co << "No.   Merek dan Tipe Barang          Banyak      Harga                    Subtotal" << en;
            co << "                                     Barang      Satuan                           " << en;
 				garis2();
            //proses untuk menampilkan data yang telah di pilih dalam bentuk tabel
 				for(int x = 1; x <= input.banyak; x++){
 					co << setiosflags(ios::left) << setw(6) << x;
 					co << setiosflags(ios::left) << setw(13) << input.merk[x];
               co << setiosflags(ios::right) << setw(6) << input.banyAk[x];
               co << setiosflags(ios::left) << setw(6) << "\t         ";
               co << setiosflags(ios::left) << setw(25) << input.harga[x];
               //Menghitung Total Barang
               ban = ban + input.banyAk[x];
               //Menghitung Subtotal
               //totalHarga(input.harga[x], input.banyAk[x])
               co << setiosflags(ios::left) << setw(16) << totalHarga(input.harga[x], input.banyAk[x]);
					co << endl;
               //Menghitung Jumlah Harga
               input.jumlah = input.jumlah + totalHarga(input.harga[x], input.banyAk[x]);
				}
            // proses menghitung jumlah harga, potongan, pajak
				garis2();
            co << setiosflags(ios::right) << setw(74) << "Total Barang    :     ";
            co << setiosflags(ios::left) << setw(9) << ban << en;
            if(ban >= 3){
            	// Menghitung Besarnya Potongan
            	input.pot = 0.15 * input.jumlah + 1;
            }else{
            	input.pot = 0;
            }
            co << setiosflags(ios::right) << setw(74) << "Jumlah Harga    : Rp. ";
            co << setiosflags(ios::left) << setw(9) << input.jumlah << en;
            co << setiosflags(ios::right) << setw(74) << "PPN             : Rp. ";
            //Menghitung Pajak
            //hitung_pajak(input.jumlah);
            co << setiosflags(ios::left) << setw(9) << hitung_pajak(input.jumlah) << en;
            co << setiosflags(ios::right) << setw(74) << "Potongan        : Rp. ";
            co << setiosflags(ios::left) << setw(9) << input.pot << en;
            co << setiosflags(ios::right) << setw(74) << "----------------------";
            co << setiosflags(ios::left) << setw(0) << bar << en;
            //Menghitung Total Harga
            input.tot_har = input.jumlah + hitung_pajak(input.jumlah) - input.pot;
            co << setiosflags(ios::right) << setw(74) << "Total Harga     : Rp. ";
            co << setiosflags(ios::left) << setw(9) << input.tot_har << en;
            co << setiosflags(ios::right) << setw(74) << "Jumlah Bayar    : Rp. "; ci >> input.bayar;
            co << setiosflags(ios::right) << setw(74) << "Kembali         : Rp. ";
            co << setiosflags(ios::left) << setw(9) << uang_balik(input.bayar, input.tot_har) << en;
            garis2();
            co << en;
            co << setiosflags(ios::right) << setw(74) << "Cetak ? [Y/T]  :     "; ci >> input.ulang;
            if(input.ulang == 'Y' || input.ulang == 'y'){
            	goto cetak;
            }else if(input.ulang == 'T' || input.ulang == 't'){
            	hapus();
               co << "\tData Tidak Tercetak\n";
            }
         }else{
      		co << "\tAnda Melebihi Kapasitas Pembelian!\n";
      	}
      }else if((strcmp(input.pilih, "4") == 0)){// Proses percabangan ke - 2
      	goto balik;
      }else{
      	co << "\tAnda Salah Masukan Kode!\n";
      }
   }else{// Proses percabangan ke - 1
   	return 0;
   }

   // Menampilkan Data yang sudah dipilih dalam bentuk tabel
	cetak:
   hapus();
   heder2();
   garisSd2();
   co << "No.   Merek dan Tipe Barang          Banyak      Harga                    Jumlah" << en;
   co << "                                     Barang      Satuan                   Harga" << en;
   garis2();
   input.jumlah = 0;
   // Menampilkan Data yang sudah dipilih dalam bentuk tabel
   for(int x = 1; x <= input.banyak; x++){
   	co << setiosflags(ios::left) << setw(6) << x;
      co << setiosflags(ios::left) << setw(13) << input.merk[x];
      co << setiosflags(ios::right) << setw(6) << input.banyAk[x];
      co << setiosflags(ios::left) << setw(6) << "\t         ";
      co << setiosflags(ios::left) << setw(25) << input.harga[x];
      co << setiosflags(ios::left) << setw(16) << totalHarga(input.harga[x], input.banyAk[x]);
      input.jumlah = input.jumlah + totalHarga(input.harga[x], input.banyAk[x]);
      co << endl;

   }


   garis2();
   // Menampilkan Data yang sudah dipilih dalam bentuk tabel
   co << setiosflags(ios::right) << setw(74) << "Total Barang    :     ";
   co << setiosflags(ios::left) << setw(9) << ban << en;
   co << setiosflags(ios::right) << setw(74) << "Jumlah Harga    : Rp. ";
   co << setiosflags(ios::left) << setw(9) << input.jumlah << en;
   co << setiosflags(ios::right) << setw(74) << "PPN             : Rp. ";
   co << setiosflags(ios::left) << setw(9) << hitung_pajak(input.jumlah) << en;
   co << setiosflags(ios::right) << setw(74) << "Potongan        : Rp. ";
   co << setiosflags(ios::left) << setw(9) << input.pot << en;
   co << setiosflags(ios::right) << setw(74) << "----------------------";
   co << setiosflags(ios::left) << setw(0) << bar << en;
   co << setiosflags(ios::right) << setw(74) << "Total Harga     : Rp. ";
   co << setiosflags(ios::left) << setw(9) << input.tot_har << en;
   co << setiosflags(ios::right) << setw(74) << "Jumlah Bayar    : Rp. ";
   co << setiosflags(ios::left) << setw(9) << input.bayar << en;
   co << setiosflags(ios::right) << setw(74) << "Kembali         : Rp. ";
   co << setiosflags(ios::left) << setw(9) << uang_balik(input.bayar, input.tot_har) << en;
   garis2();
   co << en;
   co << en;
   co << "\t Hormat Kami\n";
   co << en;
   co << en;
   co << "\t   Admin\n";
   tahan();
}

