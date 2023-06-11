#include <iostream>
 
using namespace std;
 
int main(){
int harga;
cout << "harga";
cin >> harga;
cout << "harga = Rp." << harga;

if(harga < 200000){
	cout << "tidak ada potongan";
}
else if (harga > 200000 || harga <= 250000)
{
	cout << "potongan = "  << (harga * (0.05));
}
else if(harga > 250000 || harga <= 300000)
{
	cout << "potongan = "  << (harga * (0.1));
	
}
else if(harga > 300000 || harga <= 350000)
{
	cout << "potongan = "  << harga * (0.15);
	
}
  return 0;
}

