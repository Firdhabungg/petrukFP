#include <iostream>

using namespace std;

void menuAwal();
void listKota();
void listJakarta();
void listYogyakarta();
void listPadang();
void listBalikpapan();
void listMakassar();
void showError();
void listMakananMinuman();
void checkout();
char kota, menu, nharga, lanjut;
int harga, jumlah, total;

void listMakananMinuman(){
	system("cls");
		menuAwal();
}

void menuAwal(){
	string Menu[2] = {"1. Makanan", "2. Minuman"};
	cout<<"Selamat Datang di Restoran Tradisional\n";
	cout<<"======================================\n";
	cout<<"Silahkan Pilih Pesanan"<<endl;
	for(int i = 0; i<3; i++){
		cout<<Menu[i]<<endl;
	}
	cout<<"Masukkan Nomor Pesanan"<<endl;
	cin>>menu;
}

void listKota(){
		while(true){
			cout<<"Silahkan Pilih Kota :"<<endl;
			cout<<"1. Jakarta\n2. Yogyakarta\n3. Padang\n4. Balikpapan\n5. Makassar"<<endl;
			cout<<"Silahkan Pilih Pesanan"<<endl;
			cin>>kota;
		if(kota >='1' && kota <='5'){
			switch(kota){
				case'1':
					listJakarta();
					break;
				case'2':
					listYogyakarta();
					break;
				case'3':
					listPadang();
					break;
				case'4':
					listBalikpapan();
					break;
				case'5':
					listMakassar();
					break;
				}
			}
		}
}

void showError(){
	cout<<"Pilihan Tidak Tersedia. Silahkan Pilih Lagi"<<endl;
}

void listJakarta(){
	while(true){
	cout<<"1. Kerak Telor				20.000"<<endl;
					cout<<"2. Ketoprak				20.000"<<endl;
					cout<<"3. Nasi Uduk				15.000"<<endl;
					cout<<"4. Lontong Sayur			15.000"<<endl;
					cout<<"5. Kue Cucur				10.000"<<endl;
					cout<<"6. Kembali"<<endl;
					cout<<"Masukkan Nomor Pesanan :";
					cin>>nharga;
				if(nharga>='1' && nharga <='5'){
					cout << "Masukkan Jumlah Pesanan :";
            switch (nharga) {
                case '1':
                    harga = 20000;
                    break;
                case '2':
                    harga = 20000;
                    break;
                case '3':
                    harga = 15000;
                    break;
                case '4':
                    harga = 15000;
                    break;
                case '5':
                    harga = 10000;
                    break;
				}
				cin >> jumlah;
            total = harga * jumlah;
            cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listJakarta();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
		}else if (nharga== '6'){
			listKota();
		}else{
			showError();
		}
	}
}


void listYogyakarta(){
	while(true){
	cout<<"1. Gudeg				20.000"<<endl;
					cout<<"2. Gudangan				10.000"<<endl;
					cout<<"3. Bakpia				20.000"<<endl;
					cout<<"4. Yangko				15.000"<<endl;
					cout<<"5. Geplak				25.000"<<endl;
					cout<<"6. Kembali"<<endl;
					cout<<"Masukkan Nomor Pesanan :";
					cin>>nharga;
				if(nharga>='1' && nharga <='5'){
					cout << "Masukkan Jumlah Pesanan :";
            switch (nharga){
            	case '1':
                    harga = 20000;
                    break;
                case '2':
                    harga = 10000;
                    break;
                case '3':
                    harga = 20000;
                    break;
                case '4':
                    harga = 15000;
                    break;
                case '5':
                    harga = 25000;
                    break;
				}
				cin >> jumlah;
            total = harga * jumlah;
            cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listYogyakarta();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
		}else if (nharga== '6'){
			listKota();
		}else{
			showError();
		}
	}
}

void listPadang(){
	while(true){
	cout<<"1. Rendang			15.000"<<endl;
					cout<<"2. Sate Padang			15.000"<<endl;
					cout<<"3. Dendeng Balado		15.000"<<endl;
					cout<<"4. Ayam Pop			10.000"<<endl;
					cout<<"5. Lamang			20.000"<<endl;
					cout<<"6. Kembali"<<endl;
					cout<<"Masukkan Nomor Pesanan :";
					cin>>nharga;
				if(nharga>='1' && nharga <='5'){
					cout << "Masukkan Jumlah Pesanan :";
            switch (nharga){
            	case '1':
                    harga = 15000;
                    break;
                case '2':
                    harga = 15000;
                    break;
                case '3':
                    harga = 15000;
                    break;
                case '4':
                    harga = 10000;
                    break;
                case '5':
                    harga = 20000;
                    break;
				}
				cin >> jumlah;
            total = harga * jumlah;
            cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listPadang();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
		}else if (nharga== '6'){
			listKota();
		}else{
			showError();
		}
	}
}

void listBalikpapan(){
	while(true){
	cout<<"1. Roti Mantau			15.000"<<endl;
					cout<<"2. Pisang Gapit				10.000"<<endl;
					cout<<"3. Bubur Gunting				10.000"<<endl;
					cout<<"4. Bakmi Hijau				15.000"<<endl;
					cout<<"5. Abon Kepiting				40.000"<<endl;
					cout<<"6. Kembali"<<endl;
					cout<<"Masukkan Nomor Pesanan :";
					cin>>nharga;
				if(nharga>='1' && nharga <='5'){
					cout << "Masukkan Jumlah Pesanan :";
            switch (nharga){
            	case '1':
                    harga = 15000;
                    break;
                case '2':
                    harga = 10000;
                    break;
                case '3':
                    harga = 10000;
                    break;
                case '4':
                    harga = 15000;
                    break;
                case '5':
                    harga = 40000;
                    break;
				}
				cin >> jumlah;
            total = harga * jumlah;
            cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listBalikpapan();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
		}else if (nharga== '6'){
			listKota();
		}else{
			showError();
		}
	}
}

void listMakassar(){
	while(true){
	cout<<"1. Coto Makassar			15.000"<<endl;
					cout<<"2. Sup Konro				40.000"<<endl;
					cout<<"3. Mie Titi				15.000"<<endl;
					cout<<"4. Pallubasa				15.000"<<endl;
					cout<<"5. Pisang Epe				25.000"<<endl;
					cout<<"6. Kembali"<<endl;
					cout<<"Masukkan Nomor Pesanan :";
					cin>>nharga;
				if(nharga>='1' && nharga <='5'){
					cout << "Masukkan Jumlah Pesanan :";
            switch (nharga){
            	case '1':
                    harga = 15000;
                    break;
                case '2':
                    harga = 40000;
                    break;
                case '3':
                    harga = 15000;
                    break;
                case '4':
                    harga = 15000;
                    break;
                case '5':
                    harga = 25000;
                    break;
				}
				cin >> jumlah;
            total = harga * jumlah;
            cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listMakassar();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
		}else if (nharga== '6'){
			listKota();
		}else{
			showError();
		}
	}
}

void checkout(){
	cout<<"Total Harga :"<<total<<endl;
	cout<<"Checkout Pesanan?"<<endl;
	cout<<"1. Ya\n2. Tidak"<<endl;
	cin>>lanjut;
		switch(lanjut){
			case'1':
				cout<<"Terima Kasih Sudah Memesan";
				break;
			case'2':
				menuAwal();
				break;
		}
}

int main(){
	cout<<"Selamat Datang di Restoran Tradisional\n";
	cout<<"======================================\n";
	cout<<"Silahkan Pilih Pesanan"<<endl;
	cout<<"1. Makanan"<<endl;
	cout<<"2. Minuman"<<endl;
	cout<<"Masukkan Nomor Pesanan"<<endl;
	cin>>menu;
	system("cls");
		
		switch (menu){
		case '1':
			cout<<"Silahkan Pilih Kota :"<<endl;
			cout<<"1. Jakarta\n2. Yogyakarta\n3. Padang\n4. Balikpapan\n5. Makassar"<<endl;
			cout<<"Silahkan Pilih Pesanan"<<endl;
			cin>>kota;
			system("cls");
				
				switch (kota){
				case '1':
					cout<<"1. Kerak Telor				20.000"<<endl;
					cout<<"2. Ketoprak				20.000"<<endl;
					cout<<"3. Nasi Uduk				15.000"<<endl;
					cout<<"4. Lontong Sayur			15.000"<<endl;
					cout<<"5. Kue Cucur				10.000"<<endl;
					cout<<"6. Kembali"<<endl;
					cout<<"Masukkan Nomor Pesanan :";
					cin>>nharga;
						switch(nharga){
						case'1':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=20000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listJakarta();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;	
						case'2':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=20000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listJakarta();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'3':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=15000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listJakarta();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'4':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=15000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listJakarta();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'5':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=10000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listJakarta();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'6':
							listKota();
							system("cls");
						}
					break;
				case '2':
					cout<<"1. Gudeg				20.000"<<endl;
					cout<<"2. Gudangan				10.000"<<endl;
					cout<<"3. Bakpia				20.000"<<endl;
					cout<<"4. Yangko				15.000"<<endl;
					cout<<"5. Geplak				25.000"<<endl;
					cout<<"6. Kembali"<<endl;
					cout<<"Masukkan Nomor Pesanan :";
					cin>>nharga;
					switch(nharga){
						case'1':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=20000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listYogyakarta();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;	
						case'2':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=10000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listYogyakarta();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'3':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=20000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listYogyakarta();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'4':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=15000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listYogyakarta();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'5':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=25000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listYogyakarta();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'6':
							listKota();
							system("cls");
						}
					break;
				case '3':
					cout<<"1. Rendang			15.000"<<endl;
					cout<<"2. Sate Padang			15.000"<<endl;
					cout<<"3. Dendeng Balado		15.000"<<endl;
					cout<<"4. Ayam Pop			10.000"<<endl;
					cout<<"5. Lamang			20.000"<<endl;
					cout<<"6. Kembali"<<endl;
					cout<<"Masukkan Nomor Pesanan :";
					cin>>nharga;
					switch(nharga){
						case'1':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=15000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listPadang();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;	
						case'2':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=15000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listPadang();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'3':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=15000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listPadang();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'4':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=10000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listPadang();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'5':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=20000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listPadang();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'6':
							listKota();
							system("cls");
						}
					break;
				case '4':
					cout<<"1. Roti Mantau			15.000"<<endl;
					cout<<"2. Pisang Gapit				10.000"<<endl;
					cout<<"3. Bubur Gunting				10.000"<<endl;
					cout<<"4. Bakmi Hijau				15.000"<<endl;
					cout<<"5. Abon Kepiting				40.000"<<endl;
					cout<<"6. Kembali"<<endl;
					cout<<"Masukkan Nomor Pesanan :";
					cin>>nharga;
					switch(nharga){
						case'1':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=15000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listBalikpapan();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;	
						case'2':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=10000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listBalikpapan();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'3':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=10000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listBalikpapan();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'4':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=15000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listBalikpapan();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'5':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=40000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listBalikpapan();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'6':
							listKota();
							system("cls");
						}
					break;
				case '5':
					cout<<"1. Coto Makassar			15.000"<<endl;
					cout<<"2. Sup Konro				40.000"<<endl;
					cout<<"3. Mie Titi				15.000"<<endl;
					cout<<"4. Pallubasa				15.000"<<endl;
					cout<<"5. Pisang Epe				25.000"<<endl;
					cout<<"6. Kembali"<<endl;
					cout<<"Masukkan Nomor Pesanan :";
					cin>>nharga;
					switch(nharga){
						case'1':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=15000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listMakassar();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;	
						case'2':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=40000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listMakassar();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'3':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=15000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listMakassar();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'4':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=15000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listMakassar();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'5':
							cout<<"Masukkan Jumlah Pesanan :";
							harga=25000;
							cin>>jumlah;
							total = harga*jumlah;
							cout<<"Lanjut Memesan?"<<endl;
							cout<<"1. Ya\n2. Tidak"<<endl;
							cin>>lanjut;
								switch(lanjut){
								case'1':
									listMakassar();
									system("cls");
									break;
								case'2':
									checkout();
									break;
								}
							break;
						case'6':
							listKota();
							system("cls");
						}
					break;
				}		
			break;
		case '2':
			cout<<"Silahkan Pilih Minuman"<<endl;
			break;
		}
		
}
