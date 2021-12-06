#include <iostream>

using namespace std;

int main(){
	// deklarasi bilangan
	
	int a;
	// ouput 
	cout<<"Masukan Bilangan : ";
	//input 
	cin>>a;
	cout<<endl;
// if-else jika memenuhi syarat maka akan mengoutput bilangan genap jika tidak mengoutputkan bilangan ganjil

	if (a%2==0){
		cout<<a<<" Adalah bilangan genap"<<endl;
	}else {
		cout<<a<<" Adalah bilangan ganjil"<<endl;	
	}
	
	return 0;
}
