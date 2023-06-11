#include <iostream>
using namespace std;

int main(){
	int nilai_mtk;
	
	input_nilai_mtk:
	cout<<"Masukkan Nilai mtk";
	cin>> nilai_mtk;
	cout<< "nilai mtk yang diinput " << nilai_mtk;
	
	if(nilai_mtk ==0) {
		cout << "Nilai anda jelek"<<endl;
		goto selesai;
	
	}else if (nilai_mtk <=60){
		cout << "Lumayanlah" <<endl;
		goto selesai;
		
	}else if (nilai_mtk >70) {
		cout << " Selamat anda lulus"<<endl;
		goto selesai;
	}
	
	selesai:
	cout<< "Coba lagi"<<endl;
	return 0;
}
