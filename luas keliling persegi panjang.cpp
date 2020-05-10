#include <iostream>
using namespace std;
int main (){
    int p,l,luas,keliling;

    cout<<"Masukan panjang persegi panjang : ";
    cin>>p;
    cout<<"Masukan lebar persegi panjang : ";
    cin>>l;

    luas=p*l;
    cout<<"Luas persegi panjang = "<<luas;
    
	keliling=p+l+p+l;
    cout<<"Keliling persegi panjang = "<<keliling;
	return 0;

}

