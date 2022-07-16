#include <iostream>
#include <string>
using namespace std;

int main() {
  int i;
  
  int nilai[20] = {10,20,30,40,50,60,70,80,90,90,85,31};
  
  int temp = 0;
  
  int jumlahSiswaTertinggi = 0;
  
  for(i = 0; i < 10; i++) {
  	if(nilai[i] > temp) {
    	temp = nilai[i];
    }
    
    if(i == 9) {
	    cout << nilai[i] ;
    } else {
    	cout << nilai[i] << ", ";
    }
    
  }
  
  for(i = 0; i < 10; i++) {
  	if(nilai[i] == temp) {
    	jumlahSiswaTertinggi += 1;
    }
  }
  
  
  
  
  
  cout << endl;  
  cout << endl;  
  
  cout << "nilai terbesar adalah: " << temp;
  cout << endl;  
  cout << "jumlah siswa mendapatkan nilai tertinggi: " << jumlahSiswaTertinggi << " orang";
 
  return 0;
}
