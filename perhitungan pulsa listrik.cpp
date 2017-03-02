#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

struct item{
	string nama;
	int jumlah;
	int daya;
	double lama;
	double kwh;
	int frekuensiHari;
};

// pilihan pertama
int i,n,N,Hit=0,pil;
double pulsa;
double totalDayaSatuHari=0,totalDayaDuaHari=0,totalDayaTigaHari=0,totalDayaEmpatHari=0,totalDayaLimaHari=0,totalDayaEnamHari=0,totalDayaTujuhHari=0,bulan=0;
item elektro[101];


void inputan(int n){
	cout<<"-------------------------------------------\n";
	cout<<"| Nama"<<"\t"<<"Jumlah"<<"\t"<<"Daya"<<"\t"<<"Lama "<<"\t"<<"Frekuensi |\n";
	cout<<"-------------------------------------------\n";
	for(i=1;i<=n;i++){	
		cin>>elektro[i].nama>>elektro[i].jumlah>>elektro[i].daya>>elektro[i].lama>>elektro[i].frekuensiHari;
		elektro[i].kwh=elektro[i].jumlah*elektro[i].daya*elektro[i].lama;
	}
}

void hitung(){
	cout <<"\nMasukkan jumlah pulsa listrik anda (KwH): ";
	cin>>pulsa;
	for(i=1;i<=n;i++){
		if(elektro[i].frekuensiHari==1){
				totalDayaSatuHari+=elektro[i].kwh;
		}else if(elektro[i].frekuensiHari==2){
				totalDayaDuaHari+=elektro[i].kwh;
		}else if(elektro[i].frekuensiHari==3){
				totalDayaTigaHari+=elektro[i].kwh;
		}else if(elektro[i].frekuensiHari==4){
				totalDayaEmpatHari+=elektro[i].kwh;
		}else if(elektro[i].frekuensiHari==5){
				totalDayaLimaHari+=elektro[i].kwh;
		}else if(elektro[i].frekuensiHari==6){
				totalDayaEnamHari+=elektro[i].kwh;
		}else if(elektro[i].frekuensiHari==7){
				totalDayaTujuhHari+=elektro[i].kwh;
		}
	}
	totalDayaSatuHari=totalDayaSatuHari/1000;
	totalDayaDuaHari=totalDayaDuaHari/1000;
	totalDayaTigaHari=totalDayaTigaHari/1000;
	totalDayaEmpatHari=totalDayaEmpatHari/1000;
	totalDayaLimaHari=totalDayaLimaHari/1000;
	totalDayaEnamHari=totalDayaEnamHari/1000;
	totalDayaTujuhHari=totalDayaTujuhHari/1000;
	while(bulan < pulsa){
		Hit++;
		bulan=bulan+totalDayaSatuHari;
		if(Hit%2==0){
			bulan=bulan+totalDayaDuaHari;
		}else if(Hit%3==0){
			bulan=bulan+totalDayaTigaHari;
		}else if(Hit%4==0){
			bulan=bulan+totalDayaEmpatHari;
		}else if(Hit%5==0){
			bulan=bulan+totalDayaLimaHari;
		}else if(Hit%6==0){
			bulan=bulan+totalDayaEnamHari;
		}else if(Hit%7==0){
			bulan=bulan+totalDayaTujuhHari;
		}
	}
	if(bulan>pulsa){
		Hit--;
	}
	HANDLE hstdin = GetStdHandle( STD_INPUT_HANDLE);
	HANDLE hstdout= GetStdHandle( STD_OUTPUT_HANDLE);
	WORD index = 0;
	SetConsoleTextAttribute(hstdout, 0x0C);
	std::cout<<"\nPulsa Listrik Anda akan habis kurang lebih "<<Hit<<" Hari lagi\n\n";
	SetConsoleTextAttribute(hstdout, 0x0F);
	std::cout<<endl;
}
/* END PROGRAM PERTAMA*/

// BEGIN program kedua
void pilih(){
	cout<<"Pilihan jumlah nominal uang yang tersedia"<<endl;
	cout<<"1. 20.000"<<endl;
	cout<<"2. 50.000"<<endl;	
	cout<<"3. 100.000"<<endl;
	cout<<"4. 250.000"<<endl;
	cout<<"5. 500.000"<<endl;
	cout<<"6. 1.000.000"<<endl;
	cout<<"Masukkan pilihan Anda (1/2/3/4/5/6): ";
}
void pildaya(){
	cout<<"Pilihan jumlah daya yang Anda miliki"<<endl;
	cout<<"a. 450"<<endl;
	cout<<"b. 900"<<endl;	
	cout<<"c. 1300"<<endl;
	cout<<"d. 2200"<<endl;
	cout<<"e. 3500"<<endl;
	cout<<"f. 5.500"<<endl;
	cout<<"Masukkan pilihan Anda (a/b/c/d/e/f) : ";
}
/* END PROGRAM PERTAMA*/

void judul(){
	HANDLE hstdin = GetStdHandle( STD_INPUT_HANDLE);
	HANDLE hstdout= GetStdHandle( STD_OUTPUT_HANDLE);
	WORD index = 0;
	int pilihan;
	SetConsoleTextAttribute(hstdout, 0x0B);
	cout<<"\t    ~-------------------------------------~"<<endl;
	SetConsoleTextAttribute(hstdout, 0x0B);
	std::cout<<"""   _______\\/          Program GET electric         \\/_______"<<endl;
	cout<<"+=============================================================+"<<endl;
	SetConsoleTextAttribute(hstdout, 0x0F);
	std::cout<<"   |         Program notifikasi penggunaan listrik         |"<<endl;
	cout<<"   |             Selamat Datang, semoga Anda puas          |"<<endl;
	SetConsoleTextAttribute(hstdout, 0x0B);
	std::cout<<"+=============================================================+"<<endl;
}

main(){
	judul();
	HANDLE hstdin = GetStdHandle( STD_INPUT_HANDLE);
	HANDLE hstdout= GetStdHandle( STD_OUTPUT_HANDLE);
	WORD index = 0;
	SetConsoleTextAttribute(hstdout, 0x0F);
	std::cout<<"\nPilihan menu yang tersedia : \n\n";
	cout<<"1. Prediksi Meteran Pulsa Listrik\n2. Menghitung biaya listrik prabayar\n3. Rincian Hasil pembelian pulsa Listrik\n";
	cout<<"\nSilahkan Masukan Menu Pilihan Anda (1/2/3): ";cin>>pil;
	SetConsoleTextAttribute(hstdout, 0x0B);
	std::cout<<"..........................................."<<endl;
	SetConsoleTextAttribute(hstdout, 0x0F);
	std::cout<<endl;
	
// PEMILIHAN MENU	
	if(pil==1){
		cout<<"Banyaknya Peralatan Elekronik yang Dipakai : ";
		cin>>n;
		cout<<"Masukkan rincian peralatan\n";
		inputan(n);		
		cout<<"-------------------------------------------\n";
		hitung();
	}else if(pil==2){
		double admin,harga,materai,listrik,ppj,rupiah,kwh,tarif,total,hasil;
	// masukkan pilihan nominal
		int pil2;
		pilih();	
		cin >> pil2;
		if(pil2 ==1 || pil2==2 || pil2==3 || pil2==4 || pil2==5 || pil2==6){
		pildaya();		
		}else{
		cout<<"Maaf Pilihan Nominal yang Anda masukkan tidak ada !"<<endl;
		pilih();
		cin >> pil2;
		pildaya();
		}	
		string daya2;
		cin >> daya2;
	
		if(daya2=="a"){
			tarif=415;
			}else if(daya2=="b"){
				tarif=605;
			}else if(daya2=="c" || daya2=="d" || daya2=="e" || daya2=="f"){
				tarif=1353.45;
		}else{
			cout<<"Pilihan yang Anda masukkan salah !"<<endl;
			pildaya();
			cin >> daya2;
			if(daya2=="a"){
			tarif=415;
			}else if(daya2=="b"){
				tarif=605;
			}else if(daya2=="c" || daya2=="d" || daya2=="e" || daya2=="f"){
				tarif=1353.45;
			}
		}
		
		// memilih nominal pulsa
		if(pil2==1){
			harga=20000;
		}else if(pil2==2){
			harga=50000;
		}else if(pil2==3){
			harga=100000;
		}else if(pil2==4){
			harga=250000;
		}else if(pil2==5){
			harga=500000;
		}else if(pil2==6){
			harga=1000000;
		}
		
		// ceklagi yang ini
		//materai	
		if(pil2==5 || pil2==6){
			materai=3000;
		}else if(pil2==4 || pil2==3 || pil2==2 || pil2==1){
			materai=0;
		}		
		
		//if harga > 250.000 materai 3.000 lebih > 1 jt 6000
		admin=3000;
		listrik=harga-admin;
		rupiah=listrik-materai;
		ppj=(5/100)*rupiah;
		cout<<"ppj "<<ppj;
		kwh=rupiah/(1+(5/100));
		
		hasil=kwh/tarif;
		if(hasil !=0){
			HANDLE hstdin = GetStdHandle( STD_INPUT_HANDLE);
			HANDLE hstdout= GetStdHandle( STD_OUTPUT_HANDLE);
			WORD index = 0;
			SetConsoleTextAttribute(hstdout, 0x0D);
			std::cout << "\nJadi nominal sebesar "<< harga <<" dengan daya yang Anda miliki "<<setprecision(2)<< fixed << hasil <<"kwh";
			SetConsoleTextAttribute(hstdout, 0x0F);
		}
		
	/*BEGIN MENU PROGRAM 3*/
		
	}else if(pil==3){
		double standAwal, standAkhir, KWh, daya,tarif,blok1,blok2,blok3;
	    double harga, materai, biayaBeban,ppj, total;
	    int pil;
	    cout <<"Masukkan stand awal :";
	    cin >> standAwal;
	    cout <<"\nMasukkan stand akhir :";
	    cin>>standAkhir;
	    KWh=standAkhir-standAwal;
	    
		//masukkan pilihan daya
		cout<<"\nMasukkan pilihan daya :";
	    cin>>pil;
	    if(pil==1){
	        daya=450;
	        tarif=415;
	        if(KWh > 30){
	             blok1=30*169;
	             if((KWh-30) > 30){
	                blok2=30*360;
	                blok3=(KWh-60)*415;
	             }else{
	                blok2=(KWh-30)*360;
	                blok3=0;
	             }
	        }else{
	            blok1=KWh*169;
	            blok2=0; blok3=0;
	        }
	        cout << "Blok 1 "<<blok1 << " Blok 2 " << blok2 << " Blok 3 " << blok3 << endl;
	        harga=blok1+blok2+blok3;
	    }else if(pil==2){
	        daya=900;
	        tarif=605;
	        if(KWh > 30){
	             blok1=30*275;
	             if((KWh-30) > 30){
	                blok2=30*445;
	                blok3=(KWh-60)*605;
	             }else{
	                blok2=(KWh-30)*445;
	                blok3=0;
	             }
	        }else{
	            blok1=KWh*275;
	            blok2=0; blok3=0;
	        }
	        harga=blok1+blok2+blok3;
	    }else if(pil==3){
	        daya=1300;
	        tarif=1353.45;
	        harga=KWh*tarif;
	    }else if(pil==4){
	        daya=2200;
	        tarif=1353.45;
	        harga=KWh*tarif;
	    }else if(pil==5){
	        daya=3500;
	        tarif=1353.45;
	        harga=KWh*tarif;
	    }else if(pil==6){
	        daya=5500;
	        tarif=1353.45;
	        harga=KWh*tarif;
	    }else if (pil==7){
	        daya=6600;
	        tarif=1353.45;
	        harga=KWh*tarif;
	    }else if (pil==8){
	        cin >> daya;
	        tarif=1353.45;
	        harga=KWh*tarif;
	    }
	    cout <<"Harga = "<< harga <<endl;
	    biayaBeban= 40*(daya/1000)*tarif;
	    cout <<"Biaya Beban ="<<biayaBeban << endl;
	    if(harga<250000){
	        materai=0;
	    }else if(harga>=250000 && harga<=1000000){
	        materai=3000;
	    }else{
	        materai=6000;
	    }
	    cout <<"Materai "<< materai << endl;
	    ppj=(5/100)*(biayaBeban+harga);
	    cout <<"PPJ ="<< ppj << endl;
	    int admin=3000;
	
	    total=harga+biayaBeban+materai+ppj+admin;
	    cout <<"Total Harga ="<< total;
	//menu selain 1,2,3	
	}else{
		SetConsoleTextAttribute(hstdout, 0x0C);
		std::cout<<"Menu pilihan yang Anda masukkan tidak Ada"<<endl;
		
	}	
	SetConsoleTextAttribute(hstdout, 0x0B);
	std::cout<<"\n\n";
	cout<<"||    ||  ||>>>>>  ========  ||>>>>   ||  ||   /"<<endl;
	cout<<"||    ||  ||___       ||     ||___/   ||  ||__/"<<endl;
	cout<<"||    ||       ||     ||     ||   \\   ||  ||  \\"<<endl;
	cout<<">>>>> ||  <<<<<||     ||     ||    \\  ||  ||   \\"<<endl;
	
	SetConsoleTextAttribute(hstdout, 0x0E);
	std::cout<<"\n\nCreated by : \n";
	cout<<"----------------------------\n";
	cout<<"\\  |\E Eklima Nur Fatmala  |} \n";
	cout<<" \\ |\E LS Gilas Rafi Abadi |} \n";
	cout<<"  \\|\E Titi HAnifah        |}  \n";
	cout<<"++++++++++++++++++++++++++++\n";
	SetConsoleTextAttribute(hstdout, 0x0F);
	
	return 0;
}
