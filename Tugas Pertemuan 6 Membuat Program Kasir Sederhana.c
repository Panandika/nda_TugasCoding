// Judul        : Membuat program kasir
// Deskripsi    : Program kasir sederhana menghitung hasil pembayaran
// Developer    : Ananda Pannadhika Putra (2105551083)

#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    char nama_barang[50];
    int kode_barang, jumlah_barang;
	int harga_barang, harga_total, subtotal_harga;
    int diskon = 0;

    printf("Masukkan kode barang  ");
    scanf("%d", &kode_barang);

    switch (kode_barang){
        case 312:
            strcpy(nama_barang,"Aqua");
            harga_barang = 4000;

            break;

        case 124:
         	strcpy(nama_barang,"Freshtea");
            harga_barang = 6000;

            break;
        case 211:
            strcpy(nama_barang,"Teh Botol");
            harga_barang = 3000;

            break;
    }

    printf("Masukkan jumlah barang  ");
    scanf("%d", &jumlah_barang);
    
    subtotal_harga = harga_barang * jumlah_barang;
    
    if (kode_barang == 312){
    	if(subtotal_harga > 10000){
    		diskon = subtotal_harga * 0.05;
		}
		
	} else if (kode_barang == 124){
		diskon = 0;
		
	} else if (kode_barang == 211){
		if (jumlah_barang >= 2 && jumlah_barang <= 4){
			diskon = subtotal_harga * 0.1;
			
		} else if (jumlah_barang > 4){
			diskon = subtotal_harga * 0.15;
		}
	}

	harga_total = subtotal_harga - diskon;
	
	printf("Anda membeli %s\n", nama_barang);
	printf("Sub total harga Rp %d\n", subtotal_harga);
	printf("Diskon Rp %d\n", diskon);
	printf("TOTAL Rp %d", harga_total);
	
    return 0;
}
