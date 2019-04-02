#include <iostream.h>
#include <conio.h>

main() {
int a,b,plus,min,kali,bagi,mod;
cout<<"Contoh Penggunaan Operator Aritmatik\n";
cout<<"Masukkan Angka Pertama (a) = "; cin>>a;
cout<<"Masukkan Angka Kedua (b) = "; cin>>b;
plus=a+b; min=a-b; kali=a*b; bagi=a/b; mod=a%b;
cout<<"\nJumlah = "<<plus;
cout<<"\nKurang = "<<min;
cout<<"\nKali = "<<kali;
cout<<"\nBagi = "<<bagi;
cout<<"\nModulo = "<<mod;
getch(); }
