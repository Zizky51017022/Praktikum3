#include <iostream.h>
#include <conio.h>

int main ()
{ int n, m;
float l;
cout<<"Masukkan Tanggal Kelahiran Anda (n) : "; cin>>n;
cout<<"Masukkan Bulan Kelahiran Anda (m) : "; cin>>m;
cout<<"Masukkan Tahun Kelahiran Anda (l), isi 2 digit akhir : "; cin>>l;

n += m;
cout<<"Nilai n += m "<<n<<endl;
n -= m;
cout<<"Nilai n -= m "<<n<<endl;
n %= m;
cout<<"Nilai n %= m "<<n<<endl;
n *= m;
cout<<"Nilai n *= m "<<n<<endl;
l /= m;
cout<<"Nilai l /= m "<<l<<endl;
return(0);
}





