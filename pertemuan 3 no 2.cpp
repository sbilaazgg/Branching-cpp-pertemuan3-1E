#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Masukkan angka pertama: ";
cin>> a;
cout<<"Masukkan angka kedua: ";
cin>> b;
cout<<"Masukkan angka ketiga: ";
cin>> c;

int terbesar;
if(a>=b && b>=c) {
    terbesar=a;
}
else if (b>=c && b>=c){
    terbesar=b;
}
else {
    terbesar=c;
}

cout<<"Angka terbesar adalah:"<< terbesar << endl;

return 0;
}
