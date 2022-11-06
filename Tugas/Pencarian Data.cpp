#include<iostream>
#include<conio.h>
using namespace std;
main()
{
bool repeat = true;
while (repeat){
int Nilai [25]= {34, 8, 50, 74, 87, 90, 12, 25, 20, 30, 35, 45, 40, 22, 29, 72, 60, 55, 53, 12, 32, 33, 12,41, 12};
int Posisi [ 20 ];
int i, Bilangan, Banyak= 0;
int N = 25;
bool Ketemu;
cout<<"Deretan Bilangan =";
for (i=0; i<N; i++)
cout<<Nilai [ i ] <<" ";
cout<<"\n\nMasukan Bilangan yang akan dicari = ";
cin>> Bilangan;
//Melakukan Pencarian
for (i=0; i<N; i++)
{
if (Nilai [ i ] ==Bilangan)
{
Ketemu = true;
Posisi [Banyak] = i;
Banyak++;
}
}
if (Ketemu)
{
cout<<"Bilangan "<<Bilangan<<" ditemukan Sebanyak "<<Banyak;
cout<<"\npada posisi ke =";
for(i=0; i<Banyak; i ++)
cout<<Posisi [ i ]<<" ";
}
else
{
cout<<"Bilangan "<<Bilangan<<" tidak ditemukan";
}
 cout << "\n\nUlangi? [y/n]" << endl;
        char answer;
        cin >> answer;
        repeat = answer == 'y';
getch ();
}
}
