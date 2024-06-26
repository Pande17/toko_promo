#include<iostream>
using namespace std;

int main(){
	const double DISKON_DI_ATAS_250 = 0.9; // diskon 10% di atas 250 ribu
	const double DISKON_DI_ATAS_400 = 0.8; // diskon 20% di atas 400 ribu
	
	int hargaKemeja = 90000, hargaTopi = 35000, hargaCelana = 100000; // deklarasi harga pakaian
	int totalHarga, hargaA, hargaB; // deklarasi harga
	double kemeja, topi, celana; // deklarasi pakaian
	char lagi;
	
	system("cls");
	do{
	// list harga pakaian
	cout<<"|============================================================================|"<<endl;
	cout<<"|                                LIST PAKAIAN                                |"<<endl;
	cout<<"|============================================================================|"<<endl;
	cout<<"|                         1. Kemeja = Rp. 90.000/pcs                         |"<<endl;
	cout<<"|                          2. Topi = Rp. 35.000/pcs                          |"<<endl;
	cout<<"|                      3. Celana Jeans = Rp. 100.000/pcs                     |"<<endl;
	cout<<"=============================================================================|"<<endl;
	cout<<endl;

	// promo yang tersedia
	cout<<"|=============================================================================|"<<endl;
	cout<<"|                                    PROMO                                    |"<<endl;
	cout<<"|=============================================================================|"<<endl;
	cout<<"|     Belanja Lebih Dari Rp. 250.000 Akan Mendapatkan Diskon Sebesar 10%      |"<<endl;
	cout<<"|     Belanja Lebih Dari Rp. 400.000 Akan Mendapatkan Diskon Sebesar 20%      |"<<endl;
	cout<<"|    Belanja Kurang Atau Sama Dengan Rp. 250.000 Tidak Mendapatkan Diskon     |"<<endl;
	cout<<"|=============================================================================|"<<endl;
	cout<<endl;
	
	// input output data belanja
	cout << "Masukkan Jumlah Kemeja Yang Ingin Dibeli : ";
	cin >> kemeja;
	cout << "Masukkan Jumlah Topi Yang Ingin Dibeli : ";
	cin >> topi;
	cout << "Masukkan Jumlah Celana Jeans Yang Ingin Dibeli : ";
	cin >> celana;

		//proses
		totalHarga = (kemeja * 90000) + (topi * 35000) + (celana * 100000); // proses perhitungan totalHarga
	 
	// kondisi jika totalHarga lebih dari 400 ribu rupiah
	if (totalHarga > 400000) {
		hargaA = totalHarga * DISKON_DI_ATAS_400;
		cout << endl;
		cout << "Total Belanjaan : Rp. " << totalHarga << endl;
		cout << "Anda Mendapatkan Diskon 20%" << endl;
		cout << "Berikut Total Belanjaan Setelah Mendapatkan Diskon : Rp. " << hargaA << endl;
	}
	
	// kondisi jika totalHarga lebih dari 250 ribu rupiah
	else if (totalHarga > 250000) {
		cout << endl;
		hargaB = totalHarga * DISKON_DI_ATAS_250;
		cout << "Total Belanjaan : Rp. " << totalHarga << endl;
		cout << "Anda Mendapatkan Diskon 10%" << endl;
		cout << "Berikut Total Belanjaan Setelah Mendapatkan Diskon : Rp. " << hargaB << endl;
	}
	
	// kondisi jika totalHarga kurang atau sama dengan 250 ribu rupiah
	else {
		cout << endl;
		cout << "Total Belanjaan : Rp. " << totalHarga << endl;
		cout << "Anda Tidak Mendapatkan Diskon" << endl;
	}

	cout << "\n \n Apakah anda ingin mengulang lagi (Y/N) : ";
        cin >> lagi;

        lagi = tolower(lagi);

        if (lagi != 'y') {
            cout << "\n \n Terima Kasih Sudah Berkunjung \n \n";
            break; 
        }

    } while (lagi == 'y');
	 
	 	return 0;
}
