#include <iostream.h>
#include <conio.h>
void tukarAB(int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"Dalam Fungsi TukarAB\n";
cout<<"Nilai a = "<<a<<" dan nilai b = "<<b<<endl;
}
int main()
{
int a,b;
cout<<"Masukan Nilai a: ";cin>>a;
cout<<"Masukan Nilai b: ";cin>>b;
cout<<"\nNilai a dan b sebelum masuk fungsi tukarAB: \n";
cout<<"Nilai a = "<<a<<" dan b "<<b<<endl<<endl;
tukarAB(a,b);
cout<<"\nNilai a dan b sesudah keluar fungsi tukarAB: \n";
cout<<"Nilai a = "<<a<<" dan b "<<b<<endl<<endl;
getch();
return(0);
}
