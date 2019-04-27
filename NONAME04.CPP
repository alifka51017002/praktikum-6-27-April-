#include<iostream.h>
#include<conio.h>

void main () {
char kode ;
char nama [30], * bunga;
double harga, bayar;
int jumlah;
harga = 0;
clrscr();
cout<<" ahlisihir florist      \n";
cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"nama pembeli     : "; cin>>nama;
cout<<"\n";
cout<<"input kode bunga : ";cin>>kode;
cout<<"input jumlah beli: "; cin>>jumlah;
clrscr();
if (kode == 'a') {
harga = 100000;
bunga="mawar";
}

else if (kode== 'b') {
bunga = "Melati"
harga = 200000;
}
else if (kode=='c') {
bunga = "Anggrek";
harga = 300000;
}
else if (kode=='d') {
bunga ="nusa indah";
harga = 400000;
}

else {
cout<<"tidak ada kode yang sesuai ";
}

cout<<"               struk pembayaran              \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"nama pembeli   : "<<nama<<"\n";
cout<<"jenis bunga      : "<<bunga<<"\n";
cout<<"harga per satuan : "<<bunga<<"\n";
cout<<"jumlah beli  : "<<jumlah<<"\n";
cout<<"--------------------------------\n";
cout<<"tTotal harga : RP. "<<harga * jumlah <<"\n";
cout<<"\tUang bayar : RP "; cin>>bayar;
cout<<"\tUang kembali : RP. "<<bayar - (harga * jumlah)<<"\n\n";
getch();
}


