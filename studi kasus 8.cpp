#include <iostream>
using namespace std;

class Matriks{
  public:
  float baris();
  float kolom();
  float output(); 
  private:
  int a[3][3]={{60,65,80}, {45,80,90},{45,90,90}};
  float jumlah=0, ratarata1, ratarata2;
};
float Matriks::baris(){
    jumlah =0;
    for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      jumlah = jumlah+a[i][j];
      ratarata1 = jumlah/3;
    }
    jumlah=0;
    cout << "Rata-rata Kelulusan pertahun dari prodi " << ratarata1 << "  "<< endl;
    }
}

