// Judul        : Membuat program kasir
// Deskripsi    : Program kasir sederhana menghitung hasil pembayaran
// Developer    : Ananda Pannadhika Putra (2105551083)

#include <stdio.h>
//#include<string.h>										//Jika menggunakan fungsi strcpy()


int main(){
    char nama_barang[50];
    int kode_barang, jumlah_barang;
	int harga_barang, harga_total, subtotal_harga;
    int diskon = 0;

    printf("Masukkan kode barang  ");
    scanf("%d", &kode_barang);

    switch (kode_barang){									
        case 312:
            //strcpy(nama_barang,"Aqua");					//Dengan menggunakan fungsi strcpy()
		nama_barang[0] = 'A';
		nama_barang[1] = 'q';			
		nama_barang[2] = 'u';		
    		nama_barang[3] = 'a';  
    		nama_barang[4] = '\0';  
	  
	        harga_barang = 4000;

            break;

        case 124:
         	//strcpy(nama_barang,"Freshtea");				//Dengan menggunakan fungsi strcpy()
			nama_barang[0] = 'F';
			nama_barang[1] = 'r';			
			nama_barang[2] = 'e';		
    		nama_barang[3] = 's';  
 			nama_barang[4] = 'h';
			nama_barang[5] = 't';			
			nama_barang[6] = 'e';		
    		nama_barang[7] = 'a'; 
    		nama_barang[8] = '\0'; 
    		
            harga_barang = 6000;

            break;
        case 211:
            //strcpy(nama_barang,"Teh Botol");				//Dengan menggunakan fungsi strcpy()
            nama_barang[0] = 'T';
		nama_barang[1] = 'e';			
		nama_barang[2] = 'h';		
    		nama_barang[3] = ' ';  
 		nama_barang[4] = 'B';
		nama_barang[5] = 'o';			
		nama_barang[6] = 't';		
    		nama_barang[7] = 'o'; 
    		nama_barang[8] = 'l';
		nama_barang[9] = '\0';
			
            harga_barang = 3000;
			
		break;
        
		default:
		printf("Mohon maaf kode yang anda masukkan tidak sesuai!");
        	
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
