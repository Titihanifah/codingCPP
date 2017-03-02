#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int i,n;
	float ipk[400],a;
	cout <<"Masukkan banyak data yang diinginkan : ";
	cin >> n;
	for(i=1; i<=n; i++){
		a = rand()%400+1;
		ipk[i] = a/100;
	
		
	}
	
	srand(time(NULL));
	//loop untuk menampilkan data ipk
	cout<<"Hasil random dari ipk"<<endl;
	cout<<"-------------------------------"<<endl;
	for(i=1; i<=n; i++){
		if(ipk[i] < 2) cout << "Data ke-" << i <<" = " << ipk[i] <<"--->"<<"Tidak Lulus"<<endl;
		else if(ipk[i] < 2.5) cout << "Data ke-" << i <<" = " << ipk[i] <<"--->" << "Biasa"<<endl;
		else if(ipk[i] < 3) cout << "Data ke-" << i <<" = " << ipk[i] <<"--->" << "Memuaskan"<<endl;
		else if(ipk[i] < 3.5) cout << "Data ke-" << i <<" = " << ipk[i] <<"--->" << "Luar Biasa"<<endl;
		else cout << "Data ke-" << i <<" = " << ipk[i] <<"--->" <<"Hebat"<<endl;
	}
	
	return 0;
}
