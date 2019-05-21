#include <iostream.h>
#include <math.h>
#include <conio.h>
int panjang, lebar;     //deklarasi variabel global
void input();           //deklarasi prototipe fungsi
void Luas()
{
int ls;                 //deklarasi variabel lokal
ls = panjang*lebar;
cout<<"Luasnya adalah: "<<ls;
}
void Keliling()
{
int kl;                 //deklarasi variabel lokal
kl = (2*panjang)+(2*lebar);
cout<<"Kelilingnya adalah: "<<kl;
}
void Diagonal()
{
float dg;               //deklarasi variabel lokal
dg = sqrt((panjang*panjang)+(lebar*lebar));
cout<<"Diagonalnya adalah: "<<dg;
}
void main()
{
int pilih;
do
{
clrscr();
cout<<"Pilihlah ------>"<<endl;
cout<<"1. Luas Persegi Panjang\n";
cout<<"2. Keliling Persegi Panjang\n";
cout<<"3. Diagonal Persegi Panjang\n";
cout<<"4. SELESAI\n";
cout<<"Masukan Pilihan Anda: ";cin>>pilih;
if(pilih !=4)
input();               //pemanggilan fungsi input
switch(pilih)
{
case 1: Luas();        //pemanggilan fungsi luas
        break;
case 2: Keliling();    //pemanggilan fungsi keliling
        break;
case 3: Diagonal();    //pemanggilan fungsi diagonal
        break;
case 4: cout<<"Terima Kasih..!";
}
getch();
}
while(pilih !=4);
}
void input()
{
cout<<"Masukan Nilai Panjang: ";cin>>panjang;
cout<<"Masukan Nilai Lebar  : ";cin>>lebar;
return;
}
