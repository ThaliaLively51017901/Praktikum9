#include <conio.h>
#include <iostream.h>
int persegi(int);
int main()
{
int number, result, hasil;
cout<<"Masukan Angka yang Akan Diakarkan: ";cin>>number;
hasil=persegi (number);
cout<<number<<" Hasilnya adalah "<<hasil<<endl;
getch();
return 0;
}
int persegi(int number)
{
return number*number;
}