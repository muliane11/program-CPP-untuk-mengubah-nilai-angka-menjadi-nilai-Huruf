#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
 int a;
 cout<<"Masukkan Nilai Mahasiswa : ";
 cin>>a;

 if((a>=0)&&(a<=24))
 {
  cout<<"Nilai Mahasiswa E"<<endl;
 }
 else if((a>=25)&&(a<=44))
 {
  cout<<"Nilai Mahasiswa D"<<endl;
 }
 else if((a>=45)&&(a<=69))
 {
  cout<<"Nilai Mahasiswa C"<<endl;
 }
 else if((a>=70)&&(a<=89))
 {
  cout<<"Nilai Mahasiswa B"<<endl;
 }
 else if((a>=90)&&(a<=100))
 {
  cout<<"Nilai Mahasiswa A"<<endl;
 }
 else
 {
  cout<<"Input Error";
 }
 getch;
 return 0;
}
